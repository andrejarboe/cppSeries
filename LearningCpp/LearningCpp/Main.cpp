/*
	#include <iostream>
	brings in cin and cout
	pick a platform
	pick debug or release to compile to
*/

//preprocessor
#include <iostream>
#include "Log.h"
using namespace std;


//functions from videos
void LearnHeaders();
void fromFunctions();
void LearnDebug();
void Sizes();
void Conditions();
void Loops();
void Pointers();
void References();
void PlayerClass();
void Logger();
void enityFunction();
void EnumeratedType();
void LearnContsructors();
void  LearnDestructors();
void LearnInheritance();
void LearnVirtualFunctions();
void LearnInterfaces();
void LearnVisibility();
void LearnArrays();
void LearnStrings();
void StringLiterals();
void ConstKeyword();


int main() {
	LearnHeaders();
	Sizes();
	fromFunctions();
	LearnDebug();
	Conditions();
	Loops();
	Pointers();
	References();
	PlayerClass();
	Logger();
	enityFunction();
	EnumeratedType();
	LearnContsructors();
	LearnDestructors();
	LearnInheritance();
	LearnVirtualFunctions();
	LearnInterfaces();
	LearnVisibility();
	LearnArrays();
	LearnStrings();
	StringLiterals();
	ConstKeyword();

	//wait for enter
	std::cin.get();
}