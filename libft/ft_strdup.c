/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:35:28 by dle-norm          #+#    #+#             */
/*   Updated: 2015/04/07 09:41:58 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char *dup;

	if (str != NULL)
	{
		dup = (char*)malloc(sizeof(char) * ft_strlen(str) + 1);
		if (dup == NULL)
			return (NULL);
		if (dup != NULL)
			return (ft_strcpy(dup, str));
	}
	return (NULL);
}
