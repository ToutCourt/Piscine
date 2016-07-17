/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 10:46:52 by glouyot           #+#    #+#             */
/*   Updated: 2016/07/10 14:47:33 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	*ft_strrev(char *str)
{
	int		cpt;
	int		len;
	char	tmp[ft_strlen(str) - 1];

	cpt = 0;
	len = ft_strlen(str) - 1;
	while (len >= 0)
	{
		tmp[cpt] = str[len];
		cpt++;
		len--;
	}
	tmp[ft_strlen(str)] = '\0';
	str = tmp;
	return (str);
}
