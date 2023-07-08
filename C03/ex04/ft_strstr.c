/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:03:57 by sichan            #+#    #+#             */
/*   Updated: 2023/07/06 11:51:51 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_length(char *str);
char	*ft_strstr(char *str, char *to_find);

int	get_length(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	str_counter;
	int	to_find_counter;
	int	to_find_length;

	str_counter = 0;
	to_find_counter = 0;
	to_find_length = get_length(to_find);
	if (to_find_length == 0)
		return (str);
	while (str[str_counter] != '\0')
	{
		if (str[str_counter] == to_find[to_find_counter])
			to_find_counter++;
		else
			to_find_counter = 0;
		if (to_find_length == to_find_counter)
			return (&(str[str_counter - to_find_length + 1]));
		str_counter++;
	}
	return (NULL);
}
