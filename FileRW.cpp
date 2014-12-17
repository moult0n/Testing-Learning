#include <iostream>
#include <fstream>

using namespace std;

int main(){
	char fileContent[10];
	ofstream a_file("example.txt");
	a_file << "Works\n";
	for (int x = 0; x < 128; ++x)
		a_file << x << ". " << (char)x << "\n";
	a_file.close();
	ifstream b_file("example.txt");
	b_file >> fileContent;
	cout << fileContent << "\n";
	b_file.close();
	cin.get();
}