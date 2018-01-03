#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class	Enemy
{
public	:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy(void);
	std::string const &	getType(void) const;
	int	getHP(void) const;

	virtual void	takeDamage(int damage);
	void	setType(std::string const & type);
	void	setHP(int hp);

private	:
	Enemy(void);
	Enemy(Enemy const & enemy);
	Enemy &	operator=(Enemy const & enemy);

	int	_hp;
	std::string	_type;
};

#endif
