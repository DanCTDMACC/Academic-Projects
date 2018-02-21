/*
* Player.cpp
*
*  Created on: 02/14/2017
* 
*/

#ifndef PLAYER_H_
#define PLAYER_H_
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

class Player {
private:
	static const int BOARD_SIZE = 10,		// The size of the game board.
		NUM_SHIPS = 5;						// Number of ships each player has.
	int board[BOARD_SIZE][BOARD_SIZE],		// The game board array.
		ships[NUM_SHIPS],					// The array holds number of squares remaining of each ship.
		shipLengths[NUM_SHIPS];				// Array of ship lengths.
	string shipNames[NUM_SHIPS];			// Array of ship names.
	static const int CARRIER_INT = 0,						// subscript in arrays of ships.
		BATTLESHIP_INT = 1,
		CRUISER_INT = 2,
		SUBMARINE_INT = 3,
		DESTROYER_INT = 4;
	const string CARRIER = "Carrier",						// names of ships.
		BATTLESHIP = "Battleship",
		CRUISER = "Cruiser",
		SUBMARINE = "Submarine",
		DESTROYER = "Destroyer";
	static const int CARRIER_LENGTH = 5,			// The length of each ship.
		BATTLESHIP_LENGTH = 4,
		CRUISER_LENGTH = 3,
		SUBMARINE_LENGTH = 3,
		DESTROYER_LENGTH = 2;
	static const char WATER_CHAR = ' ',			// The character represents each factor on the board.
		CARRIER_CHAR = 'A',
		BATTLESHIP_CHAR = 'B',
		CRUISER_CHAR = 'R',
		SUBMARINE_CHAR = 'S',
		DESTROYER_CHAR = 'D',
		HIT_CHAR = 'H',
		MISS_CHAR = 'M';
	static const char CHARACTER_A = 'A',	// used as an offset between character A and integer 0.
		UP = '1',							// Directions of ship placement
		RIGHT = '2',
		DOWN = '3',
		LEFT = '4';
	int count;							// The number of ships remaining on the board.
	string password;						// used to validate the user.
	// This functions displays the board while adding ships.
	// It displays factors on the board as corresponding characters.
	void placeShipDisplay() {
		// Print top row
		cout << "\n   |"; // Add the space followed by a line
		for (int i = 0; i < BOARD_SIZE; i++) // Add the numbers
		{
			cout << i + 1 << "|";
		}
		cout << endl << endl;

		// Add each individual line.
		for (int y = 0; y < BOARD_SIZE; y++) { // cycle through the rows
			cout << static_cast<char>(CHARACTER_A + y) << "  |"; // display the letter of the row followed by the spacer
			for (int x = 0; x < BOARD_SIZE; x++) { // Cycle through the columns of row y;
				switch (board[x][y]) {
				case CARRIER_INT:
					cout << CARRIER_CHAR;
					break;
				case BATTLESHIP_INT:
					cout << BATTLESHIP_CHAR;
					break;
				case CRUISER_INT:
					cout << CRUISER_CHAR;
					break;
				case SUBMARINE_INT:
					cout << SUBMARINE_CHAR;
					break;
				case DESTROYER_INT:
					cout << DESTROYER_CHAR;
					break;
				default:
					cout << static_cast<char>(board[x][y]);
				}
				cout << "|"; // show the value at the row and the y followed by a spacer.
			}
			cout << endl; // go to the next line.
		}
		cout << endl;
	}
	// This functions displays the menu for choosing ships to add and validates the input.
	// It return an int as the subscript of a ship type in arrays of ships.
	int displayPlaceShipMenu() {
		int choice = 0, index;
		bool firsttime = true, shipNotAvailable = true;
		do {
			if (firsttime) {		// Prints the menu the first time of the loop.
					cout << setw(4) << "Type" << setw(12) << "Name"
						<< setw(8) << "Length" << setw(8) << "Placed" << endl;
					cout << "---------------------------------\n";
					for (int i = 0; i < NUM_SHIPS; i++) {
						cout << setw(4) << i + 1 << setw(12) << shipNames[i]
							<< setw(8) << shipLengths[i] << setw(8);
						if (ships[i] != 0) cout << "Yes";
						else cout << "No";
						cout << endl;
					}
					cout << endl;
					firsttime = false;			// Avoids printing the menu again.
			}
			else {				// Checks if ship type is available to place on the board.
					index = choice - 1;
					if (ships[index] == 0) {
						shipNotAvailable = false;
					}
					else {
						shipNotAvailable = true;
						choice = 0;			// To get a new choice.
						cout << shipNames[index] << "'s has already been placed on the board!\n";
					}
			}
			while (choice < 1 || choice > 5) {			// Gets the input.
				cout << "Enter a type number to place a ship: ";
				if (!(cin >> choice)) {
					cin.clear();
					cin.ignore(99, '\n');
				}
				else {
					cin.ignore(99, '\n');
				}
			}
		} while (shipNotAvailable);
		return index;
	}
	// This function validates the coordinate as the subscripts of the board array.
	bool validateCoordinate(int x, int y) {
		bool check = true;
		if (x < 0 || x > 9) check = false;
		else if (y < 0 || y > 9) check = false;
		return check;
	}
	// This function checks whether factor at a coordinate is water.
	bool checkCoordinate(int x, int y) {
		if (board[x][y] == WATER_CHAR) return true;
		else return false;
	}
	// This function extends from the first coordinate to a available directions.
	// It returns a bool value to determine if a direction is available to extend.
	bool extendFromFirstCoordinate(char direction, int x, int y, int extend, vector<int*> &vtrDirection) {
		bool notOverlap = true;
		switch (direction) {
		case UP:		// case extending up.
			// Gets pointers of board array elements upward of the first coordinate
			// in the extension and push to the array of pointers.
			for (int i = y - extend; i < y && notOverlap; i++) {
				if (checkCoordinate(x, i)) {
					vtrDirection.push_back(&board[x][i]);
				}
				else {
					notOverlap = false;
				}
			}
			// If upward direction is available to extend, uses the array of pointer
			// to change element values to UP.
			if (notOverlap) {
				for (int i = 0; i < vtrDirection.size(); i++) {
					*vtrDirection[i] = UP;
				}
			}
			break;
		case RIGHT:		// case extending right.
			for (int i = x + extend; i > x && notOverlap; i--) {
				if (checkCoordinate(i, y)) {
					vtrDirection.push_back(&board[i][y]);
				}
				else {
					notOverlap = false;
				}
			}
			if (notOverlap) {
				for (int i = 0; i < vtrDirection.size(); i++) {
					*vtrDirection[i] = RIGHT;
				}
			}
			break;
		case DOWN:		// case extending down.
			for (int i = y + extend; i > y && notOverlap; i--) {
				if (checkCoordinate(x, i)) {
					vtrDirection.push_back(&board[x][i]);
				}
				else {
					notOverlap = false;
				}
			}
			if (notOverlap) {
				for (int i = 0; i < vtrDirection.size(); i++) {
					*vtrDirection[i] = DOWN;
				}
			}
			break;
		case LEFT:		// case extending left.
			for (int i = x - extend; i < x && notOverlap; i++) {
				if (checkCoordinate(i, y)) {
					vtrDirection.push_back(&board[i][y]);
				}
				else {
					notOverlap = false;
				}
			}
			if (notOverlap) {
				for (int i = 0; i < vtrDirection.size(); i++) {
					*vtrDirection[i] = LEFT;
				}
			}
			break;
		}
		return notOverlap;
	}
	// This function changes elements which are pointed to by the array of pointers
	// to the index of a ship type.
	void finishPlaceShip(int index, vector<int*> vtrDirection) {
		for (int i = 0; i < vtrDirection.size(); i++) {
			*vtrDirection[i] = index;
		}
	}
	// This function changes elements which are pointed to by the array of pointers
	// the charater representing water.
	void restoreWater(vector<int*> vtrDirection) {
		for (int i = 0; i < vtrDirection.size(); i++) {
			*vtrDirection[i] = WATER_CHAR;
		}
	}
	// This function displays directions which are available to place ship from a coordinate.
	// It lets the user choose the first coordinate and choose the direction.
	// It returns a bool value indicating whether the ship is placed.
	bool placeShipAssistant(int x, int y, int index) {
		int extend = shipLengths[index] - 1;
		vector<int*> upDirection,
			rightDirection,
			downDirection,
			leftDirection;
		int numDirection = 0, placement = -1;
		bool up = false, right = false, down = false, left = false;
		bool placed = true;
		// Checks if a direction is in range to place the ship.
		if (y - extend >= 0) {
			if (up = extendFromFirstCoordinate(UP, x, y, extend, upDirection))
			numDirection++;
		}
		if (x + extend <= 9) {
			if (right = extendFromFirstCoordinate(RIGHT, x, y, extend, rightDirection))
			numDirection++;
		}
		if (y + extend <= 9) {
			if (down = extendFromFirstCoordinate(DOWN, x, y, extend, downDirection))
			numDirection++;
		}
		if (x - extend >= 0) {
			if (left = extendFromFirstCoordinate(LEFT, x, y, extend, leftDirection))
			numDirection++;
		}
		if (numDirection > 0) {			// There is at least an available direction.
			// Displays the board for the user to choose the direction.
			board[x][y] = index;
			placeShipDisplay();
			// Gets the direction.
			do {
				while (placement < 0 || placement > 4) {			// Gets the input.
					cout << "Enter the number of your desired placement, 0 to choose another coordinate: ";
					if (!(cin >> placement)) {
						cin.clear();
						cin.ignore(99, '\n');
					}
					else {
						cin.ignore(99, '\n');
					}
				}
				if (placement == (UP - UP + 1) && !up) placement = -1;
				else if (placement == (RIGHT - UP + 1) && !right) placement = -1;
				else if (placement == (DOWN - UP + 1) && !down) placement = -1;
				else if (placement == (LEFT - UP + 1) && !left) placement = -1;
			} while (placement < 0 || placement > 4);

			// Finishes placing the ship or cancels the choice.
			switch (placement) {
			case 0:
				board[x][y] = WATER_CHAR;
				restoreWater(upDirection);
				restoreWater(rightDirection);
				restoreWater(downDirection);
				restoreWater(leftDirection);
				placed = false;
				break;
			case 1:
				finishPlaceShip(index, upDirection);
				restoreWater(rightDirection);
				restoreWater(downDirection);
				restoreWater(leftDirection);
				break;
			case 2:
				restoreWater(upDirection);
				finishPlaceShip(index, rightDirection);
				restoreWater(downDirection);
				restoreWater(leftDirection);
				break;
			case 3:
				restoreWater(upDirection);
				restoreWater(rightDirection);
				finishPlaceShip(index, downDirection);
				restoreWater(leftDirection);
				break;
			case 4:
				restoreWater(upDirection);
				restoreWater(rightDirection);
				restoreWater(downDirection);
				finishPlaceShip(index, leftDirection);
				break;
			}
		}
		else {		// No available direction.
			cout << "The ship cannot be place at this coordinate.\n\n";
			placed = false;
		}
		return placed;
	}
	// This function places a ship on the board.
	void placeShip(int index) {
		char row;
		int col, x, y;
		bool coordinateAccepted = false;
		bool cancel = false;
		do {
			if (cancel) {
				placeShipDisplay();
				cancel = false;
			}
			cout << "\nPlacing your " << shipNames[index] << ", length: " << shipLengths[index] << endl;
			// Gets the coordinate to place.
			do {
				cout << "Enter the first coordinate to start (ex. A1, J10): ";
				cin >> row;
				if (!(cin >> col)) {
					cin.clear();
					cin.ignore(99, '\n');
					cout << "Not a valid coordinate.\n";
				}
				else {
					cin.ignore(99, '\n');
					coordinateAccepted = true;
				}
			} while (!coordinateAccepted);
			row = toupper(row);
			x = col - 1;
			y = row - CHARACTER_A;
			if (validateCoordinate(x, y)) {	// Try to place at the coordinate.
				if (checkCoordinate(x, y)) {
					if (placeShipAssistant(x, y, index)) {		// The ship is placed
						coordinateAccepted = true;
						count++;
						ships[index] = shipLengths[index];
					}
					else {		// Not placed.
						coordinateAccepted = false;
						cancel = true;
					}
				}
				else {		// The coordinate is 
					cout << "Coordinate not available.\n";
					coordinateAccepted = false;
				}
			}
			else {		// The coordinate is 
				cout << "Not a valid coordinate.\n";
				coordinateAccepted = false;
			}
		} while (!coordinateAccepted);
	}

