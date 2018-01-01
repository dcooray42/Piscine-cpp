#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : zombie(NULL)
{
	ZombieEvent::_initName(this->_name);
	ZombieEvent::_initType(this->_type);
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}

void	ZombieEvent::setZombieType(Zombie *zombie)
{
	int	random;

	random = std::rand() % 10;
	zombie->setType(this->_type[random]);
	return ;
} 

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie = new Zombie();

	zombie->setName(name);
	this->setZombieType(zombie);
	return (zombie);
}

Zombie	*ZombieEvent::randomChump(void)
{
	Zombie	*zombie;
	int	random;

	random = std::rand() % 100;
	zombie = this->newZombie(this->_name[random]);
	return (zombie);
}

void	ZombieEvent::_initName(std::string *_name)
{
	_name[0] = "Akira";
	_name[1] = "Asuma";
	_name[2] = "Naruto";
	_name[3] = "Sasuke";
	_name[4] = "Eren";
	_name[5] = "Mikasa";
	_name[6] = "Akame";
	_name[7] = "Luffy";
	_name[8] = "Temari";
	_name[9] = "Jean";
	_name[10] = "Levy";
	_name[11] = "Marco";
	_name[12] = "All Might";
	_name[13] = "Bakugo";
	_name[14] = "Midoriya";
	_name[15] = "Deku";
	_name[16] = "Asta";
	_name[17] = "Wukong";
	_name[18] = "Ashe";
	_name[19] = "Miss Fortune";
	_name[20] = "Camille";
	_name[21] = "Fiora";
	_name[22] = "Shyvana";
	_name[23] = "Teemo";
	_name[24] = "Illidan";
	_name[25] = "Hanzo";
	_name[26] = "Kerrigan";
	_name[27] = "Raynor";
	_name[28] = "Tassadar";
	_name[29] = "Tychus";
	_name[30] = "Arthas";
	_name[31] = "Solid Snake";
	_name[32] = "Liquid Snake";
	_name[33] = "Ocelot";
	_name[34] = "Eva";
	_name[35] = "Otacon";
	_name[36] = "Meryl";
	_name[37] = "Campbell";
	_name[38] = "Kojima";
	_name[39] = "Del Toro";
	_name[40] = "Reedus";
	_name[41] = "Salim";
	_name[42] = "Enzo";
	_name[43] = "Zakaria";
	_name[44] = "Soma";
	_name[45] = "Erina";
	_name[46] = "Megumi";
	_name[47] = "Aldini";
	_name[48] = "Djidane";
	_name[49] = "Bibi";
	_name[50] = "Grenat";
	_name[51] = "Steiner";
	_name[52] = "Cloud";
	_name[53] = "Tifa";
	_name[54] = "Aerith";
	_name[55] = "Zack";
	_name[56] = "Sephiroth";
	_name[57] = "Angeal";
	_name[58] = "Rammus";
	_name[59] = "Azir";
	_name[60] = "Orianna";
	_name[61] = "Mordekaiser";
	_name[62] = "Blitzcrank";
	_name[63] = "Tresh";
	_name[64] = "Twitch";
	_name[65] = "Caitlyn";
	_name[66] = "Vayne";
	_name[67] = "Tristana";
	_name[68] = "Maitre Yi";
	_name[69] = "Kalista";
	_name[70] = "Kog'Maw";
	_name[71] = "Zed";
	_name[72] = "Kevin";
	_name[73] = "Jorys";
	_name[74] = "Irelia";
	_name[75] = "Gnar";
	_name[76] = "Maokai";
	_name[77] = "Kled";
	_name[78] = "Mario";
	_name[79] = "Luigi";
	_name[80] = "Peach";
	_name[81] = "Yoshi";
	_name[82] = "Wario";
	_name[83] = "Bowser";
	_name[84] = "Toad";
	_name[85] = "Daisy";
	_name[86] = "Waluigi";
	_name[87] = "Ganondorf";
	_name[88] = "Link";
	_name[89] = "Zelda";
	_name[90] = "Kirbi";
	_name[91] = "Roi Dadidou";
	_name[92] = "Falco";
	_name[93] = "Meta Knight";
	_name[94] = "Donkey Kong";
	_name[95] = "Xavier Niel";
	_name[96] = "Donald Trump";
	_name[97] = "Batman";
	_name[98] = "Superman";
	_name[99] = "Spiderman";
	return ;
}

void	ZombieEvent::_initType(std::string *_type)
{
	_type[0] = "Happy";
	_type[1] = "Angry";
	_type[2] = "Hungry";
	_type[3] = "Sad";
	_type[4] = "Exhausted";
	_type[5] = "Sleepy";
	_type[6] = "Lazy";
	_type[7] = "Sick";
	_type[8] = "Dead";
	_type[9] = "Alive";
	return ;
}
