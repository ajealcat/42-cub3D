/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:51:09 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/26 16:56:20 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
	{
		while (*s)
		{
			write(fd, s, sizeof(*s));
			++s;
		}
	}
}
