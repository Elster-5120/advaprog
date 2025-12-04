#include<iostream>
using namespace std;

// Global Variables
int fib[100]; 
int n; 

void generateFibonacci() {
	fib[0] = 0; 
	fib[1] = 1; 
	for (int i=2; i<n; i++) {
		fib[i] = fib[i-1] + fib[i-2]; 
	}
}

void printFibonacci() {
	cout << "Fibonacci sequence: "; 
	for (int i=0; i<n; i++) {
		cout << fib[i] << " "; 
	}
	cout << endl; 
}

int main () {
	cout << "Enter how many Fibonacci numbers (the maximum is 150). \n> ";
	cin >> n; 
	
	if (n <= 0 || n > 150) {
		cout << "Invalid number!" << endl; 
	}
	
	generateFibonacci(); 
	printFibonacci(); 
	return 0; 
}
