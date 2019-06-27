#include "sudoku.h"

int		error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int		nb_char(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc != 10)
		return (error());
	while (i < 10) {
		j = 0;
		while (argv[i][j])
			j++;
		if (j != 9)
			return (error());
		i++;
	}
	return (1);
}

int		modify_error(char **tab)
{
	int i;
	int j;

	i = 0;
	while (i < 9) {
		j = 0;
		while (j < 9) {
			if (!(tab[i][j] >= '0' && tab[i][j] <= '9'))
				return (error());
			j++;
		}
		i++;
	}
	return (1);
}

int		if_error(int argc, char **argv)
{
	int e;

	e = nb_char(argc, argv);
	return (e);
}

int		tab_error(char **tab, char **tabrev)
{
	int i;
	int j;

	i = 0;
	while (i < 9) {
		j = 0;
		while (j < 9) {
			if (tab[i][j] != tabrev[i][j])
				return (error());
			j++;
		}
		i++;
	}
	return (1);
}
