/*
** my_strncat.c for my_strncat.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 23:40:36 2015 PECHAYRE Arthur
** Last update Sat Oct  3 23:42:33 2015 PECHAYRE Arthur
*/
char	*my_strncat(char *str1, char *str2, int n)
{
  int i;
  int len;
  int e;

  i = 0;
  e = 0;
  len = 0;
  while (str1[len] != 0)
    {
      ++len;
    }
  while (str2[i] != 0 && i != n)
    {
      str2[i] = str1[len];
      ++i;
      ++len;
    }
  return (str2);
}
