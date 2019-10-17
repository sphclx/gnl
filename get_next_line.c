/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:23:00 by abenton           #+#    #+#             */
/*   Updated: 2019/10/07 19:08:32 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_newline(char **stack, char **line)
{
	int		len;
	char	*temp;

	len = 0;
	while ((*stack)[len] != '\n' && (*stack)[len] != '\0')
		len++;
	if ((*stack)[len] == '\n')
	{
		*line = ft_strsub(*stack, 0, len);
		temp = ft_strdup(&((*stack)[len + 1]));
		free(*stack);
		*stack = temp;
		if ((*stack)[0] == '\0')
			ft_strdel(stack);
	}
	else
	{
		*line = ft_strdup(*stack);
		ft_strdel(stack);
	}
	return (1);
}

static int		ft_check(int fd, int ret, char **stack, char **line)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0 && stack[fd] == NULL)
		return (0);
	return (ft_newline(&stack[fd], line));
}

int				get_next_line(const int fd, char **line)
{
	int				ret;
	static char		*stack[OPEN_MAX];
	char			buff[BUFF_SIZE + 1];
	char			*temp;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (stack[fd] == NULL)
			stack[fd] = ft_strdup(buff);
		else
		{
			temp = ft_strjoin(stack[fd], buff);
			free(stack[fd]);
			stack[fd] = temp;
		}
		if (ft_strchr(stack[fd], '\n'))
			break ;
	}
	return (ft_check(fd, ret, stack, line));
}
