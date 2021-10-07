/*

*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	//create a random number between 1 and 100 inclusive
	int randomNumber = 0;
	int guess = 0;			//store the user's guess
	int guessCount = 0;	//keep track of number of guesses

	srand(time(nullptr));
	randomNumber = rand() % 100;

	//interact with the user
	guessCount++;
	cout << randomNumber;
	
	while (guess != randomNumber)
	{
		cout << "Please enter a number between 1 and 100 inclusive: ";
		cin >> guess;
	if (guess > randomNumber)	//if the guess is too high get another input
	{
		cout << "You guessed too high, try again: ";
		cin >> guess;
		guessCount++;
	}
	if (guess < randomNumber)	//if the guess is too low get another input
	{
		cout << "You guessed too low, try again: ";
		cin >> guess;
		guessCount++;
	}
	if (guess == randomNumber)
	{
		cout << "You guessed " << guess << " That is correct! Congratulations!" << " It took you only " << guessCount << " trie(s)!";
	}
	}

	



	return 0;
}

// STILL IN PROCESS