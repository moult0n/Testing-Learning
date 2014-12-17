#include <iostream>
#include "Vector.h"

using namespace std;

double sqrt_sum(Vector& v)
{
	double sum = 0;
	for (int i = 0; i != v.size(); ++i)
		sum += sqrt(v[i]);
	return sum;
}

int main()
{
	Vector v[] = { 5, 5, 5, 5, 5 };
	Vector* p = &v[4];
	double answer = sqrt_sum(*p);
	cout << "Answer " << answer;
	system("Pause");
}