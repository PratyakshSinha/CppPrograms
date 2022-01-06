#include<iostream>

extern "C" int SomeFunction(); // extern keyword is used to so that compiler knows that SomeFunction() is declared outside 

int main()
{
	std::cout << "The result is: " << SomeFunction();
	return 0;
}