/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:28:09 by abenton           #+#    #+#             */
/*   Updated: 2019/10/04 15:49:19 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	verify_newline(char **stack, char **line)
{
	char	*tmp;
	char	*stack_kek;
	int		i;

	i = 0;
	stack_kek = *stack;
	while (stack_kek[i] != '\n')
		if (!stack_kek[i++])
			return (0);
	tmp = &stack_kek[i++];
	ft_strdel(&stack_kek);
	*tmp = '\0';
	*line = ft_strdup(*stack);
	*stack = ft_strdup(tmp);
	return (1);
}

static int	read_file(int fd, char *heap, char **stack, char **line)
{
	int		res;
	char	*tmp;

	while ((res = read(fd, heap, BUFF_SIZE)) > 0)
	{
		heap[res] = '\0';
		if (*stack)
		{
			tmp = *stack;
			*stack = ft_strjoin(tmp, heap);
			free(tmp);
			tmp = NULL;
		}
		else
			*stack = ft_strdup(heap);
		if (verify_newline(stack, line))
			break ;
	}
	return (res > 0 ? 1 : res);
}

int			get_next_line(const int fd, char **line)
{
	static char	*stack[MAX];
	char		*heap;
	int			i;
	int			res;

	if (!line || fd < 0)
		return (-1);
	if (stack[fd] && verify_newline(&stack[fd], line))
		return (1);
	if (!(heap = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	i = 0;
	while (i < BUFF_SIZE)
		heap[i++] = '\0';
	res = read_file(fd, heap, &stack[fd], line);
	ft_strdel(&heap);
	if (res != 0 || stack[fd] == NULL || stack[fd][0] == '\0')
	{
		if (!res && *line)
			*line = NULL;
		return (res);
	}
	*line = stack[fd];
	stack[fd] = NULL;
	return (1);
}
