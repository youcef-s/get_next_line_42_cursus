/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:13:15 by ylabtaim          #+#    #+#             */
/*   Updated: 2021/11/19 22:06:12 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (0);
	while (*s != c && *s)
		s++;
	if (*s == (unsigned char)c)
		return (s);
	else
		return (0);
}

char	*ft_strjoin(char *buffers, char *buff)
{
	int		i;
	int		j;
	char	*new;

	if (!buffers)
	{
		buffers = (char *)malloc(sizeof(char));
		buffers[0] = '\0';
	}
	new = (char *)malloc(sizeof(char) * (ft_strlen(buffers)
				+ ft_strlen(buff) + 1));
	if (new == 0)
		return (0);
	i = -1;
	j = 0;
	while (buffers[++i])
		new[i] = buffers[i];
	while (buff[j])
		new[i++] = buff[j++];
	new[ft_strlen(buffers) + ft_strlen(buff)] = '\0';
	free (buffers);
	return (new);
}
