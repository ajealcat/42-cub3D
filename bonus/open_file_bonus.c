/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:59:17 by ajearuth          #+#    #+#             */
/*   Updated: 2022/05/24 11:01:40 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D_bonus.h"

bool	open_fd(char *file)
{
	int		fd;
	size_t	len;

	len = ft_strlen(file);
	fd = open(file, O_DIRECTORY);
	if (fd >= 0)
	{
		close(fd);
		return (error_messages(5));
	}
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (error_messages(5));
	else if ((ft_strncmp(&file[len - 4], ".cub", 4) != 0) || len <= 4)
	{
		close(fd);
		return (error_messages(5));
	}
	close(fd);
	return (true);
}