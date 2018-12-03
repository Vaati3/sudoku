/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sudoku.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hopoutea <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 13:49:24 by hopoutea     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 16:03:13 by hopoutea    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	print_sudo(char **tab);
int		modify_val(char **tab, int position);
int		modify_rev_val(char **tabrev, int position);
int		if_error(int argc, char **argv);
int		tab_error(char **tab, char **tabrev);
int		modify_error(char **tab);

#endif
