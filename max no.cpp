#include<iostream> 
int  max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;


}

int main()
{
	int a = 10, b = 20;
	int g = max(a, b);
	std::cout << " greatest no is =" << g<< '\n';
	return 0;
}