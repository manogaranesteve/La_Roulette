/*
** roulette.c for  in /Users/stevemanogarane/La Roulette/manoga_s
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Fri Mar 25 10:31:06 2016 MANOGARANE Steve »
** Last update Tue Apr 12 13:52:50 2016 MANOGARANE Steve »
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

char	*my_strcpy(char *dest, char *src);
char	*readLine();
void	my_putchar(char c);
void	my_putstr(char *str);
void    my_put_nbr(int n);
int	my_getnbr(char *str);
int	my_is_odd(int n);
int	my_strcmp(char *s1, char *s2);

int	main()
{
  system("clear");
  char	mise[50];
  char	num[40];
  char	exit[10];
  int	rando;
  int	gain;
  rando = 0;

  my_putstr("\t\t \033[31m  Bienvenue sur la Roulette !\033[0m \n");
  while (my_strcmp(exit, "q") != 0)
    {
      my_putstr("\nVeuillez choisir le montant:");
      my_strcpy(mise, readLine());
      my_putchar('\n');
      my_putstr("choisi un numero entre 1 et 36:");
      my_strcpy(num, readLine());
      if (((my_getnbr(num)) > 36) || ((my_getnbr(num)) < 1))
	{
	  my_putstr("choisi corectement:");
	  my_strcpy(num, readLine());
	}
      srand (time (NULL));
      rando = (rand()% 36) + 1;
      my_putstr("\nLa roulette va tire dans 3 seconde");
      sleep(3);
      my_putchar('\n');
      my_putstr("\e[34m =========================== \e[39m");
      my_put_nbr(rando);
      my_putstr("\e[34m =========================== \e[39m");
      if (rando == (my_getnbr(num)))
	{
	  gain = my_getnbr(mise) * 3;
	  my_putstr("\n\t\t \033[31m Vous avez Gagner ! \033[0m \n");
	  my_putstr(mise);
	}
      else if ((my_is_odd(rando) == 1) && (my_is_odd(my_getnbr(num)) == 1))
	{
	  my_putstr("\n\t\t \033[31m Les 2 nombres sont impaires !\033[0m ");
	  gain = my_getnbr(mise) / 2;
	}
      else if ((my_is_odd(rando) == 0) && (my_is_odd(my_getnbr(num)) == 0))
	{
	  my_putstr("\n\t\t \033[31m Les 2 nombres sont paires !\033[0m ");
	  gain = my_getnbr(mise) / 2;
	}
      else
	{
	  my_putstr("\n\t\t \033[31m Vous avez perdu votre mise ! \033[0m \n");
	  if (my_is_odd(rando) == 1)
	    {
	      my_putstr("\nLa roulette a tire un nombre impaire");
	      my_putchar('\n');
	      my_putstr("Vous avez choisi un nombre paire\n");
	    }
	  else if (my_is_odd(rando) == 0)
	    {
	      my_putstr("\nLa roulette a tire un nombre paire");
              my_putchar('\n');
              my_putstr("Vous avez choisi un nombre impaire\n");
	    }
	  gain = 0;
	}
      my_putstr("\nVotre gain est:");
      my_put_nbr(gain);
      my_putstr("\n\e[35m =========================== \e[39m");
      my_putstr("\e[35m =========================== \e[39m");
      my_putstr("\nappuyer q pour quitter la partie ou une autre touche pour continuer:");
      my_strcpy(exit, readLine());
    }
  return (0);
}
