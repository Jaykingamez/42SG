/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:26:18 by sichan            #+#    #+#             */
/*   Updated: 2023/06/28 14:42:16 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n)
	{
		if (s1[counter] != s2[counter]
			|| s1[counter] == '\0' || s2[counter] == '\0')
			return (s1[counter] - s2[counter]);
		counter++;
	}
	return (0);
}
