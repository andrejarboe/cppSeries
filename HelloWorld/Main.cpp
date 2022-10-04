/*
	#include <iostream>
	brings in cin and cout
	pick a platform
	pick debug or release to compile to 
*/

//preprocessor
#include <iostream>

//Have to tell compiler that Log function exist with a declaration
// it just trust us that the Log function exist
// The linker will go find it
void Log(const char* message);
//void Multiply(int a, int b);

//static says that this function is only declared for translation unit
static int Multiply(int a, int b) {
	return a * b;
}

void MultiplyAndLog(int a, int b) {
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main() {
	/*
		header files get included into .cpp files
		.cpp files get compiled individually into object files
		the linker then glues all the .obj files into a .exe 
		compile with ctrl f7 of compile button
			no linking happens when you compile a single file
			just make an .opj file
			build will make .exe
	*/

	//std::cout.print("Hello World!!!").print(std::endl);
	std::cout << "Hello World!!!" << std::endl;
	Log("Hello from Log function");

	std::cout << Multiply(5, 8) << std::endl;

	/*
		1 byte is 8 bits
		4 bytes is 32bits
		int is signed so one of the 32 bits is the + or - sign
		31 bits left for the data
		2^31 = 2.1b and can say + or - 
		unsigned int is always + thus has 32bits
		2^32 = 4.29b
		char 2 bytes
		short 2
		int 4
		long usually 4
		long long usually 8
		all can be unsigned

		decimals have floats 4 bytes and doubles 8 bytes
		float var = 5.5f
		double var = 5.2

		bool
		either true or false
		0 = false
		any number ! = 0 is true

		yes 0 and 1 take up one bit
		but you can only address bytes
		but you can be smart and store 8 bools in 1 byte

		sizeof() tells you the size of the var
	*/

	int var = 8; // data size -2b - 2b
	std::cout << var << std::endl;

	var = 20;
	std::cout << var << std::endl;

	//Functions
	/*
	*	functions need to return a value unless function is void
	*		but will not show err in release, only in debug
	*	make a function when you are redoing a common task
	*/
	MultiplyAndLog(3, 2);
	MultiplyAndLog(8, 5);
	MultiplyAndLog(90, 45);


	/*
	* header files
	* used to declare types of functions in a common place
	*	every files that uses the function needs to be told it esist
	*	you can does the with header files
	*/


	//wait for enter
	std::cin.get();
}
