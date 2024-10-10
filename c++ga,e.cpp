#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	srand(static_cast<unsigned int>(time(0)));
	int randomNumber = rand() % 1000 + 1;
	int guess = 0;
	int attempts = 0;

	std::cout << "Welcome to Guess the Number! \n";
	std::cout << "I'm thinking of a number between 1 and 1000. \n";

	do {
		std::cout << "Enter your guess: ";
		std::cin >> guess;
		attempts++;

		if (guess > randomNumber) {
			std::cout << "Too High! Try again. \n";
		}
		else if (guess < randomNumber) {
			std::cout << "Too low! Try again. \n";
		}
		else {
			std::cout << "Congratulations! You guessed the number in " << attempts << " attempts. \n";
		}
	} while (guess != randomNumber);

	std::cout << "Press enter to quit the program.";
	std::cin.ignore();
	std::cin.get();

	return 0;
}