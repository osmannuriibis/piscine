#include <unistd.h>
void	ft_putchar	(char chr)
{
	write(1,&chr,1);
}
