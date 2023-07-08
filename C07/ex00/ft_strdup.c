/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:07:07 by sichan            #+#    #+#             */
/*   Updated: 2023/07/03 11:27:27 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		counter;
	int		counter2;

	counter = 0;
	counter2 = 0;
	while (src[counter] != '\0')
		counter++;
	counter++;
	dup = (char *) malloc(counter);
	while (src[counter2] != '\0')
	{
		dup[counter2] = src[counter2];
		counter2++;
	}
	dup[counter2] = '\0';
	return (dup);
}
