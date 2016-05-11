/*
** my_putchar.c for  in /home/manogarane/Jour01/manoga_s
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Mon Oct 19 12:05:10 2015 MANOGARANE Steve »
** Last update Wed Nov 18 13:37:12 2015 MANOGARANE Steve »
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
