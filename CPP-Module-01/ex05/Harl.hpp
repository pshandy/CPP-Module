/*
 * Harl.hpp
 *
 *  Created on: Jun 15, 2022
 *      Author: pshandy
 */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
public:

	Harl();
	~Harl();

	void	complain(std::string level);

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	struct levels
	{
	std::string		name;
	void	(Harl::*function)( void );
	};
	
	struct levels	levels[4];

};

#endif
