/*
** my_strcpy.c for my_strcpy.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 21:31:45 2015 PECHAYRE Arthur
** Last update Sat Oct  3 21:35:15 2015 PECHAYRE Arthur
*/
char	*my_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  if (src != 0)
    {
      while (src[i] != '\0')
	{
	  dest[i] = src[i];
	  ++i;
	}
      while (dest[i] != '\0')
	{
	  dest[i] = '\0';
	  ++i;
	}
    }
  return (dest);
}
