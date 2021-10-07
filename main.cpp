/*

*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int counter = 0;
	int randomNumber = 0;
	srand(time(nullptr));

	for (int i = 0; i < 100; i++)
	{
		randomNumber = rand() % 100;
		cout << randomNumber << endl;
		counter++;
		
	}
	cout << "We processed " << counter << " numbers." << endl;

	return 0;
}

// STILL IN PROCESS