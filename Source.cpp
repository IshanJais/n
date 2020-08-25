#include<iostream>
void log(const char* notify);
int divide(int a, int b)
{
	//log("division");
	return a / b;

}
int main()
{
	std::cout << divide(40,5) << std::endl;
	std::cin.get();
}