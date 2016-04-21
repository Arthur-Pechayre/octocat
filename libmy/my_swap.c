/*
** my_swap.c for my_swap.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 21:07:00 2015 PECHAYRE Arthur
** Last update Sat Oct  3 21:07:17 2015 PECHAYRE Arthur
*/
void	my_swap(int *a, int *b)
{
  int s;

  s = *a;
  *a = *b;
  *b = s;
}
