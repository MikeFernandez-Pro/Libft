/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifernan <mifernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 18:11:51 by mifernan          #+#    #+#             */
/*   Updated: 2019/10/27 11:09:02 by mifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	new = NULL;
	if (s1 && s2)
	{
		if (!(new = (char*)malloc(sizeof(char)
		* ((ft_strlen(s1) + ft_strlen(s2) + 1)))))
			return (NULL);
	}
	else
		return (NULL);
	while (s1 && s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
		new[i++] = s2[j++];
	if (new)
		new[i] = '\0';
	return (new);
}
