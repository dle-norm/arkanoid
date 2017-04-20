/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 18:18:48 by dle-norm          #+#    #+#             */
/*   Updated: 2015/05/02 11:45:38 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grosheader.h"

char	*take_line(char *str, char *cpy)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	cpy = (char *)malloc(sizeof(char) * i + 1);
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*is_null(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
	{
		str = (char *)malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL);
		str[i] = '\0';
	}
	return (str);
}

int		iter_line(int const fd, char **line, int ret)
{
	static char	*str;
	int			i;
	char		*buf;
	char		*cpy;

	i = 0;
	buf = (char *)malloc(sizeof(char) * BUFF_SIZE + 1);
	if (buf == NULL)
		return (-1);
	str = (str == NULL) ? is_null(str) : str;
	while (str[i] != '\n' && ret != 0)
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret == -1)
			return (ret);
		buf[ret] = '\0';
		str = ft_strjoin(str, buf);
		while (str[i] != '\n' && str[i] != '\0')
			i++;
	}
	cpy = ft_strdup(str);
	*line = take_line(cpy, *line);
	free (cpy);
	str = ft_moreonestrchr(str, '\n');
	return ((ret == 0 && str == '\0') ? 0 : 1);
}

int		get_next_line(int const fd, char **line)
{
	int			ret;

	if (fd < 0 || BUFF_SIZE <= 0 || line == NULL)
		return (-1);
	ret = 1;
	ret = iter_line(fd, line, ret);
	if (ret < 0)
		return (-1);
	if (ret > 0)
		return (1);
	else
		return (0);
}
