#include <iostream>
double transfer(double);

int main()
{
	using namespace std;
	cout << "Please enter a Celsious value: ";
	double temperature;
	cin >> temperature;
	cout << temperature << " degrees Celsious is " << transfer(temperature) << " Fahrenheit." << endl;
	cin.get();
	cin.get();
	return 0;
}

double transfer(double n)
{
	using namespace std;
	return (1.8*n + 32);
}