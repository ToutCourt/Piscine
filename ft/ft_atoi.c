/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 20:01:02 by glouyot           #+#    #+#             */
/*   Updated: 2016/07/10 23:59:30 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int		ft_atoi(char *str)
{
	int	temp;
	int	size;
	int carac_ascii;
	int	result;

	result = 0;
	size = 1;
	carac_ascii = 0;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	temp = ft_strlen(str);
	temp = nb;
	while (size != 0)
	{
		carac_ascii = temp / size;
		result += (int)((temp / size) + 48);
		temp = temp % size;
		size = size / 10;
	}
}
