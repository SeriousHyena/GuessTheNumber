/*
*C++
*GuessTheNumber
*Ernest Mack
*10/7/21
* 
Create a random number using system time to seed it.
Have the user guess the random number
If the user guesses too low prompt for another number
If the user guesses too lhigh prompt for another number
When the user gets it right let them and tell them how many tries it took

Error Handling-None
*/

#include <iostream>
#include <ctime>		//the library for time which we use as the random number seed
#include <cstdlib>		//the random, number function library

using namespace std;

int main()
{
	//create a random number between 1 and 100 inclusive
	int randomNumber = 0;
	int guess = 0;			//store the user's guess
	int guessCount = 0;	//keep track of number of guesses

	srand(time(nullptr));
	randomNumber = rand() % 100 + 1;

	//interact with the user
	guessCount++;
	//cout << randomNumber; //used for debugging
	
	while (guess != randomNumber)
	{
		if (guess > 100 || guess < 1)
		{
			cout << "Please enter a number between 1 and 100 inclusive: ";
			cin >> guess;
		}

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