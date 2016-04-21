/*
** my_strncpy.c for my_strncpy.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 21:57:34 2015 PECHAYRE Arthur
** Last update Mon Oct  5 09:42:55 2015 PECHAYRE Arthur
*/
int	my_strlen(char *str);

char    *my_strncpy(char *dest, char *src, int n)
{
  int i;
  int len;

  i = 0;
  len = my_strlen(src);
  if(len < n)
    dest[len] = '\0';
  else
    dest[n] = '\0';

  while ((src[i] && i) < n)
    {
      dest[i] = src[i];
      i = i + 1;
    } 
  return (dest);
}
