#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "rubiks.h"

int	**init_tab(int **table)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while(i < 4)
    {
      while(j < 4)
	{
	  table[i][j] = 0;
	  j++;
	}
      j = 0;
      i++;
    }
  return table;
}

int	**val_tab(int **table)
{
  int	tmp[4] = {0, 0, 1, 1};
  int	tmp2[4] = {2, 2, 3, 3};

  memcpy(table[0], tmp, sizeof(tmp));
  memcpy(table[1], tmp, sizeof(tmp));
  memcpy(table[2], tmp2, sizeof(tmp2));
  memcpy(table[3], tmp2, sizeof(tmp2));

  return (table);
}

void	my_free(int**table)
{
  int	i;

  i = 0;
  while(i < 4)
    free (table[i++]);

  free(table);
  table = NULL;
}
