#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

double x1, x2, x3, x4, x5; 
double mean, std_dev; 
const unsigned int n = 5; 
char again; 

double comp_mean(){
	mean = (x1+ x2 + x3 + x4 + x5) / static_cast<double>(n); 
	return mean; 
}

double comp_std(){
	std_dev = sqrt(
		((x1 - mean) * (x1 -mean) + 
		(x2 - mean) * (x2 - mean) + 
		(x3 - mean) * (x3 - mean) + 
		(x4 - mean) * (x4 - mean) +
		(x5 - mean) * (x5 - mean)) / static_cast<double>(n) );
	return std_dev; 
}


void menu(){
	system("cls"); 
	cout << "Enter the value for x1: \n> "; 
	cin >> x1; 
	cout << "Enter the value for x2: \n> "; 
	cin >> x2; 
	cout << "Enter the value for x3: \n> "; 
	cin >> x3; 
	cout << "Enter the value for x4: \n> "; 
	cin >> x4; 
	cout << "Enter the value for x5: \n> "; 
	cin >> x5; 
	
	comp_mean(); 
	comp_std(); 
	cout << "The mean is " << mean << "." << endl; 
	cout << "The standard deviation is " << std_dev << "." << endl; 
}

int main(){
	system("cls");
	do {
		menu(); 
		cout << "\nRetry? \n> "; 
		cin >> again; 
	} while (again == 'Y' || again == 'y'); 
	
	cout << "Program ended, enjoy~" << endl;
	system("pause"); 
	return 0;  
}


