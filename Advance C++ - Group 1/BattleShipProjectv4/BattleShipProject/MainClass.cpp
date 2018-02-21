/* Adv C++ First Half Project Group 1 
   Team members:
   Ethan Sutherland
   Jacob Brennecke
   Sally Coil
   Danh Tran
   Heath Francois
   02/28/2017
 */  
#include "Player.cpp"
#include <iostream>
#include <string>
#include<stdlib.h>

int pause;
Player p1, p2;
int main() {
	system("Color 80");
	// Explaining the game to the users.
	cout << "\nThis Battleship game has 2 players." << endl; 
	cout << "Each player has 5 ships to place on their board." << endl;
	cout << "Each ship requires various amounts of hits in order to sink the ship." << endl;
	cout << "The goal is to guess the location of your opponent's ships and sink them." << endl;
	cout << "In order to win, you must sink all 5 ships before your opponent." << endl;
	cout << "You will be prompted to enter a coordinate such as C3 to fire at the ship." << endl;
	cout << "The letters on the grid are A through J." << endl;
	cout << "The numbers on the grid are 1 through 10." << endl;
	system("pause");
	system("CLS");
	system("Color 80");
	cout << "Player 1 place your ships. \n\n";
	p1.addShip();
	system("pause");
	system("CLS");
	cout << "Pass the computer to player 2 and then hit enter";
	std::cin.get();
	system("CLS");
	cout << "Player 2 place your ships. \n\n";
	p2.addShip();
	system("pause");
	system("CLS");

	bool p1Won = false;
	bool p2Won = false;
	char row;
	int col;
	do {
		system("Color 80");
		cout << " Player 1 enter the coordinate to fire: ";
		cin >> row >> col;
		p1Won = p2.determineHitMiss(row, col);
		if (p2Won) {
			cout << "P2 wins";
			//std::cin.get();
			return 0;
		}
		// Pass to next player;
		system("pause");
		system("CLS");
		system("Color 80");
		cout << "Pass the computer to player 2 then press enter" << endl;
		system("pause");
		std::cin.get();

		system("Color 80");
		p1.opponentDisplay();
		cout << "\n\n";
		cout << "Player 2 enter the coordinate to fire: ";
		cin >> row >> col;
		p2Won = p1.determineHitMiss(row, col);
		if (p1Won) {
			cout << "P1 wins";
			//std::cin.get();
			return 0;
		}
		// Pass to next player;
		system("pause");
		system("CLS");
		system("Color 80");
		cout << "Pass the computer to player 1 then press enter" << endl;
		system("pause");
		std::cin.get();
		p2.opponentDisplay();


	} while (!(p1Won) || !(p2Won));
		return 0;
	

}
