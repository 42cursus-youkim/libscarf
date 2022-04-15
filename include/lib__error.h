#ifndef LIB__ERROR_H
# define LIB__ERROR_H

# include "lib__types__string.h"
# include "lib__types__num.h"

//@func
/*
** < assert.c > */

void	lib__assert(bool expr, const t_string name);
/*
** < error.c > */

t_res	lib__error__syscall(char *category);
#endif