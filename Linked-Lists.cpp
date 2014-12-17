#include <iostream>

using namespace std;

struct node {
	int data;
	node *next;
};

bool accept(){
	auto t = 1;
	while (t < 4){ 
		cout << "Do you want to proceed (y or n)?\n"; 
		char answer = 0;
		cin >> answer; 
		switch (answer){
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

int main(){
	node *root = NULL;
	node *conductor = NULL;
	int count = 0; 

	root = new node; 
	root->next = 0; 
	root->data = count; 
	
	while (accept() == true){ 
		conductor = root; 
		++count; 
		while (conductor != 0){ 
			cout << conductor->data << " "; 
			if (conductor->next == NULL){
				cout << "\n";
				break;
			}
			conductor = conductor->next; 
		}
		conductor->next = new node; 
		conductor = conductor->next; 
		conductor->next = 0; 
		conductor->data = count; 
	}
	delete[] conductor;
	delete[] root;
	cout << "End Reached \n";
	system("pause");
}