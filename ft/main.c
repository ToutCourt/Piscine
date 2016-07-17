/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 10:29:55 by glouyot           #+#    #+#             */
/*   Updated: 2016/07/10 14:33:52 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_putnbr(int nb);

int		main(void)
{
	char	*str;

	str = "Salut";
	ft_putnbr(ft_strlen(str));
	ft_putstr(str);
	str = ft_strrev(str);
	ft_putstr(str);
	ft_putnbr(ft_strlen(str));

	return (0);
}