	// This function changes a square to hit and determine if a ship is sunk.
	// It returns a bool value indicate the player loses.
	bool hitShip(int x, int y, int index) {
		bool lose = false;
		system("Color 47");
		cout << "*** You hit my "<< shipNames[index] << "! *** \n\n\a";
		board[x][y] =  HIT_CHAR;
		ships[index]--;
		if (ships[index] == 0) {
			count--;
			system("Color 47");
			cout << "************ You sank my " << shipNames[index] << "! **************\n\n";
			if (count == 0) {
				system("Color 47");
				cout << "*********** WINNER ************\n";
				cout << "***** You sank all of the ships *****\n\n";
				lose = true;
			
			}
		}
		return lose;
	}

public:
	// Constructor.
	Player() {
		for (int i = 0; i < BOARD_SIZE; i++) {
			for (int j = 0; j < BOARD_SIZE; j++) {
				board[i][j] = WATER_CHAR;
			}
		}
		for (int i = 0; i < NUM_SHIPS; i++) {
			ships[i] = 0;
			switch (i) {
			case CARRIER_INT:
				shipLengths[i] = CARRIER_LENGTH;
				shipNames[i] = CARRIER;
				break;
			case BATTLESHIP_INT:
				shipLengths[i] = BATTLESHIP_LENGTH;
				shipNames[i] = BATTLESHIP;
				break;
			case CRUISER_INT:
				shipLengths[i] = CRUISER_LENGTH;
				shipNames[i] = CRUISER;
				break;
			case SUBMARINE_INT:
				shipLengths[i] = SUBMARINE_LENGTH;
				shipNames[i] = SUBMARINE;
				break;
			case DESTROYER_INT:
				shipLengths[i] = DESTROYER_LENGTH;
				shipNames[i] = DESTROYER;
				break;
			}
		}
		count = 0;
	
	}

