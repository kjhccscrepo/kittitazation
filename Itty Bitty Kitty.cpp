#include <iostream>
#include <string>
#include <regex> //This is a library I found online, I could use string_name.find(), etc etc. But I liked how clean this was


void catification (std::string &mutator) {
	mutator = std::regex_replace(mutator, std::regex("cat"), "/ᐠ｡ꞈ｡ᐟ\\");
}

int main()
{
	std::string user_inputted_sentence;
	std::cout << "Welcome to the Epic Sentence Converter!" << std::endl << std::endl << "Please enter a sentence: ";
	std::getline (std::cin, user_inputted_sentence);
	std::cout << std::endl << "Your sentence is:" << std::endl;
	std::cout << "''" << user_inputted_sentence << "''" << std::endl;
	catification(user_inputted_sentence);
	std::cout << std::endl << "Your epicaified sentence is:" << std::endl;
	std::cout << "''" << user_inputted_sentence << "''" << std::endl;
	
   
}
