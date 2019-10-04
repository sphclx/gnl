/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:24:46 by abenton           #+#    #+#             */
/*   Updated: 2019/10/03 18:05:58 by abenton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32
# define MAX 1024 + 1

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

int	get_next_line(const int fd, char **line);

#endif
