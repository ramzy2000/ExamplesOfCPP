// double click exe
#include <iostream> // defines std::cout and std::endl

int test()
{
	//////////////////
	/// variable types
	//////////////////

	// types are a way of telling the computer how we plan on interpreting the data
	// Example float and double holds a decimal number, int holds a whole number, char holds a letter

	// at the core level of data it is bindary code meaning aset of switchs that can be interpreted in many ways
	// its inportant to specify this in cpp using whats called instantiation

	/////////////
	/// variables
	/////////////
	// instantiation other know as variable creation
	// Example "varType varName{ value }"
	int a{ 5 }; // creating a place in memory we call it a for the programmers sake
	int b{ 6 }; // same here
	int c{ 7 }; // same here

	float d{ 9.43 };
	double e{ 1.43 };

	a = 4; // assignment
	b = 100; // same here

	// constants are variables that cannot be reasigned
	// runtime constants are created at runtime when running the application
	const int f{ 4 };
	const double gravity{ 9.8 };

	// compile time constants are create at compile time or before the application runs
	constexpr int g{ 90 };


	//gravity = 4;	// not possible cannot reasign a constant
	//f = 5;		// not possible cannot reasign a constant
	//g = 55;		// not possible cannot reasign a constant



	return b;
	// g is destoryed
	// gravity is destoryed
	// f is destoryed
	// e is destoryed
	// d is destoryed
	// c is destoryed
	// b is destoryed
	// a is destoryed
}

// entry point of the application
int main()
{
	// call test funtion
	test();


	return 0;
}