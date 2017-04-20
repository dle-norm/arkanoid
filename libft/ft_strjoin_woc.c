/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_woc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-norm <dle-norm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 15:33:29 by dle-norm          #+#    #+#             */
/*   Updated: 2015/03/03 15:33:41 by dle-norm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin_woc(char *str, char *str2, char *c)
{
	char *ret_str;

	if (str[ft_strlen(str) - 1] == c[0])
		ret_str = ft_strjoin(str, str2);
	else
		ret_str = ft_strjoin(ft_strjoin(str, c), str2);
	return (ret_str);
}
