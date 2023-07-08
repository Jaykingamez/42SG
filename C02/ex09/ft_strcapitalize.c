/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:16:32 by sichan            #+#    #+#             */
/*   Updated: 2023/06/25 14:23:57 by sichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		is_alphanumeric(char str);
int		is_uppercase(char str);
int		is_lowercase(char str);
char	*ft_strcapitalize(char *str);

int	is_alphanumeric(char str)
{
	if ((str >= 97 && str <= 122)
		|| (str >= 65 && str <= 90)
		|| (str >= 48 && str <= 57))
		return (1);
	return (0);
}

int	is_uppercase(char str)
{
	if ((str >= 65 && str <= 90))
		return (1);
	return (0);
}

int	is_lowercase(char str)
{
	if ((str >= 97 && str <= 122))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;
	int	is_word;

	counter = -1;
	is_word = 0;
	while (str[++counter] != '\0')
	{
		if (is_alphanumeric(str[counter]))
		{
			if (is_word == 0)
			{
				is_word = 1;
				if (is_lowercase(str[counter]))
					str[counter] -= 32;
			}
			else
			{
				if (is_uppercase(str[counter]))
					str[counter] += 32;
			}
		}
		else
			is_word = 0;
	}
	return (str);
}
