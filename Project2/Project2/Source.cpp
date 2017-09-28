
/*
Mamadou Diallo- 9/22/17

Programe problem 1: Diplay

description: this asignment is asking me to print out " hello world" without the quotations

*/

// Libraries
#include<iostream> 
#include <conio.h>
 // Namespaces
 using namespace std; //*

 // functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << "\n";
}

void main() {
int sum;

cout<< "Hello World!!\n";
cout<< "my name is Mamadou\n";
sum= 1;
cout<< "what's up "<<sum<<"\n";



pause();


}