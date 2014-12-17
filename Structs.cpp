#include <iostream>

using namespace std;

// initializing the enum variable

struct hello
{
public:
	hello(int s) :elem{ new double[s] }, sz{ s } {} //constructs hello
	double& operator[](int i) { return elem[i]; } //element access: subscripting
	int size() { return sz; }
private:
	int sz;
	double* elem;
};

double read_and_sum(int s)
{
	hello v(6);
	for (int i = 0; i != s; ++i){
		cout << " Enter Value " << i << " \n";
		cin >> v[i]; // reads in elements
	}
	double sum = 0;
	for (int i = 0; i != s; ++i)
		sum += v[i];
	return sum;
}



int main()
{
	int s = read_and_sum(6);
	cout << s << " is the sum of the values entered. \n";
	system("Pause");
}