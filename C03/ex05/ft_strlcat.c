/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:57:17 by sichan            #+#    #+#             */
/*   Updated: 2023/06/29 17:31:57 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_counter;
	unsigned int	src_counter;
	unsigned int	counter;

	dest_counter = 0;
	src_counter = 0;
	counter = 0;
	while (dest[dest_counter] != '\0')
		dest_counter++;
	while (src[src_counter] != '\0')
		src_counter++;
	if (size < dest_counter || size < 1)
		return (src_counter + size);
	while (dest_counter < (size - 1) && src[counter] != '\0')
		dest[dest_counter++] = src[counter++];
	dest[dest_counter] = '\0';
	return (dest_counter + src_counter);
}
