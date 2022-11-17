/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:00:48 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/11 15:12:21 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	sign = 1;
	while (nptr[i] == 32 || (nptr[i] >= 7 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		nb = nb * 10 + (nptr[i] - 48);
		i++;
	}
	return (nb * sign);
}
