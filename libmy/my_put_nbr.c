/*
** my_put_nbr.c for my_put_nbr.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 21:03:17 2015 PECHAYRE Arthur
** Last update Sat Oct  3 23:17:39 2015 PECHAYRE Arthur
*/
#include <unistd.h>

void    my_putchar(char c);

void    my_putstr(char *str);

void    my_put_nbr(int nb)
{
  if (nb == -2147483648)
    {
      my_putstr("-2147483648");
    }
  else
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = nb * -1;
	}
      if (nb >= 10)
	{
	  my_put_nbr(nb / 10);
	  my_put_nbr(nb % 10);
	}
      else
	{
	  my_putchar(nb + 48);
	}
    }
}
