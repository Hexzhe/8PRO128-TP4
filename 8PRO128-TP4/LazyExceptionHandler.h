#pragma once
#include <string>
#include <iostream>

namespace LazyExceptionHandler
{
	static void TellMeWhatsWrongButDontDoAnythingToAddressIt(std::string msg)
	{
		std::cout << "\n====================================" << std::endl;
		std::cout << "An error occured: " << msg << std::endl;
		std::cout << "====================================" << std::endl;
	}

	static void TellMeWhatsWrongButVeryVaguelyAndDontDoAnythingToAddressIt()
	{
		std::cout << "\n====================================" << std::endl;
		std::cout << "An error occured." << std::endl;
		std::cout << "====================================" << std::endl;
	}

	static void SweepItUnderTheCarpet()
	{
		
	}
};

