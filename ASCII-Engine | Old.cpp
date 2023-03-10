#include <iostream>
#include <cstdlib>
#include <conio.h>

// Defiing variables

// Defining input and Bool's 

char Input;
auto Played = false;
auto Display = false;
auto Move = false;
auto Handle = false;
auto Win = false;

// Defining X and Y positons

int X = 0;
int Y = 0;

// Defining the lines

auto Line1 = "::::::::::"; 
auto Line2 = "[]      ";
auto Line3 = "        ";
auto Line4 = "        ";
auto Line5 = "        ";
auto Line6 = "::::::::::";


int main() {

	// Starting the game

	std::cout << "3 = Wall, [] = Player, {} = End, 1 = Background." << std::endl;
	std::cout << "W to move up, S to move down, A to move left, D to might rigt." << std::endl << std::endl;

	std::cout << Line1 << std::endl;
	std::cout << ":" << Line2 << ":" << std::endl;
	std::cout << ":" << Line3 << ":" << std::endl;
	std::cout << ":" << Line4 << ":" << std::endl;
	std::cout << ":" << Line5 << ":" << std::endl;
	std::cout << Line6 << std::endl;

	// Detecting key presses

	while (!Win) {
		if (!Played) {
			Input = _getch();
			if (Input != 0) {
				Move = true;
				Played = true;
			}
		}

		// Handeling movement

		else if (Move) {
			if (Input == 119) {
				if (Y > 0) {
					Y = Y - 1;
					Handle = true;
					Move = false;
				}
				else {
					Input = 0;
					Played = false;
					Move = false;
				}
			}
			else if (Input == 115) {
				if (Y < 3) {
					Y = Y + 1;
					Handle = true;
					Move = false;
				}
				else {
					Input = 0;
					Played = false;
					Move = false;
				}
			}

			else if (Input == 97) {
				if (X > 0) {
					X = X - 1;
					Handle = true;
					Move = false;
				}
				else {
					Input = 0;
					Played = false;
					Move = false;
				}
			}
			else if (Input == 100) {
				if (X < 3) {
					X = X + 1;
					Handle = true;
					Move = false;
				}
				else {
					Input = 0;
					Played = false;
					Move = false;
				}
			}
			else {
				std::cout << "Error: " << Input << " not defined" << std::endl;
				Input = 0;
				Played = false;
				Move = false;
			}
		}

		// Changing the text

		else if (Handle) {
			if (X == 0) {
				if (Y == 0) {
					Line2 = "[]      ";
					Line3 = "        ";
					Line4 = "        ";
					Line5 = "        ";
					Display = true;
					Handle = false;
				}
				else if (Y == 1) {
					Line2 = "        ";
					Line3 = "[]      ";
					Line4 = "        ";
					Line5 = "        ";
					Display = true;
					Handle = false;
				}
				else if (Y ==  2) {
					Line2 = "        ";
					Line3 = "        ";
					Line4 = "[]      ";
					Line5 = "        ";
					Display = true;
					Handle = false;
				}
				else if (Y == 3) {
					Line2 = "        ";
					Line3 = "        ";
					Line4 = "        ";
					Line5 = "[]      ";
					Display = true;
					Handle = false;
				}
			}
			else if (X == 1) {
				if (Y == 0) {
					Line2 = "  []    ";
					Line3 = "        ";
					Line4 = "        ";
					Line5 = "        ";
					Display = true;
					Handle = false;
				}
				else if (Y == 1) {
					Line2 = "        ";
					Line3 = "  []    ";
					Line4 = "        ";
					Line5 = "        ";
					Display = true;
					Handle = false;
				}
				else if (Y == 2) {
					Line2 = "        ";
					Line3 = "        ";
					Line4 = "  []    ";
					Line5 = "        ";
					Display = true;
					Handle = false;
				}
				else if (Y == 3) {
					Line2 = "        ";
					Line3 = "        ";
					Line4 = "        ";
					Line5 = "  []    ";
					Display = true;
					Handle = false;
				}
			}
			if (X == 2) {
				if (Y == 0) {
					Line2 = "    []  ";
					Line3 = "        ";
					Line4 = "        ";
					Line5 = "        ";
					Display = true;
					Handle = false;
				}
				else if (Y == 1) {
					Line2 = "        ";
					Line3 = "    []  ";
					Line4 = "        ";
					Line5 = "        ";
					Display = true;
					Handle = false;
				}
				else if (Y == 2) {
					Line2 = "        ";
					Line3 = "        ";
					Line4 = "    []  ";
					Line5 = "        ";
					Display = true;
					Handle = false;
				}
				else if (Y == 3) {
					Line2 = "        ";
					Line3 = "        ";
					Line4 = "        ";
					Line5 = "    []  ";
					Display = true;
					Handle = false;
				}
			}
			else if (X == 3) {
				if (Y == 0) {
					Line2 = "      []";
					Line3 = "        ";
					Line4 = "        ";
					Line5 = "        ";
					Display = true;
					Handle = false;
				}
				else if (Y == 1) {
					Line2 = "        ";
					Line3 = "      []";
					Line4 = "        ";
					Line5 = "        ";
					Display = true;
					Handle = false;
				}
				else if (Y == 2) {
					Line2 = "        ";
					Line3 = "        ";
					Line4 = "      []";
					Line5 = "        ";
					Display = true;
					Handle = false;
				}
				else if (Y == 3) {
					Line2 = "        ";
					Line3 = "        ";
					Line4 = "        ";
					Line5 = "      []";
					Display = true;
					Handle = false;
				}
			}
		}

		// Clearing the console and printing out the text

		else if (Display) {
			system("cls");
			std::cout << Line1 << std::endl;
			std::cout << ":" << Line2 << ":" << std::endl;
			std::cout << ":" << Line3 << ":" << std::endl;
			std::cout << ":" << Line4 << ":" << std::endl;
			std::cout << ":" << Line5 << ":" << std::endl;
			std::cout << Line6 << std::endl;
			Played = false;
			Display = false;
			Input = 0;
		}
	}
}
