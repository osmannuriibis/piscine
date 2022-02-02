#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	deger;

	deger = 'a';
	while (deger <= 'z')
	{
		write(1, &deger, 1);
		deger++;
	}
}
