#include <iostream>

#define MONEY 10;

using namespace std;

void askName() {
	string name;
	
	cout << "What is your name? ";
	cin >> name;
	cout << name << endl <<endl;
	cout << MONEY;
}

void password()
{
	string pass;
	cin >> pass;
	cout << "What is the password" << endl;
	string guess;
	cin >> guess;
	if(pass==guess)
	{
	cout << "correct!" << endl;
	}
	else
	{
	cout << "wrong" << endl;
	}
	

}

void Stars() {
	for(int i=0; i<8; i++) {
		for(int x=0; x<i; x++) {
			cout << "*";
		}
		cout << endl;
	}
	
}

int main() {
	Stars();
	password();
	return 0;
}