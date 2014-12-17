#include <iostream>
#include "Computer.h"

using namespace std;

int main(){
	Computer compute;
	compute.setSpeed(78);
	cout << compute.readSpeed();
	cin.get();
}