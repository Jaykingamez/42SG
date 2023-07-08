/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 15:31:24 by sichan            #+#    #+#             */
/*   Updated: 2023/06/27 14:24:10 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	if (size == 0)
		return (counter);
	while (src[counter] != '\0')
	{
		if (counter < size - 1)
			dest[counter] = src[counter];
		else if (counter < size)
			dest[counter] = '\0';
		counter++;
	}
	return (counter);
}
