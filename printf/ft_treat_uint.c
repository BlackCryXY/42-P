void	ft_treat_uint(unsigned int i, int *len)
{
	if (i >= 10)
		ft_treat_uint(u / 10, len);
	ft_treat_char(i % 10 + '0', len);
}
