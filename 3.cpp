#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std;

int highestDigit(int);

int highestDigit(int a) {

	while (a >= 10)
	{
		a /= 10;
	}
	return a;
}


int main()
{
	int a, b;
	cout << "Enter A, B: ";
	cin >> a >> b;
	cout << highestDigit(a) + highestDigit(b);
}

