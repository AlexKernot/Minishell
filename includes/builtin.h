/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:55:56 by akernot           #+#    #+#             */
/*   Updated: 2024/01/25 21:14:56 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILTIN_H
# define BUILTIN_H

# include "libft.h"

typedef enum e_builtins
{
	echo = 4833,
	pwd = 6190,
	export = 4802,
	cd = 4093,
	unset = 6820,
	env = 4796,
	eexit = 4814
}	t_builtins;

/* ********************** -- BUILTINS -- *********************** */
/* Each function will be passed the number of arguments supplied */
/* along with an array of c-strings. Each function must return 0 */
/* on success and non-zero on failure.                           */
/* ************************************************************* */

int		builtin_echo(int ac, char *av[]);
int		builtin_cd(int ac, char *av[]);
int		builtin_pwd(int ac, char *av[]);
int		builtin_export(int ac, char *av[]);
int		builtin_unset(int ac, char *av[]);
int		builtin_env(int ac, char *av[]);
int		builtin_exit(int ac, char *av[]);

int		run_builtin(const char **substr);

#endif
