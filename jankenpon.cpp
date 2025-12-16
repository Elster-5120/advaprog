#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice(); 
char getComputerChoice(); 
void showChoice(char choice); 
void chooseWinner(char player, char computer); 
void playGame(int rounds); 

char getUserChoice() {
    char player; 
    do {
        cout << "***************************\n"; 
        cout << "Choose 'r' for Rock\n"; 
        cout << "Choose 'p' for Paper\n"; 
        cout << "Choose 's' for Scissors\n"; 
        cout << "> "; 
        cin >> player; 
    } while (player != 'r' && player != 'p' && player != 's'); 
    
    return player; 
}

char getComputerChoice() {
    int num = rand() % 3; 
    switch(num){
        case 0: return 'r'; 
        case 1: return 'p'; 
        case 2: return 's'; 
    }
    return 'r'; 
}

void showChoice(char choice) {
    switch(choice){
        case 'r': cout << "Rock"; break; 
        case 'p': cout << "Paper"; break; 
        case 's': cout << "Scissors"; break; 
    }
}

void chooseWinner(char player, char computer) {
    if (player == computer) {
        cout << "\nIt's a tie~\n"; 
    } else if ((player == 'r' && computer == 's') ||
               (player == 'p' && computer == 'r') ||
               (player == 's' && computer == 'p')) {
        cout << "\nYou win!\n"; 
    } else {
        cout << "\nYou lose~\n"; 
    }
}

void playGame(int rounds) {
    for (int i = 1; i <= rounds; i++) {
        cout << "\n=== Round " << i << " ===\n"; 

        char player = getUserChoice(); 
        cout << "Your choice: "; 
        showChoice(player); 

        char computer = getComputerChoice(); 
        cout << "\nComputer's choice: "; 
        showChoice(computer); 

        chooseWinner(player, computer);
    }
    cout << "\nGame over! You’ve played " << rounds << " rounds.\n";
}

int main() {
    srand(time(0)); 
    playGame(3);   // limit to 3 trials
    return 0; 
}
