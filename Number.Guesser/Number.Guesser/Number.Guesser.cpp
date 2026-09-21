
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main() {

	srand(time(0));

	int max;
	int gs;
	int tries = 10;
	int tnr = 0;
	string dif;

	std::cout << "Welcome to Number Guessing Game!" << endl << endl;
	std::cout << "Rules:" << endl;
	std::cout << "1. The numbers must be from 1 to the selected number" << endl;
	std::cout << "2. The selected number must be lower than 10000" << endl;
	std::cout << "3. On hard difficulty you have a limited number of tries. You ran out and you lose!" << endl;
	std::cout << "Have fun!" << endl;
	std::cout << "Select your max number:" << endl;
	cin >> max;
	std::cout << "You  need to select numbers from 1 to " << max << endl;
	std::cout << "Select difficulty: Easy or Hard?" << endl << endl;

	int nr = (rand() % max) + 1;

	cin >> dif;
		if ((dif == "Easy") || (dif == "EASY") || (dif == "easy"))
		{
			std::cout << "Difficulty selected: Easy!" << endl;
			do {
				cin >> gs;

				if (gs > nr)
				{
					std:cout << "Smaller" << endl;
				}
				else
				{
					if (gs < nr)
					{
						std::cout << "Bigger" << endl;
					}
				}
				if (gs > max)
				{
					std::cout << "The number must be lower than " << max << "!" << endl;
				}
				else
				{
					if (gs < 1)
					{
						std::cout << "The number must be bigger than 1!" << endl;
					}
				}

			} while (gs != nr);

			if (gs == nr)
			{
				std::cout << "You have guessed the number! Congratulations!" << endl;
				return 0;
			}
		}
		else
		{
			if ((dif == "Hard") || (dif == "HARD") || (dif == "hard"))
			{
				std::cout << "Difficulty selected: Hard!" << endl;
				std::cout << "You have a total of 10 tries to guess the number!" << endl;

				do {
					cin >> gs;

					if ((gs > nr) && (gs < max))
					{
						tries = tries - 1;
						tnr = tnr + 1;
						std::cout << "Smaller!" << endl;
						std::cout << "You have " << tries << " tries left!" << endl << endl;
					}
					if (gs > max)
					{
						std::cout << "The number must be lower than " << max << "!" << endl;
					}
					else
					{
						if ((gs < nr) && (gs > 1))
						{
							tries = tries - 1;
							tnr = tnr + 1;

							std::cout << "Bigger!" << endl;
							std::cout << "You have " << tries << " tries left!" << endl << endl;
						}
						if (gs < 1)
						{
							std::cout << "The number must be bigger than 1!" << endl;
						}

					}
					if (gs == nr)
					{
						tnr = tnr + 1;

						std::cout << "You guessed the number in " << tnr << " tries! Congratulations!" << endl;
						return 0;
					}
					if (tries == 0)
					{
						std::cout << "You ran out of tries! You lose!" << endl;
						std::cout << "The number was " << nr << "!" << endl;
						return 0;
					}

				} while (gs != nr);
			}
			else
			{
				std::cout << "Invalid difficulty";
				return -1;
			}
		}

	return 0;
}