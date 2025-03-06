#include <iostream>
#include <regex> //This is a library I found online, I could use string_name.find(), etc etc. But I liked how clean this was
#include <algorithm> //library for the transform function

std::string lowercase_user_string(std::string& lowercaseafied_string) {
	//This function is for the conversion being non-case senstive, it does however convert everything to lowercase, which could mess up some user input
	//I could also put this in the other function, but I don't really like it, and figure there may be a less hammer-like approach.
	//Basically, I can re-do this spesiefic area of the code in the future if I want to.
	std::transform(lowercaseafied_string.begin(), lowercaseafied_string.end(), lowercaseafied_string.begin(), ::tolower);
	return lowercaseafied_string;
}

std::string epicfication(std::string& mutator) {
	//I was going to make each of these individual functions, but it just didn't seem right...
	//		PS: I suspect that doing it that way was the intended way of doing so, as it would involve extra functions and what we
	//			learnt in class, but this way just seems easier.
	mutator = lowercase_user_string(mutator);
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
	return mutator;
}
bool Does_my_code_work(std::string string_a, std::string string_b, int whatcase = 0) {
	std::string tested_string = string_a;
	std::string expected_test_result = string_b;
	std::cout << "Testing " << tested_string << "..." << std::endl;
	switch (whatcase)
	{
	case 0:
		if (epicfication(tested_string) == expected_test_result) {
			return true;
		}
		else {
			return false;
		}
		break;
	case 1:
		if (lowercase_user_string(tested_string) == expected_test_result) {
			return true;
		}
		else {
			return false;
		}
		break;
	}

}