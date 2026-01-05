#include<iostream>
#include<string>
#include<cstdlib> // for system("pause") and system ("cls). Only on windows 
using namespace std;

// Global Variables 
float ranges[10] = {
    69.49, 
    73.49, 
    80.49, 
    83.49,
    87.49, 
    90.49,
    93.49,
    97.49,
    100.00
}; 

float equivalents[10] = {
    5.00, 
    3.00,
    2.75, 
    2.50,
    2.25, 
    2.00,
    1.75, 
    1.50,
    1.25, 
    1.00
};

// Login details
string name, section; 
int grade; 

void main_menu(){
    cout << "Enter your name: \n> "; 
    cin >> name; 
    cout << "Enter your section: \n> "; 
    cin >> section; 
    cout << "Enter your grade: \n> "; 
    cin >> grade; 
    
    for(int i=0; i<10; i++){
        if (grade<=ranges[i]){
            cout << "Equivalent grade: " << equivalents[i] << endl; 
            break; 
        }
    }
}

int main(){
    
    char again; 
    do {
        system("cls"); 
        main_menu(); 
        system("pause"); 
        cout << "\nDo you want to enter another user? (y/n) \n> "; 
        cin >> again; 
    } while (again == 'y' || again == 'Y');
    
    cout << "Program ended..." << endl; 
    return 0; 
}






