#ifndef LIBFT_H // if not defined (security check)
# define LIBFT_H // then define, therefore the use of " "

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
void	ft_putchar(char c); // calling of function (#inc "libft.h" inside func.)
int		ft_strlen(int c); // different functions inside the library file

#endif // end definition, an open definition must be closed

