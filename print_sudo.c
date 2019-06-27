#include "sudoku.h"

void	print_sudo(char **tab)
{
	int i;
	int j;

	i = 0;
	while (i < 9) {
		j = 0;
		while (j < 9) {
			write(1, &tab[i][j], 1);
			if (j != 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
