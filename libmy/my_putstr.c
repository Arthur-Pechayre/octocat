/*
** my_putstr.c for my_putstr.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 21:10:54 2015 PECHAYRE Arthur
** Last update Sat Oct  3 21:11:28 2015 PECHAYRE Arthur
*/
void	my_putchar(char c);

void    my_putstr(char *str)
{
  if (str != 0)
    while (*str != '\0')
      {
		my_putchar(*str);
		++str;
     }
}
