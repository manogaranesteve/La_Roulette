/*
** my_put_nbr.c for  in /users/stevemanogarane/Jour05/manoga_s
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Sat Oct 24 17:54:08 2015 MANOGARANE Steve »
** Last update Fri Mar 25 11:03:41 2016 MANOGARANE Steve »
*/

void	my_putchar(char c);
void	my_putstr(char *str);

void    my_put_nbr(int n)
{
  int   nb;
  int	div;

  nb = 0;
  div = 1;
  if (n == -2147483648)
    {
      my_putstr("-2147483648");
    }
  else
    {
      if (n < 0)
	{
	  my_putchar('-');
	  n = -n;
	}
      while ((n / div) >= 10)
	{
	  div = div * 10;
	}
      while (div > 0)
	{
	  nb = (n / div) % 10;
	  my_putchar(nb + 48);
	  div = div / 10;
	}
    }
}
