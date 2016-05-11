/*
** my_strcpy.c for  in /Users/stevemanogarane/Jour04/manoga_s/my_strcpy
** 
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
** 
** Started on  Thu Oct 22 10:44:37 2015 MANOGARANE Steve »
** Last update Thu Oct 22 11:59:34 2015 MANOGARANE Steve »
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
