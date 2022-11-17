/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:21:07 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/11 16:30:23 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_lenght(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	nb;

	nb = (long)n;
	len = ft_lenght(nb);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (nb < 0)
	{
		nb = -nb;
		res[0] = '-';
	}
	if (nb == 0)
		res[0] = '0';
	res[len] = '\0';
	len--;
	while (nb > 0)
	{
		res[len] = (nb % 10) + 48;
		nb /= 10;
		len--;
	}
	return (res);
}

/*
int	main(int argc, char **argv)
{
    printf("%s\n", ft_itoa(atoi(argv[1])));
    return (0);
}*/
