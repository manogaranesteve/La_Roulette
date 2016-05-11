/*
** my_readLine.c for  in /Users/stevemanogarane/CHIFUMI/manoga_s
** 
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
** 
** Started on  Fri Oct 30 09:43:13 2015 MANOGARANE Steve »
** Last update Fri Oct 30 09:44:56 2015 MANOGARANE Steve »
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

char	*readLine()
{
  ssize_t	ret;
  char	*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
