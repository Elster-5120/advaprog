#include<iostream>
#include<string>
#include<cstdlib>
using namespace std; 

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
    "CAUSE OF DEATH: Killed by Tsumugi Shirogane with a shot put ball in the library.",
    "CAUSE OF DEATH: Wrongfully executed for Rantaro's murder after Monokuma framed her.",
    "CAUSE OF DEATH: Murdered by Kirumi Tojo, drowned in the library aquarium.",
    "CAUSE OF DEATH: Dragged up a spiked rope and fell to her death.",
    "CAUSE OF DEATH: Murdered by Korekiyo Shinguji with a saw during a ritual.",
    "CAUSE OF DEATH: Murdered by Korekiyo Shinguji during the Seance ritual.",
    "CAUSE OF DEATH: Executed after being revealed as the mastermind.",
    "CAUSE OF DEATH: Strangled by Gonta Gokuhara in the virtual world.",
    "CAUSE OF DEATH: Executed after being tricked into killing Miu in the virtual world.",
    "CAUSE OF DEATH: Poisoned himself and crushed by a hydraulic press in a plan with Kaito.",
    "CAUSE OF DEATH: Died from lethal injection alongside Kokichi.",
    "CAUSE OF DEATH: Sacrificed himself in the final battle.",
    "CAUSE OF SURVIVAL: Survived the final killing game after confronting the mastermind.",
    "CAUSE OF SURVIVAL: Survived the final killing game alongside Shuichi and Maki.",
    "CAUSE OF SURVIVAL: Survived the final killing game alongside Shuichi and Himiko.",
    "CAUSE OF DEATH: Executed by a hydraulic press as the mastermind."
};

string choice; 
int value; 
char again; 

void showChar(int index) {
    system("cls"); 
    cout << "\nYou have selected " << names[index] << "."; 
    cout << "\nTalent: " << talents[index]; 
    cout << "\n" << fates[index]; 
}

bool runGame() {
    system("cls"); 
    cout << "\nSelect a character to know their talent and cause of death/survival.";
    cout << "\nBEWARE OF SPOILERS!!";

    for (int i = 0; i < 16; i++) {
        cout << "\n" << (i+1) << ". " << names[i];
    }
    cout << "\n17. Cancel";

    cout << "\n\nEnter your selection (1-17): ";
    cin >> value;

    if (value >= 1 && value <= 16) {
        showChar(value-1);
    } else if (value == 17) {
        cout << "\nExiting game...";
        return false;
    } else {
        cout << "\nInvalid selection. Please enter a number between 1 and 17.";
    }
    return true;
}

bool menu() {
    system("cls"); 
    cout << "\n\n=== DANGANRONPA V3: KILLING HARMONY ===";
    cout << "\nStart Game? yes or no?";
    cout << "\nPlease enter yes and no in lowercase!";
    cout << "\nBEWARE OF SPOILERS IF YOU PICKED YES! \n> ";

    cin >> choice;

    if (choice == "no" || choice == "n") {
        cout << "\nExiting program...";
        return false;
    } else if (choice == "yes" || choice == "y" || choice == "Y") {
        return runGame();
    } else {
        cout << "\nInvalid initial choice. Please enter 'yes' or 'no'!";
        return true;
    }
}

int main() {
    system("cls"); 
    do {
        menu(); 
        cout << "\nDo you want to retry the game? (Y/N) \n> "; 
        cin >> again; 
    } while (again == 'Y' || again == 'y'); 

    cout << "Program ended. Enjoy~"; 
    system("pause"); 
    return 0; 
}
