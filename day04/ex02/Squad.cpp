#include "Squad.hpp"

Squad::Squad(void) : _list(NULL)
{
	return ;
}

Squad::Squad(Squad const & squad)
{
	*this = squad;
	return ;
}

Squad::~Squad(void)
{
	_t_list	*tmp;

	while (this->_list)
	{
		tmp = this->_list->next;
		delete this->_list->content;
		delete this->_list;
		this->_list = tmp;
	}
	return ;
}

Squad &	Squad::operator=(Squad const & squad)
{
	this->_list = squad._list;
	return (*this);
}

int	Squad::getCount(void) const
{
	_t_list	*tmp = this->_list;

	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		return (tmp->count + 1);
	}
	return (0);
}

ISpaceMarine *	Squad::getUnit(int n) const
{
	_t_list	*tmp = this->_list;
	int	i = 0;
	
	if (n >= 0)
	{
		while (tmp && i < n)
		{
			i++;
			tmp = tmp->next;
		}
		return (tmp->content);
	}
	return (NULL);
}

int	Squad::push(ISpaceMarine *ispacemarine)
{
	_t_list	*tmp = this->_list;
	_t_list	*newSMarine = new _t_list;
	newSMarine->count = 0;
	newSMarine->content = ispacemarine;
	newSMarine->next = NULL;

	if (ispacemarine)
	{
		if (this->_list == NULL)
		{
			this->_list = newSMarine;
			return (1);
		}
		while (this->_list->next)
		{
			if (this->_list->content == ispacemarine)
			{
				this->_list = tmp;
				delete newSMarine;
				return (this->getCount());
			}
			this->_list = this->_list->next;
		}
		if (this->_list->content == ispacemarine)
		{
			this->_list = tmp;
			delete newSMarine;
			return (this->getCount());
		}
		this->_list->next = newSMarine;
		this->_list->next->count = this->_list->count + 1;
		this->_list = tmp;
		return (this->getCount());
	}
	return (this->getCount());
}
