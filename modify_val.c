int		check_line_co(char k, char **tab, int i, int j)
{
	int h;

	h = 0;
	while (h < 9)
	{
		if (tab[i][h] == k || tab[h][j] == k)
			return (0);
		h++;
	}
	return (1);
}

int		check_block(char k, char **tab, int i, int j)
{
	int i2;
	int j2;

	i2 = i - (i % 3);
	j2 = j - (j % 3);
	i = i2;
	while (i < i2 + 3)
	{
		j = j2;
		while (j < j2 + 3)
		{
			if (tab[i][j] == k)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		modify_val(char **tab, int position)
{
	int		j;
	char	k;
	int		i;

	if (position == 9 * 9)
		return (1);
	i = position / 9;
	j = position % 9;
	if (tab[i][j] != '.')
		return (modify_val(tab, position + 1));
	k = '1';
	while (k <= '9')
	{
		if (check_line_co(k, tab, i, j) == 1 && check_block(k, tab, i, j) == 1)
		{
			tab[i][j] = k;
			if (modify_val(tab, position + 1) == 1)
				return (1);
		}
		k++;
	}
	tab[i][j] = '.';
	return (0);
}

int		modify_rev_val(char **tabrev, int position)
{
	int		j;
	char	k;
	int		i;

	if (position == -1)
		return (1);
	i = position / 9;
	j = position % 9;
	if (tabrev[i][j] != '.')
		return (modify_rev_val(tabrev, position - 1));
	k = '1';
	while (k <= '9')
	{
		if (check_line_co(k, tabrev, i, j) == 1 &&
				check_block(k, tabrev, i, j) == 1)
		{
			tabrev[i][j] = k;
			if (modify_rev_val(tabrev, position - 1) == 1)
				return (1);
		}
		k++;
	}
	tabrev[i][j] = '.';
	return (0);
}
