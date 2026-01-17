#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

// Global Arrays 
string birthstones[12] = {
	"Garnet", 
	"Amethyst", 
	"Aquamarine", 
	"Diamond",
	"Emerald", 
	"Pearl", 
	"Ruby", 
	"Peridot", 
	"Sapphire", 
	"Opal", 
	"Topaz", 
	"Turquoise"
}; 

int daysInMonth[12] = {
	31, 29, 31, 30, 31, 30, 
	31, 31, 30, 31, 30, 31
};

string zodiacSigns[12] = {
	"Aries", "Taurus", "Gemini", "Cancer", 
	"Leo", "Virgo", "Libra", "Scorpio", 
	"Sagittarius", "Capricorn", "Aquarius", "Pisces"
}; 

int zodiacStartMonth[12] = {
	3, 4, 5, 6, 7, 8, 
	9, 10, 11, 12, 1, 2
}; 

int zodiacStartDay[12] = {
	21, 20, 21, 21, 23, 23, 
	23, 23, 22, 22, 20, 19
}; 

int zodiacEndMonth[12] = {
	4, 5, 6, 7, 8, 9, 
	10, 11, 12, 1, 2, 3
}; 

int zodiacEndDay[12] = {
	19, 20, 20, 22, 22, 22, 
	22, 21, 21, 19, 18, 20
}; 

// Basic Global Variables
int month, day; 
char again; 

// Functions 
string getZodiac(int month, int day) {
	for (int i = 0; i < 12; i++) {
		if ((month == zodiacStartMonth[i] && day >= zodiacStartDay[i]) || 
			(month == zodiacEndMonth[i] && day <= zodiacEndDay[i])) {
				return zodiacSigns[i]; 
			}
	}
	return "Unknown."; 
}

void mainMenu(){
	system("cls"); 
	cout << "Enter your birth month: "; 
	cin >> month; 
	while (month < 1 || month > 12) {
		cout << "Invalid month. Try again: "; 
		cin >> month; 
	}
		
	cout << "Enter your birth day: "; 
	cin >> day; 
	while (day < 1 || day > daysInMonth[month - 1]) {
		cout << "Invalid day for this month. Try again: ";
		cin >> day;  
	}
		
	string stone = birthstones[month - 1]; 
	string zodiac = getZodiac(month, day); 
		
	cout << "\nYour birthstone is " << stone << ".";
	cout << "\nYour zodiac sign is " << zodiac << "."; 
}

// Main 
int main(){
	system("cls"); 
	do {
		mainMenu(); 
		cout << "\nRetry? \n> "; 
		cin >> again; 
	} while (again == 'Y' || again == 'y'); 
	
	cout << "\nProgram Ended. Enjoy~"; 
	cout << "\nReturning to home screen...";
	cout << endl;  
	system("pause");
	return 0; 	
}
