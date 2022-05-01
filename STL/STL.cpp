//Hope Libecap
//5-1-22
//Exceptions and Templates
//CIS 1202

#include <iostream>
#include <string>
#include <vector>

using namespace std;
template <typename T>

T half(T value) 
{
	T result;
	result = value / 2;
	if (*typeid(value).name() == 'i') 
	{
		if (result * 2 != value)
		{
			result++;
		}
	}
	return result;
}

int main() 
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}