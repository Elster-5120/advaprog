#include <iostream>
#include <string>
using namespace std; 

// === Global arrays === 
string names[16] = {
    "Rantaro Amami", "Kaede Akamatsu", "Ryoma Hoshi", "Kirumi Tojo",
    "Angie Yonaga", "Tenko Chabashira", "Korekiyo Shinguji", "Miu Iruma",
    "Gonta Gokuhara", "Kokichi Ouma", "Kaito Momota", "K1-BO",
    "Shuichi Saihara", "Himiko Yumeno", "Maki Harukawa", "Tsumugi Shirogane"
}; 

string talents[16] = {
    "Ultimate ???", "Ultimate Pianist", "Ultimate Tennis Pro", "Ultimate Maid",
    "Ultimate Artist", "Ultimate Aikido Master", "Ultimate Anthropologist", "Ultimate Inventor",
    "Ultimate Entomologist", "Ultimate Supreme Leader", "Ultimate Astronaut", "Ultimate Robot",
    "Ultimate Detective", "Ultimate Magician", "Ultimate Assassin", "Ultimate Cosplayer"
}; 

string fates[16] = {
    "CAUSE OF DEATH: Killed by Tsumugi Shirogane with a shot put ball in the library.", // Rantaro
    "CAUSE OF DEATH: Wrongfully executed for Rantaro's murder after Monokuma framed her.", // Kaede
    "CAUSE OF DEATH: Murdered by Kirumi Tojo, drowned in the library aquarium.", // Ryoma
    "CAUSE OF DEATH: Dragged up a spiked rope and fell to her death.", // Kirumi
    "CAUSE OF DEATH: Murdered by Korekiyo Shinguji with a saw during a ritual.", // Angie
    "CAUSE OF DEATH: Murdered by Korekiyo Shinguji during the Séance ritual.", // Tenko
    "CAUSE OF DEATH: Executed after being revealed as the mastermind.", // Korekiyo
    "CAUSE OF DEATH: Strangled by Gonta Gokuhara in the virtual world.", // Miu
    "CAUSE OF DEATH: Executed after being tricked into killing Miu in the virtual world.", // Gonta
    "CAUSE OF DEATH: Poisoned himself and crushed by a hydraulic press in a plan with Kaito.", // Kokichi
    "CAUSE OF DEATH: Died from lethal injection alongside Kokichi.", // Kaito
    "CAUSE OF DEATH: Sacrificed himself in the final battle.", // K1-BO
    "CAUSE OF SURVIVAL: Survived the final killing game after confronting the mastermind.", // Shuichi
    "CAUSE OF SURVIVAL: Survived the final killing game alongside Shuichi and Maki.", // Himiko
    "CAUSE OF SURVIVAL: Survived the final killing game alongside Shuichi and Himiko.", // Maki
    "CAUSE OF DEATH: Executed by a hydraulic press as the mastermind." // Tsumugi
};

// === Global Variables === 
string choice; 
int value; 

void showChar(int index) {
    cout << "\nYou have selected " << names[index] << "."; 
    cout << "\nTalent: " << talents[index]; 
    cout << "\n" << fates[index]; 
}

void runGame() {
    cout << "\nSelect a character to know their talent and cause of death/survival.";
    cout << "\nBEWARE OF SPOILERS!!";

    for (int i = 0; i < 16; i++) {
        cout << "\n" << (i+1) << ". " << names[i];
    }
    cout << "\n17. Cancel";

    cout << "\n\nEnter your selection (1-16): ";
    cin >> value;

    if (value >= 1 && value <= 16) {
        showChar(value-1);
    } else if (value == 17) {
        cout << "\nPlease press the 'Enter' key to quit!";
    } else {
        cout << "\nInvalid selection. Please enter a number between 1 and 16.";
    }
}

void menu() {
    cout << "\n\n=== DANGANRONPA V3: KILLING HARMONY ===";
    cout << "\nStart Game? yes or no?";
    cout << "\nPlease enter yes and no in lowercase!";
    cout << "\nBEWARE OF SPOILERS IF YOU PICKED YES! \n> ";

    cin >> choice;

    if (choice == "no") {
        cout << "\nAre you sure? Your progress might not be saved.";
        cout << "\nPress the Enter key to quit.";
    } else if (choice == "yes") {
        runGame();
    } else {
        cout << "\nInvalid initial choice. Please enter 'yes' or 'no'!";
    }
}

int main() {
    while(true) {
        menu(); 
    }
    return 0; 
}
