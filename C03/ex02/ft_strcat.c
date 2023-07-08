/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:53:42 by sichan            #+#    #+#             */
/*   Updated: 2023/06/26 20:00:23 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

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
