#include <unistd.h>
#include <stdio.h>
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
int ft_us_alma(int deger, int us_deger)
{
	int us_counter;
	int last_deger;
	
	last_deger = deger;
	us_counter=0;
	while (us_counter < us_deger - 1)
	{
		last_deger = last_deger * deger;
		us_counter++;
	}

	return (last_deger);
}

void    ft_print_combn(int n)
{
	char num[n];
	int n_counter;
    int cont_count;
    int kiyaslama_sayisi;

	n_counter = 0;
   
	//ft_putnbr(ft_us_alma(10,2));

	while(n_counter < ft_us_alma(10,n) )
	{
        printf("ilk while \n");
        //123
        kiyaslama_sayisi = n_counter * 10;
        cont_count =0 ;
        while (cont_count <n-1) {
            printf("ikinci while %i \n" , cont_count);
            //123
            kiyaslama_sayisi = kiyaslama_sayisi /10;
            if(kiyaslama_sayisi % 10 > (kiyaslama_sayisi/10)%10)
                {
                    num[n-1 + cont_count] = kiyaslama_sayisi % 10;
                    num[n + cont_count] = (kiyaslama_sayisi/10) % 10;
                    
                    if (cont_count == n-1)
                        write(1,num,n);
                    else
                        continue;
                }
            else
                break;
            
           
            
        }
        
        n_counter++;
    }

}
int main(){
    ft_print_combn(2);
}
