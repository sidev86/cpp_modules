#include "Harl.hpp"


Harl::Harl (void)
{

}

Harl::~Harl(void)
{

}

void	Harl::debug(void)
{
	std::cout << "debug" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "info" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "warning" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "error" << std::endl;
}

void	Harl::complain(std::string level)
{
	int i = 0;
	t_funcptr message[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string msg_level[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	
	while (i < 4  && level != msg_level[i])
		i++;
	
	if (i < 4)
		(this->*message[i])();
	else
		std::cout << "Harl can't complain. Wrong message level" << std::endl;
	
}
