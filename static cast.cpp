#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    system("cls"); 
    float y; 
    int x = 5; 

    y = x/2; 
    cout << "\nThe value of y without casting is " << y; 

    y = static_cast<double>(x)/2; 
    cout << "\nThe value of y with casting is " << y; 
    cout << endl; 

    system("pause"); 
    return 0; 
}
