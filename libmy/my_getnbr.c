/*
** my_getnbr.c for my_getnbr.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 21:14:21 2015 PECHAYRE Arthur
** Last update Sat Oct  3 23:13:52 2015 PECHAYRE Arthur
*/
int	my_getnbr(char *str)
{
  int isneg;
  int i;
  int out;

  i = 0;
  out = 0;
  isneg = 1;
  if (str != 0)
    {
      while ((str[i] == 43 || str[i] == 45) && (str[i] != 0))
	{
	  if (str[i] == 45)
	    isneg = isneg * -1;
	  ++i;
	}
      while (str[i] >= 48 && str[i] <= 57)
	{
	  out = out * 10 + (str[i] - 48);
	  ++i;
	}
      out = out * isneg;
      return (out);
    }
  return (0);
}
