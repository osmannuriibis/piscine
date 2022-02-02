#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int sayi)
{
    
    if (sayi < 0)
    {
        sayi = -sayi;
        ft_putchar('-');
    }
    
    if (sayi >= 10)  ft_putnbr(sayi / 10);
   
    ft_putchar((sayi % 10) + '0');
}
int main(){
    ft_putnbr(260);
}

