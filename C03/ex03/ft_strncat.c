/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:47:28 by sichan            #+#    #+#             */
/*   Updated: 2023/06/27 10:49:18 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_counter;
	unsigned int	src_counter;

	dest_counter = 0;
	src_counter = 0;
	while (dest[dest_counter] != '\0')
		dest_counter++;
	while (src[src_counter] != '\0' && src_counter < nb)
	{
		dest[dest_counter] = src[src_counter];
		src_counter++;
		dest_counter++;
	}
	dest[dest_counter] = '\0';
	return (dest);
}
