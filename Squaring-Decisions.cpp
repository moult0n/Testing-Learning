#include <iostream>

using namespace std;

bool accept()
{
	auto t = 1;
	while (t < 4){
		cout << "Do you want to proceed (y or n)?\n"; // write question
		char answer = 0;
		cin >> answer; // read answer
		switch (answer)
		{
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			cout << "Im Sorry I Didnt Understand \n";
			++t;
		}
	}
	cout << "Ill take that as a no \n";
	return false;
}
double square(double x) // square a double precision floating-point number
{
	return x*x;
}
void print_square(double x)
{
	cout << "the square of " << x << " is " << square(x) << "\n";
}
void fill(float v[6])
{
	for (float i = 0; i != 6; ++i)
	{
		v[i] = (i - 1);
		cout << v[i] << " ";
	}
	cout << "\n";
}

int main()
{
	const auto y = 1.234;
	const auto a = 6; // constant array size
	float v[a] = { 0, 1, 2, 3, 4, 5 };
	if (accept() == true)
	{
		fill (v);
		auto x = y;
		print_square(x);
		cin.get();
	}
	else
	{
		cout << "Good Bye";
	}
	system("PAUSE");
	return 0;
}

