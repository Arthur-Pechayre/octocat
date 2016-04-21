/*
** my_strlen.c for my_strlen.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 21:12:29 2015 PECHAYRE Arthur
** Last update Sat Oct  3 21:12:45 2015 PECHAYRE Arthur
*/
int     my_strlen(char *str)
{
  int i;

  i = 0;
  if (str != 0)
    while (*str != '\0')
      {
	++str;
	++i;
      }
  return (i);
}
