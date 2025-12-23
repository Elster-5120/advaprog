#include<iostream>
#include<cmath>
#include<cstdlib>
#define PI 3.1416
using namespace std;

double angle; 
double radians; 
double result; 
int choice;
char again; 

void getAngle(){
	cout << "Enter the angle in degrees: "; 
	cin >> angle; 
	radians = angle * PI / 180.0; 
}

void calcTrig(){
	switch(choice){
		case 1:{
			result = sin(radians); 
			break;
		}
		case 2:{
			result = cos(radians); 
			break;
		}
		case 3:{
			result = tan(radians); 
			break;
		}
		default:{
			cout << "\nInvalid choice!"; 
			result = NAN; // not a number
			break;
		}
	}
}

void displayResult(){
	if(!isnan(result)){
		switch(choice){
			case 1:
				cout << "sin(" << angle << "°) = " << result << endl; 
				break; 
			case 2: 
				cout << "cos(" << angle << "°) = " << result << endl; 
				break; 
			case 3:
				cout << "tan(" << angle << "°) = " << result << endl; 
				break; 
		}
	}
}

void mainMenu(){
	do {
		system("cls");
		
		cout << "\n=== Trigonometry Calculator ==="; 
		cout << "\n1. Sine"; 
		cout << "\n2. Cosine"; 
		cout << "\n3 Tangent"; 
		cout << "\nChoose a function (1-3): "; 
		cin >> choice; 
		
		getAngle(); 
		calcTrig(); 
		displayResult(); 
		
		cout << "\nDo you want to calculate again? (Y/N): "; 
		cin >> again; 
	} while (again == 'Y' || again == 'y'); 
	
	system("pause"); 
} 

int main(){
	mainMenu(); 
	return 0; 
}
