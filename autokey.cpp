#include<iostream>
int main()
{
	auto x{ 10 };
	auto y{ 50.0 };
	std::cout << typeid(x).name() << '\n' << typeid(y).name() << '\n';
	return 0;
}