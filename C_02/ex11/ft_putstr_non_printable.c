convert_hexa_and_put(char c)
{
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[c / 16]);
	ft_putchar("0123456789abcdef"[c % 16]);
}

int is_char_printable(char c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{	int i;

	i = 0;
	while (str[i])
	{
		if(is_char_printable(srt[i]))
			ft_putchar(str[i]);
		else
			convert_hexa_and_put(str[i]);
	i++;
	}
}
