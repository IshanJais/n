#include<iostream>
 int value { 5 };

int main()

{
	
	int value { 7 };
    value;

	std::cout<<"local variable"<<value<<'\n'; 
	std::cout << "global  variable" << ::value << '\n';
	return 0;
 }
