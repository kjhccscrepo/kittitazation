#include <iostream>
#include <cassert>
#include <string>
#include "kitty_cat_source.h"

int main()
{
	std::cout << "Starting tests..." << std::endl;
	std::cout << "Part A, Lowercase Conversion..." << std::endl;
	assert(Does_my_code_work("ABC","abc",1));
	assert(Does_my_code_work("A1@c2jKkittY", "a1@c2jkkitty", 1));
	std::cout << "Part B, SubString Conversion..." << std::endl;
	assert(Does_my_code_work("cat kitty", "/ᐠ｡ꞈ｡ᐟ\\ (•ㅅ•)"));
	assert(Does_my_code_work("c at kidty", "c at kidty"));
	assert(Does_my_code_work("cat cat kitty dance lol anger hap ppy lol", "/ᐠ｡ꞈ｡ᐟ\\ /ᐠ｡ꞈ｡ᐟ\\ (•ㅅ•) ~( ˘▾˘ ~) lol (=ಠᆽಠ=) hap ppy lol"));
	std::cout << "Part C, Uppercase SubString Conversion..." << std::endl;
	assert(Does_my_code_work("CAt kItTY", "/ᐠ｡ꞈ｡ᐟ\\ (•ㅅ•)"));
	assert(Does_my_code_work("mOUse1 kItTen yArN DANCE", "…ᘛ⁐̤ᕐᐷ1 (•ㅅ•) o~ ~( ˘▾˘ ~)"));
	std::cout << "The tests have finished successfully!" << std::endl;
	return 0;
}