	// This function adds ships onto the table.
	void addShip() {
		do {
			placeShipDisplay();
			int shipIndex = displayPlaceShipMenu();
			placeShip(shipIndex);
		} while (count < NUM_SHIPS);
		placeShipDisplay();
	}

	// This function determines if a fire is hit or miss, a ship is sunk, or a game is over.
	// It returns a boolean value indicating whether the user loses.
	bool determineHitMiss(char row, int col) {
		bool lose = false;
		row = toupper(row);
		int x = col - 1;
		int y = row - CHARACTER_A;
		if (validateCoordinate(x, y)) {
			if (checkCoordinate(x, y)) {
				system("Color 17");
				cout << "*** You have missed ***\n\n";
				board[x][y] = MISS_CHAR;
			}
			else {
				switch (board[x][y]) {
				case CARRIER_INT:
					lose = hitShip(x, y, CARRIER_INT);
					break;
				case BATTLESHIP_INT:
					lose = hitShip(x, y, BATTLESHIP_INT);
					break;
				case CRUISER_INT:
					lose = hitShip(x, y, CRUISER_INT);
					break;
				case SUBMARINE_INT:
					lose = hitShip(x, y, SUBMARINE_INT);
					break;
				case DESTROYER_INT:
					lose = hitShip(x, y, DESTROYER_INT);
					break;
				default:
					cout << "Already Hit\n\n";
				}
			}
		}
		else {
			cout << "Miss Fire!\n\n";
			return lose;
		}		
		opponentDisplay();
		return lose;
	}

