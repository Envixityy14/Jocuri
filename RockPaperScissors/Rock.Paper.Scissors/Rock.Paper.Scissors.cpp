#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	string pick;
	string dif;
	int pick2 = (rand() % 3) + 1; //1 = rock, 2 = paper, 3 = scissors;
	char again = 'y';
	int sp = 0;
	int sb = 0;

	std::cout << "Welcom to Rock Paper Scissors!" << endl;
	std::cout << "You must pick rock, paper or scissors to beat the opponent!" << endl;
	std::cout << endl;
	std::cout << "Rules: " << endl;
	std::cout << "1. Rock beats scissors, paper beats rock and scissors beat paper." << endl;
	std::cout << "2. If both players have the same pick, it is a tie." << endl;
	std::cout << "3. Easy difficulty is infinte, but Hard difficulty is a first-to-5 match." << endl;
	std::cout << endl;
	std::cout << "Choose difficulty( Easy/Hard ):" << endl;
	std::cin >> dif;

	if ((dif == "Easy") || (dif == "easy") || (dif == "EASY") || (dif == "eASY"))
	{
		std::cout << "You picked Easy difficulty." << endl;
		std::cout << endl;
		do {
			std::cout << "Pick your move:" << endl;
			std::cin >> pick;

			if ((pick == "Rock") || (pick == "rock") || (pick == "ROCK") || (pick == "rOCK"))
			{
				if (pick2 == 1)
				{
					std::cout << "Opponent picked Rock" << endl;
					std::cout << endl;
					std::cout << "Tie" << endl;
					std::cout << "Score is: " << sp << " to " << sb << endl;
				}
				else
				{
					if (pick2 == 2)
					{
						std::cout << "Opponent picked Paper." << endl;
						std::cout << endl;
						std::cout << "Paper beats Rock. You lose." << endl;
						sb = sb + 1;
						std::cout << "Score is: " << sp << " to " << sb << endl;
					}
					else
					{
						if (pick2 == 3)
						{
							std::cout << "Opponent picked Scissors.";
							std::cout << endl;
							std::cout << "Rock beats Scissors. You win!" << endl;
							sp = sp + 1;
							std::cout << "Score is: " << sp << " to " << sb << endl;
						}
					}
				}
				std::cout << "Try again? (y/n):" << endl;
				std::cout << endl;
				std::cin >> again;
				std::cout << endl;
				pick2 = (rand() % 3) + 1;
			}
			else
			{
				if ((pick == "Paper") || (pick == "paper") || (pick == "PAPER") || (pick == "pAPER"))
				{
					if (pick2 == 1)
					{
						std::cout << "Opponent picked Rock." << endl;
						std::cout << endl;
						std::cout << "Paper beats Rock. You win!" << endl;
						sp = sp + 1;
						std::cout << "Score is: " << sp << " to " << sb << endl;
					}
					else
					{
						if (pick2 == 2)
						{
							std::cout << "Opponent picked Paper." << endl;
							std::cout << endl;
							std::cout << "Tie." << endl;
							std::cout << "Score is: " << sp << " to " << sb << endl;
						}
						else
						{
							if (pick2 == 3)
							{
								std::cout << "Opponent picked Scissors." << endl;
								std::cout << endl;
								std::cout << "Scissors beat Paper. You lose." << endl;
								sb = sb + 1;
								std::cout << "Score is: " << sp << " to " << sb << endl;
							}
						}
					}
					std::cout << "Try again? (y/n):" << endl;
					std::cout << endl;
					std::cin >> again;
					std::cout << endl;
					pick2 = (rand() % 3) + 1;
				}
				else
				{
					if ((pick == "Scissors") || (pick == "scissors") || (pick == "SCISSORS") || (pick == "sCISSORS"))
					{
						if (pick2 == 1)
						{
							std::cout << "Opponent picked Rock." << endl;
							std::cout << endl;
							std::cout << "Rock beats Scissors. You lose." << endl;
							sb = sb + 1;
							std::cout << "Score is: " << sp << " to " << sb << endl;
						}
						else
						{
							if (pick2 == 2)
							{
								std::cout << "Opponent picked Paper" << endl;
								std::cout << endl;
								std::cout << "Scissors beat Paper. You win." << endl;
								sp = sp + 1;
								std::cout << "Score is: " << sp << " to " << sb << endl;
							}
							else
							{
								if (pick2 == 3)
								{
									std::cout << "Opponent picked Scissors." << endl;
									std::cout << endl;
									std::cout << "Tie" << endl;
									std::cout << "Score is: " << sp << " to " << sb << endl;
								}
							}
						}
						std::cout << "Try again? (y/n):" << endl;
						std::cout << endl;
						std::cin >> again;
						std::cout << endl;
						pick2 = (rand() % 3) + 1;

					}
					else
					{
						std::cout << "Invalid choice. Try again." << endl;
						std::cout << endl;
					}
				}
			}
		} while (again == 'y');
	}
	else
	{
		if ((dif == "Hard") || (dif == "hard") || (dif == "HARD") || (dif == "hARD"))
		{
			std::cout << "You picked Hard difficulty." << endl;
			std::cout << endl;
			std::cout << "The first one to 5 points wins!" << endl;
			do {
				std::cout << "Pick your move:" << endl;
				std::cin >> pick;

				if ((pick == "Rock") || (pick == "rock") || (pick == "ROCK") || (pick == "rOCK"))
				{
					if (pick2 == 1)
					{
						std::cout << "Opponent picked Rock" << endl;
						std::cout << endl;
						std::cout << "Tie" << endl;
						std::cout << "Score is: " << sp << " to " << sb << endl;
					}
					else
					{
						if (pick2 == 2)
						{
							std::cout << "Opponent picked Paper." << endl;
							std::cout << endl;
							std::cout << "Paper beats Rock. You lose." << endl;
							sb = sb + 1;
							std::cout << "Score is: " << sp << " to " << sb << endl;
						}
						else
						{
							if (pick2 == 3)
							{
								std::cout << "Opponent picked Scissors.";
								std::cout << endl;
								std::cout << "Rock beats Scissors. You win!" << endl;
								sp = sp + 1;
								std::cout << "Score is: " << sp << " to " << sb << endl;
							}
						}
					}
					pick2 = (rand() % 3) + 1;
				}
				else
				{
					if ((pick == "Paper") || (pick == "paper") || (pick == "PAPER") || (pick == "pAPER"))
					{
						if (pick2 == 1)
						{
							std::cout << "Opponent picked Rock." << endl;
							std::cout << endl;
							std::cout << "Paper beats Rock. You win!" << endl;
							sp = sp + 1;
							std::cout << "Score is: " << sp << " to " << sb << endl;
						}
						else
						{
							if (pick2 == 2)
							{
								std::cout << "Opponent picked Paper." << endl;
								std::cout << endl;
								std::cout << "Tie." << endl;
								std::cout << "Score is: " << sp << " to " << sb << endl;
							}
							else
							{
								if (pick2 == 3)
								{
									std::cout << "Opponent picked Scissors." << endl;
									std::cout << endl;
									std::cout << "Scissors beat Paper. You lose." << endl;
									sb = sb + 1;
									std::cout << "Score is: " << sp << " to " << sb << endl;
								}
							}
						}
						pick2 = (rand() % 3) + 1;
					}
					else
					{
						if ((pick == "Scissors") || (pick == "scissors") || (pick == "SCISSORS") || (pick == "sCISSORS"))
						{
							if (pick2 == 1)
							{
								std::cout << "Opponent picked Rock." << endl;
								std::cout << endl;
								std::cout << "Rock beats Scissors. You lose." << endl;
								sb = sb + 1;
								std::cout << "Score is: " << sp << " to " << sb << endl;
							}
							else
							{
								if (pick2 == 2)
								{
									std::cout << "Opponent picked Paper" << endl;
									std::cout << endl;
									std::cout << "Scissors beat Paper. You win." << endl;
									sp = sp + 1;
									std::cout << "Score is: " << sp << " to " << sb << endl;
								}
								else
								{
									if (pick2 == 3)
									{
										std::cout << "Opponent picked Scissors." << endl;
										std::cout << endl;
										std::cout << "Tie" << endl;
										std::cout << "Score is: " << sp << " to " << sb << endl;
									}
								}
							}
							pick2 = (rand() % 3) + 1;

						}
						else
						{
							std::cout << "Invalid choice. Try again." << endl;
							std::cout << endl;
						}
					}
				}


				if ((sp == 5) || (sb == 5))
				{
					if (sp == 5)
					{
						std::cout << "You are the first player to reach 5 points!" << endl;
						std::cout << "Congratulations!";
						std::cout << endl;
						return 0;
					}
					else
					{
						if (sb == 5)
						{
							std::cout << "The enemy has reached 5 points" << endl;
							std::cout << "You lose";
							std::cout << endl;
							return 0;
						}
					}
				}
				
			} while ( (sp != 5) || (sb != 5) );
		}
		
	}
	return 0;
	
}