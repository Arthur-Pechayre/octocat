/*
** my_putchar.c for my_putchar.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 20:49:03 2015 PECHAYRE Arthur
** Last update Sat Oct  3 20:58:43 2015 PECHAYRE Arthur
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