	// This function checks the password of a user.
	bool checkPass(string pass) {
		return (pass == password);
	}

	// This function displays the board for the opponent to see.
	// The board only shows water and fired squares as hits or misses.

	void opponentDisplay() {
		// Print top row
		cout << "   |"; // Add the space followed by a line
		for (int i = 0; i < BOARD_SIZE; i++) // Add the numbers
		{
			cout << i + 1 << "|";
		}
		cout << endl << endl;

		// Add each individual line.
		for (int y = 0; y < BOARD_SIZE; y++) { // cycle through the rows
			cout << static_cast<char>(CHARACTER_A + y) << "  |"; // display the letter of the row followed by the spacer
			for (int x = 0; x < BOARD_SIZE; x++) { // Cycle through the columns of row y;
				switch (board[x][y]) {
				case HIT_CHAR:
				case MISS_CHAR:
					cout << static_cast<char>(board[x][y]);
					break;
				default:
					cout << " ";
				}
				cout << "|"; // show the value at the row and the y followed by a spacer.
			}
			cout << endl; // go to the next line.
		}
	}

};

#endif /* PLAYER_H_ */

/*
Properties

A board which is represented by an integer array: one or two dimensions.BOARD

Integer numbers(constants) represent what are at spots.For example, -1 is for water, 0 - 4 are for ships.

An array to hold numbers of remaining squares of each ship(5 elements).SHIPS

A integer variable count to count the ships remaining.

Constructor

Create the board array with all element = -1

Create the array of ships with all element = -1

A function to place ships(can use helper function to validate coordinates of ships)
Display the board, or boards.
Loop 5 times, each time places a ship
Get inputs to place ship from the console
Validate the coordinates(number of squares, inside the board, not overlaping other ships)
Change element values from 0 to the number represented the ship on the coordinates(BOARD)
Change element value from 0 to the number of squares for the ship just replaced. (SHIPS)
Display the board, or boards
End loop

A function to get a coordinate to attack

Get input from the console

Validate or not (wrong means losing turn)

return the coordinate(main class call fire function of the opponent object)

A function receives a coordinate and determines whether it is a hit or miss(display the result of hit / miss, ship sunk, game over)

Determine on the result of the fire

If miss then

Change the element value at the coordinate to another integer represents a fired square

display a message

If hit then

Decrement the SHIPS array corrensponding to the element value at the coordinate on the BOARD array
If SHIPS element value = 0 then
Display a message a ship is sunk
Decrement count
If count = 0 then the game is over

Change the element value at the coordinate to another integer represents a fired square

Display the board.

A function to display board

- 1 is water, 0 - 4 is ship, -2 is fired squares(example)

A function to display board for opponent

- 2 is fired squares, others are water(example)
*/