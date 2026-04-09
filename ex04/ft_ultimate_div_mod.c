void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buffer;
	
	buffer = *a / *b;
	*b = *a % *b;
	*a = buffer;
}
