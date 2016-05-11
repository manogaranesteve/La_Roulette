/*
** my_getnbr.c for  in /users/stevemanogarane/Jour05/manoga_s/my_getnbr
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Sat Oct 24 19:38:55 2015 MANOGARANE Steve »
** Last update Fri Mar 25 12:39:41 2016 MANOGARANE Steve »
*/

int	my_getnbr(char *str)
{
  int	i;
  int	parite;
  int	result;

  i = 0;
  parite = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	{
	  parite++;
      	}
      i++;
    }
  result = 0;
  while (str[i] <= '9' && str[i] >= '0')
    {
      result = result * 10 + (str[i] - 48);
      ++i;
    }
  if (parite % 2 == 1 )
    {
      result *= -1;
    }
  return (result);
}
