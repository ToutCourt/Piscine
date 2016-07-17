/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 20:13:44 by glouyot           #+#    #+#             */
/*   Updated: 2016/07/10 20:06:38 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	temp;
	int	size;
	int carac_ascii;

	size = 1;
	carac_ascii = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	temp = nb;
	while ((temp = temp / 10) > 0)
		size = size * 10;
	temp = nb;
	while (size != 0)
	{
		carac_ascii = temp / size;
		ft_putchar((char)(temp / size) + 48);
		temp = temp % size;
		size = size / 10;
	}
}
