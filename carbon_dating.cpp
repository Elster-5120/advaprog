#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

double c14frac;

double estimate_age(){
    return log(1.0 / c14frac) / 0.00012; 
}

void carbon_calc(){
    cout << "Carbon-14 Dating Calculator\n";
    cout << "Enter the fraction of the carbon-14 remaining (0 < f <= 1): "; 
    cin >> c14frac; 

    while (c14frac <= 0.0 || c14frac > 1.0) {
        system("cls"); 
        cout << "Invalid entry! Please enter a number between 0 and 1: "; 
        cin >> c14frac; 
    }

    double age = estimate_age(); 
    cout << "Estimated age: " << age << " years." << endl; 
}

int main(){
    system("cls"); 
    carbon_calc(); 
    system("pause");
    return 0; 
}

