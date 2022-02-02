

int tab[2];

tab[0] = -1;
while(tab[0] < 98)
{
    tab[0]++;
    tab[1] = tab[0];
    while(tab[1] < 99)
    {
        tab[1]++;
        ft_putchar((tab[0] / 10) + 48);
        ft_putchar((tab[0] % 10) + 48);
        ft_putchar(' ');
        ft_putchar((tab[1] / 10) + 48);
        ft_putchar((tab[1] % 10) + 48);
        if(tab[0] != 98)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
    }
}
