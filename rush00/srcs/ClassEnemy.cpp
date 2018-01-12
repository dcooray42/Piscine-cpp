#include "ClassEnemy.hpp"

Enemy::Enemy(void) : _pos_x(0), _pos_y(0)
{
	return ;
}

Enemy::Enemy(Enemy const & enemy)
{
	*this = enemy;
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

Enemy &	Enemy::operator=(Enemy const & enemy)
{
	this->_pos_x = enemy._pos_x;
	this->_pos_y = enemy._pos_y;
	return (*this);
}

void	Enemy::render(Enemy *enemy, Player *player)
{
	int	i = 0;

	while (i < Enemy::_width - 2)
	{
		enemy[i]._randomAppearance(i);
		enemy[i]._destroyEnemy();
		enemy[i]._renderEnemy();
		enemy[i]._checkCollision(player);
		enemy[i]._move();
		enemy[i]._checkCollision(player);
		i++;
	}
	return ;
}

void	Enemy::setup(int w, int h)
{
	std::srand(std::time(NULL));
	Enemy::_width = w;
	Enemy::_height = h;
	return ;
}

void	Enemy::_randomAppearance(int i)
{
	int	random;

	if (!this->_pos_y)
	{
		random = std::rand() % 100;
		if (random < 10)
		{
			this->_pos_x = i + 1;
			this->_pos_y = 1;
		}
	}
	return ;
}

void	Enemy::_move(void)
{
	if (this->_pos_y)
		this->_pos_y++;
	return ;
}

void	Enemy::_renderEnemy(void)
{
	if (this->_pos_x > 0 && this->_pos_y)
		mvaddch(this->_pos_y, this->_pos_x, 'x');
	return ;
}

void	Enemy::_destroyEnemy(void)
{
	if (this->_pos_y == Enemy::_height - 1)
	{
		this->_pos_x = 0;
		this->_pos_y = 0;
	}
	return ;
}

void	Enemy::_checkCollision(Player *player)
{
	_t_list	*tmp = player->getBullet();

	while (tmp)
	{
		if (this->_pos_y == tmp->content->getPosY() && this->_pos_x == tmp->content->getPosX())
		{
			this->_pos_x = 0;
			this->_pos_y = 0;
			tmp->content->setPosY();
		}
		tmp = tmp->next;
	}
	if (this->_pos_x == player->getPosX() && this->_pos_y == player->getPosY())
		player->setAlive();
	return ;
}

int	Enemy::_width = 0, Enemy::_height = 0;	
