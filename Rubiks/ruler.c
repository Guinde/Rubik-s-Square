#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "rubiks.h"

void	print_tab(int **table)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  printf("—————————————————\n");
  while(i < 4)
    {
      printf("| ");
      while(j < 4)
	{
	  printf("%d | ", table[i][j]);
	  j++;
	}
      printf("\n");
      //De pas oublier de remettre son index colum à 0;
      j = 0;
      i++;
      printf("—————————————————\n");
    }
}


int	main()
{
  int	**tab;
  int	i;
  int	lines[4];
  int	columns[4];

  lines[0] = BLOCKED;
  lines[1] = BLOCKED;
  lines[2] = EMPTY;
  lines[3] = BLOCKED;
  columns[0] = EMPTY;
  columns[1] = EMPTY;
  columns[2] = BLOCKED;
  columns[3] = BLOCKED;
  
  /* malloc des lignes */
  if (( tab = malloc(sizeof(int*)*4)) == NULL)
    return (-1);
  i = 0;
  while(i < 4)
    {
      /* Malloc des collums */
      if ((tab[i] = malloc(sizeof(int)*4)) == NULL)
	return (-1);
      i++;
    }

 
  init_tab(tab);
  printf("Tableau set a 0\n");
  print_tab(tab);
  printf("\n");
  val_tab(tab);
  printf("Tableau avec valeurs\n");
  print_tab(tab);
  printf("\n");
  algo_line_rev(tab, 1);
  printf("Tableau rotation line rev\n");
  print_tab(tab);
  printf("\n");
  algo_column_rev(tab, 1);
  printf("Tableau rotation column rev\n");
  print_tab(tab);
  printf("\n");
  algo_square_rev(tab, 1);
  printf("Tableau rotation square rev\n");
  print_tab(tab);
  printf("\n");
  /* printf("%d\n", is_in_line(tab, 1, 5)); */
  /* print_tab(tab); */
  verif_return(look_for_value(tab, lines, columns, 2));
  verif_return(look_for_value(tab, lines, columns, 1));
  my_free(tab);
  return (0);
 }
