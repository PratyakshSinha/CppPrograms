#include<iostream>

extern "C" int SomeFunction();

int main()
{
	SomeFunction();
	return 0;
}