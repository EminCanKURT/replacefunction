#include <iostream>
using namespace std;

void replace() {
	int a, b;

	cout << "Please enter two different numbers " << "\n";

	cout << "Enter your first number. " << "\n";

	cin >> a;

	cout << "Enter your second number. " << "\n";

	cin >> b;


	if (a != b) {
		a = a+b;
	}
	b = a - b;

	a = a - b;


	cout << "a equals :" << a << "\n";
	cout << "b equals :" << b << "\n";
	


}




int main()
{
	

	

	replace();

	return 0;

	
}