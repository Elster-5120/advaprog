#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std; 

double w, x; // w = money, x = interest rate
double y, z;  // y = compounding time, z = years
double balance; 
char again; 

double power(){
	return pow(1.0 + x / (double)y, (double)y * (double)z);
}

void interest(){
	balance = w * power(); 
}

void main_menu(){
	system("cls"); 
	
	do {
		cout << "\nEnter the value for w: "; 
		cin >> w; 
		if (w <= 0) cout << "\nInvalid value. Try again."; 
	} while (w <= 0); 
	
	do {
		cout << "\nEnter the value for x: "; 
		cin >> x; 
		if (x <= 0) cout << "\nInvalid value. Try again."; 
	} while (x <= 0); 
	
	do { 
		cout << "\nEnter the value for y: "; 
		cin >> y; 
		if (y <= 0) cout << "\nInvalid value. Try again."; 
	} while (y <= 0); 
	
	do {
		cout << "\nEnter the value for z: "; 
		cin >> z; 
		if (z <= 0) cout << "\nInvalid value. Try again."; 
	} while (z <= 0); 
	
	interest(); 
	cout << "The balance is " << balance << "." << endl;
}

int main(){
	system("cls"); 
	do {
		main_menu(); 
		cout << "\nRetry? \n> "; 
		cin >> again; 
	} while (again == 'y' || again == 'Y'); 
	
	cout << "\nProgram ended. Enjoy~"; 
	system("pause"); 
	return 0; 
} 
