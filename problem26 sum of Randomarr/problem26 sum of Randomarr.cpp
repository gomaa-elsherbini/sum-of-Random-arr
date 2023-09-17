#include <iostream>
#include <cstdlib>
using namespace std;




int getRandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void readArray(int numArr[100], int& arrLength)
{
	cout << "Please enter how many elements of the array?\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		numArr[i] = getRandomNumber(1, 100);
	}
}

int sumArrayElements(int numArr[100], int arrLength)
{
	int sum = 0;
		for (int i = 0; i < arrLength; i++)
		{
			sum += numArr[i];
		}
	return sum;
}

void printArray(int numArr[100], int arrLength)
{
	cout << "\nArray Elements: ";
	for (int i = 0; i < arrLength; i++)
	{
		cout << numArr[i] << " ";
	}
	cout << endl;
}

void printArrayDetails(int numArr[100], int arrLength)
{
	printArray(numArr, arrLength);
	cout << "Sum of all Elements is: " << sumArrayElements(numArr, arrLength);
	cout << "\n\n";
}



int main()
{
	int numArr[100]; int arrLength;

	readArray(numArr, arrLength);
	printArrayDetails(numArr, arrLength);


	return main();
}