#include<iostream>
using namespace std;
int factorial (int x);
int main()
{
	int x;
	cout<<"Enter a number:";
	cin>>x;
	cout<<"Factorial of "<<x <<"="<<factorial(x);
	return 0;
}
int factorial(int x)
{
	if (x<1)
	return x*factorial(x-1);
	else
	return 1;
}
