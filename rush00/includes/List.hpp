#ifndef LIST_HPP
# define LIST_HPP

# include "ClassBullet.hpp"

typedef struct	_s_list
{
	Bullet	*content;
	_s_list	*next;
}		_t_list;

# endif
