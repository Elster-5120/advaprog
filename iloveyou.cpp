#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int heart_size;
string lyrics [4] = {
    "I love you so", 
    "I can never let you go", 
    "In the whole wide world", 
    "You're the one for me~"
}; 

int main() {
    system("cls");

    cout << "Enter heart size (even number recommended): ";
    cin >> heart_size;

    system("cls");

    // upper part
    for (int i = heart_size / 2; i <= heart_size; i += 2) {
        for (int j = 1; j < heart_size - i; j += 2) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= heart_size - i; j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }

    // lower part
    for (int i = heart_size; i >= 1; i--) {
        for (int j = i; j < heart_size; j++) cout << " ";
        for (int j = 1; j <= (i * 2) - 1; j++) cout << "*";
        cout << "\n";
    }

    cout << "\n";
    for (int i = 0; i < 4; i++){
        cout << lyrics[i] << "\n"; 
    }
    
    system("pause");
    return 0;
}
