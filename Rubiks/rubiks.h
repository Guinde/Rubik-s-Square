#ifndef RUBIKS_H_
# define RUBIKS_H_

#define EMPTY 0
#define BLOCKED 1

int		**init_tab(int **table);
int             **val_tab(int **table);
void            my_free(int **table);
int		*look_for_value(int **table, int *lines, int *columns, int value);
int*		look_for_space(int**, int*, int*, int);
void		verif_return(int*ret);
void		algo_line_rev(int **table, int line);
void		algo_column_rev(int **table, int column);
void		algo_square_rev(int **table, int square);
int		is_in_line(int **table, int line, int value);
int		is_in_column(int **table, int column, int value);
#endif /* RUBIKS_H_ */
