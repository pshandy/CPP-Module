/*
 * Harl.hpp
 *
 *  Created on: Jun 15, 2022
 *      Author: pshandy
 */

#ifndef HARL_HPP_
#define HARL_HPP_

#include <string>
#include <iostream>

class Harl {
private:

	struct level {
		std::string name;
		void (Harl::*function)(void);
	};
	struct level levels[4];

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl(void);
	~Harl(void);
	void complain(std::string level);
};


#endif
