#include <iostream>
#include <string>
#include "kitty_cat_source.h"

int main()
{
	std::string user_inputted_sentence;
	std::cout << "Welcome to the Epic Sentence Converter!" << std::endl << std::endl << "Please enter a sentence: ";
	std::getline(std::cin, user_inputted_sentence);
	std::cout << std::endl << "Your sentence is: " << std::endl;
	std::cout << "''" << user_inputted_sentence << "''" << std::endl;
	std::cout << std::endl << "Your epicaified sentence is:" << std::endl;
	std::cout << "''" << epicfication(user_inputted_sentence) << "''" << std::endl;
	std::cout << std::endl << "Have a cat - tastic day!" << std::endl;
	return 0;
}