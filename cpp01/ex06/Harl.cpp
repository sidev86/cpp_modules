#include "Harl.hpp"


Harl::Harl (void)
{

}

Harl::~Harl(void)
{

}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	int i = 0;
	t_funcptr message[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string msg_level[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	
	while (i < 4  && level != msg_level[i])
		i++;
	
	if (i < 4)
	{
		while (i < 4)
		{
			std::cout << "[ " << msg_level[i] << " ]" << std::endl;
			(this->*message[i++])();
		}
	}
	else 	
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	
}
