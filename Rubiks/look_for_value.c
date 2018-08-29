#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "rubiks.h"

int	*look_for_value(int **table,int *lines,int *columns, int value)
{
  static int	ret[2];
  int	i;
  int	j;

  i = 0;
  j = 0;
  
  while(i < 4)
    {
      if(lines[i] == EMPTY)
	{
	  while(j < 4)
	    {
	      if(columns[j] == EMPTY)
		{
       		  if(table[i][j] == value)
		    {
		       ret[0] = i;
		       ret[1] = j;
		       return (ret);
		    }
		}
	      j++;	
	    }
	}
      j = 0;
      i++;
    }
  return (NULL);
}

void	verif_return(int *ret)
{
  if (ret != NULL)
    printf("line :\t\t%d\nColumn :\t%d\n", ret[0], ret[1]);
  else
    printf("Nothing found in the given range.\n");
}
