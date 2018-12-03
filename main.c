#include "sudoku.h"

char	tab_add(char **argv, char **tab)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 1;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			tab[i][j] = argv[k][j];
			j++;
		}
		tab[i++][j] = '\0';
		k++;
	}
	tab[i] = 0;
	return (**tab);
}

void	tab_create(char **tab, char **tabrev)
{
	int i;

	i = 0;
	while (i < 9)
	{
		tab[i] = (char*)malloc(sizeof(tab) * (9));
		tabrev[i] = (char*)malloc(sizeof(tabrev) * (9));
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	**tab;
	char	**tabrev;

	if (if_error(argc, argv) == 1)
	{
		tab = (char**)malloc(sizeof(tab) * (9));
		tabrev = (char**)malloc(sizeof(tab) * (9));
		tab_create(tab, tabrev);
		tab_add(argv, tab);
		tab_add(argv, tabrev);
		modify_val(tab, 0);
		modify_rev_val(tabrev, 80);
		if (tab_error(tab, tabrev) == 0)
			return (0);
		if (modify_error(tab) == 0)
			return (0);
		else
			print_sudo(tab);
	}
	return (0);
}
