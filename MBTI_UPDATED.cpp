#include <iostream>
#include <string>
#include <cstdlib> // for system()
using namespace std;

// == GLOBAL VARIABLES ==
string questions[20] = {
    // E vs I
    "Do you enjoy being around people often? (yes/no)",
    "Do you feel energized after social events? (yes/no)",
    "Do you prefer group activities or social activities? (yes/no)",
    "Do you find it easy to start conversations with strangers? (yes/no)",
    "Do you like being the centre of attention? (yes/no)",

    // S vs N
    "Do you rely on reality more than fiction? (yes/no)",
    "Do you prefer practical solutions over abstract ideas? (yes/no)",
    "Do you trust experience more than theory? (yes/no)",
    "Do you focus on details rather than the big picture? (yes/no)",
    "Do you prefer ordered/step-by-step instructions over experimenting? (yes/no)",

    // T vs F
    "Do you prefer logic over feelings when deciding? (yes/no)",
    "Do you value fairness over compassion in tough choices? (yes/no)",
    "Do you find it easier to analyze than empathize? (yes/no)",
    "Do you prioritize efficiency over harmony? (yes/no)",
    "Do you believe truth is more important than tact? (yes/no)",

    // J vs P
    "Do you like having a fixed plan? (yes/no)",
    "Do you prefer deadlines over flexibility? (yes/no)",
    "Do you feel more comfortable when things are organized? (yes/no)",
    "Do you dislike last-minute changes? (yes/no)",
    "Do you prefer structure over spontaneity? (yes/no)"
};

string answers[20];
string mbti = "";
string choice;

// === Function to run MBTI test ===
void runMBTITest() {
    mbti = "";
    int scoreE = 0, scoreS = 0, scoreT = 0, scoreJ = 0;

    cout << "\n=== MBTI Test (20 Questions) ===\n\n";

    for (int i = 0; i < 20; i++) {
        cout << (i + 1) << ". " << questions[i] << "\n> ";
        cin >> answers[i];
        cout << "\n";

        if (i < 5) { // E/I
            if (answers[i] == "yes" || answers[i] == "y" || answers[i] == "Y") scoreE++;
        } else if (i < 10) { // S/N
            if (answers[i] == "yes" || answers[i] == "y" || answers[i] == "Y") scoreS++;
        } else if (i < 15) { // T/F
            if (answers[i] == "yes" || answers[i] == "y" || answers[i] == "Y") scoreT++;
        } else { // J/P
            if (answers[i] == "yes" || answers[i] == "y" || answers[i] == "Y") scoreJ++;
        }
    }

    // Build MBTI type based on majority answers
    mbti += (scoreE >= 3) ? "E" : "I";
    mbti += (scoreS >= 3) ? "S" : "N";
    mbti += (scoreT >= 3) ? "T" : "F";
    mbti += (scoreJ >= 3) ? "J" : "P";

    cout << "\nYour MBTI type is " << mbti << "\n";

    // == Full MBTI Descriptions ==
    if (mbti == "INTJ") cout << "INTJ - The Mastermind: strategic, logical, and independent.\n";
    else if (mbti == "INTP") cout << "INTP - The Thinker: analytical, curious, and inventive.\n";
    else if (mbti == "ENTJ") cout << "ENTJ - The Commander: bold, efficient, and natural leaders.\n";
    else if (mbti == "ENTP") cout << "ENTP - The Debater: curious, energetic, and love challenges.\n";
    else if (mbti == "INFJ") cout << "INFJ - The Advocate: insightful, idealistic, and value harmony.\n";
    else if (mbti == "INFP") cout << "INFP - The Mediator: empathetic, creative, and guided by values.\n";
    else if (mbti == "ENFJ") cout << "ENFJ - The Protagonist: inspiring, charismatic, and supportive.\n";
    else if (mbti == "ENFP") cout << "ENFP - The Campaigner: enthusiastic, imaginative, and sociable.\n";
    else if (mbti == "ISTJ") cout << "ISTJ - The Inspector: responsible, detail-oriented, and dependable.\n";
    else if (mbti == "ISFJ") cout << "ISFJ - The Nurturer: caring, loyal, and protective.\n";
    else if (mbti == "ESTJ") cout << "ESTJ - The Executive: organized, practical, and strong-willed.\n";
    else if (mbti == "ESFJ") cout << "ESFJ - The Provider: warm, cooperative, and community-focused.\n";
    else if (mbti == "ISTP") cout << "ISTP - The Virtuoso: practical, adventurous, and hands-on problem solvers.\n";
    else if (mbti == "ISFP") cout << "ISFP - The Artist: gentle, spontaneous, and value personal freedom.\n";
    else if (mbti == "ESTP") cout << "ESTP - The Dynamo: energetic, bold, and action-oriented.\n";
    else if (mbti == "ESFP") cout << "ESFP - The Performer: spontaneous, fun-loving, and people-oriented.\n";
    else cout << "That’s a great personality! (Description not added yet.)\n";
}

// === Main Menu ===
void mainMenu() {
    do {
        system("cls");
        runMBTITest();
        system("pause");

        cout << "\nDo you want to take the test again? (y/n or yes/no): ";
        cin >> choice;
    } while (choice == "yes" || choice == "y" || choice == "Y");
    
    	cout << "\nReturning to Home Screen..."; 
}

int main() {
    mainMenu();
    return 0;
}
