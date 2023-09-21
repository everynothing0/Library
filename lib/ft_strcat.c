// not libft

char	*ft_strcat(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (dst[i])
		i++;
	while (*src)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (dst);
}
