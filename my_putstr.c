/*
** my_putstr.c for  in /Users/stevemanogarane/Jour03/manoga_s/my_putstr
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Wed Oct 21 09:34:44 2015 MANOGARANE Steve »
** Last update Fri Mar 25 12:40:42 2016 MANOGARANE Steve »
*/

void	my_putchar(char c);
void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}
