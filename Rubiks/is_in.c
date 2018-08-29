#include <stdio.h>
#include <stdlib.h>
#include "rubiks.h"

int	is_in_line(int **table, int line, int value)
{
  int	i;
  int	val;
  
  i = 0;
  while(i < 4)
    {
      if(table[line][i] == value)
	val = 0;
      else
	val = 1;
      i++;
    }
  return (val);
}

int	is_in_column(int **table, int column, int value)
{
  int	i;
  int	val;

  i = 0;
  while(i < 4)
    {
      if(table[i][column] == value)
	val = 0;
      else
	val = 1;
      i++;
    }
  return (val);
}

