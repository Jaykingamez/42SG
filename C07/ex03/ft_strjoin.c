/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:10:53 by sichan            #+#    #+#             */
/*   Updated: 2023/07/06 11:45:11 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_length(char **str, char *sep, int size)
{
	int	i;
	int	j;
	int	counter;
	int	sep_counter;

	i = 0;
	j = 0;
	counter = 0;
	sep_counter = 0;
	while (sep[sep_counter])
		sep_counter++;
	while (i < size)
	{
		while (str[i][j++])
			counter++;
		counter += sep_counter;
		i++;
		j = 0;
	}
	counter++;
	counter -= sep_counter;
	return (counter);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_counter;
	int	src_counter;

	dest_counter = 0;
	src_counter = 0;
	while (dest[dest_counter] != '\0')
		dest_counter++;
	while (src[src_counter] != '\0')
	{
		dest[dest_counter] = src[src_counter];
		src_counter++;
		dest_counter++;
	}
	dest[dest_counter] = '\0';
	return (dest);
}

char	*malloc_char(int number, int size)
{
	char	*string;

	if (size <= 0)
		return ((char *) malloc(1 * sizeof(char)));
	string = (char *) malloc(number);
	if (!string)
		return (NULL);
	return (string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	string = malloc_char(get_length(strs, sep, size), size);
	if (size <= 0 || !string)
		return (string);
	string[counter] = '\0';
	while (i < size)
	{
		strcat(string, strs[i]);
		if (++i != size)
			strcat(string, sep);
	}
	return (string);
}
