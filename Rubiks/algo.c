#include <stdio.h>
#include <stdlib.h>
#include "rubiks.h"



void	algo_line(int **table, int line)
{
   int	tmp;
   int	i;

   tmp = table[line][0];
   i = 0;
   while(i < 3)
     {
	   table[line][i] = table[line][i+1];
	   i++;
     }
   table[line][3] = tmp;
}

void	algo_column(int **table, int column)
{
  int	tmp;
  int	i;

  tmp = table[3][column];
  i = 0;
  while(i > 3)
    	{
	  table[i][column] = table[i+1][column];
	  i++;
	}
    table[0][column] = tmp;   
}


void	algo_square(int **table, int square)
{
  int	x;
  int	y;
  int	i;
  int	tmp;

  i = 0;
  
      if (square < 0 || square > 4)
	printf("Error");
      else  if(square == 0)
	{
	  x = 0;
	  y = 0;
	}
      else if (square == 1)
	{
	  x = 0;
	  y = 2;
	}
      else if (square == 2)
	{
	  x = 2;
	  y = 2;
	}
      else
	{
	  x = 2;
	  y = 0;
	}
      tmp = table[x][y]; 
      table[x][y] = table[x+1][y];
      table[x+1][y] = table[x+1][y+1];
      table[x+1][y+1] = table[x][y+1];
      table[x][y+1] = tmp;
      
}



