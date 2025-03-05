#include <iostream>
#include <string>
#include <regex> //This is a library I found online, I could use string_name.find(), etc etc. But I liked how clean this was
#include <algorithm> //library for the transform function

void lowercase_user_string(std::string &the_string) {
	//This function is for the conversion being non-case senstive, it does however convert everything to lowercase, which could mess up some user input
	//I could also put this in the other function, but I don't really like it, and figure there may be a less hammer-like approach.
	//Basically, I can re-do this spesiefic area of the code in the future if I want to.
	std::transform(the_string.begin(), the_string.end(), the_string.begin(), ::tolower);
}

void epicfication(std::string &mutator) {
	//I was going to make each of these individual functions, but it just didn't seem right...
		//Then I tried making it an open statment that would have data fed in from in the paramaters, but that led to having to do a bunch of lines.
	mutator = std::regex_replace(mutator, std::regex("cat"), "/ᐠ｡ꞈ｡ᐟ\\");
	mutator = std::regex_replace(mutator, std::regex("kitty"), "(•ㅅ•)");
	mutator = std::regex_replace(mutator, std::regex("kitten"), "(•ㅅ•)");
	mutator = std::regex_replace(mutator, std::regex("yarn"), "o~");
	mutator = std::regex_replace(mutator, std::regex("anger"), "(=ಠᆽಠ=)");
	mutator = std::regex_replace(mutator, std::regex("dance"), "~( ˘▾˘ ~)");
	mutator = std::regex_replace(mutator, std::regex("love"), "(₌♥ᆽ♥₌)");
	mutator = std::regex_replace(mutator, std::regex("happy"), "(=^ ◡ ^=)");
	mutator = std::regex_replace(mutator, std::regex("painful"), "(˃ᆺ˂)");
	mutator = std::regex_replace(mutator, std::regex("surprised"), "／(=๏ x ๏=)＼");
	mutator = std::regex_replace(mutator, std::regex("mouse"), "…ᘛ⁐̤ᕐᐷ");
}

int main()
{
	std::string user_inputted_sentence;
	std::cout << "Welcome to the Epic Sentence Converter!" << std::endl << std::endl << "Please enter a sentence: ";
	std::getline(std::cin, user_inputted_sentence);
	std::cout << std::endl << "Your sentence is: " << std::endl;
	std::cout << "''" << user_inputted_sentence << "''" << std::endl;
	lowercase_user_string(user_inputted_sentence);
	epicfication(user_inputted_sentence);
	std::cout << std::endl << "Your epicaified sentence is:" << std::endl;
	std::cout << "''" << user_inputted_sentence << "''" << std::endl;
	std::cout << std::endl << "Have a cat - tastic day!" << std::endl;
	return 0;
}
