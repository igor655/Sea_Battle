#include<iostream>
using namespace std;

const int SIZE_X = 10;
const int SIZE_Y = 10;

void createField(char arr[][SIZE_X], int SIZE_X, int SIZE_Y);
void displayField(char arr[][SIZE_X], int SIZE_X, int SIZE_Y);

enum direction
{
	RIGHT = 1,
	DOWN,
	LEFT,
	UP
};

bool checkRightDirectio(int x, int y, int decNum, int SIZE_X, int SIZE_Y);



int main(int argc, char* argv[])
{
	
	char field[SIZE_Y][SIZE_X];

	int x{ 5 };
	int y{ 3 };

	const int decNum = 5;

	createField(field, SIZE_X, SIZE_Y);

	//right direction
	bool RightDirection = x >= 0 && x + decNum <= SIZE_X && y >= 0 && y < SIZE_Y;
	cout << boolalpha << RightDirection << endl;

	if (RightDirection)
	{
		cout << "drow ship" << endl;
		for (size_t i = 0; i < decNum; i++)
		{
			field[y][x + i]    = 'X';

		}			
	}
	else
	{
		cout << "Out of rangeexaption!!!\n" << endl;;
	}

	displayField(field, SIZE_X, SIZE_Y);



	/*if (x + decNum <= SIZE_X && y >= 0 && y < SIZE_Y)
	{
		cout << "ship is valid \n";
	}
	else
		cout << "ship is not valid\n";*/





	
	/*cout << RIGHT << endl;
	cout << DOWN << endl;
	cout << LEFT << endl;
	cout << UP << endl;*/

	/*int doun = DOWN;

	cout << "int doun = DOWN -- " << DOWN << endl;*/


	//direction right
	/*if (x + decNum < SIZE_X)
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "Not OK" << endl;
	}

	
	cout << ((x + decNum) < SIZE_X) << endl; ;*/

	
	

	return 0;
}

void createField(char arr[][SIZE_X], int SIZE_X, int SIZE_Y)
{
	for (int i = 0; i < SIZE_X; i++)
	{
		for (int j = 0; j < SIZE_Y; j++)
		{
			arr[i][j] = '*';

		}
	}

}

void displayField(char arr[][SIZE_X], int SIZE_X, int SIZE_Y)
{
	for (int i = 0; i < SIZE_X; i++)
	{
		for (int j = 0; j < SIZE_Y; j++)
		{
		cout << arr[i][j] << ' ';

		}
		cout << endl;
	}

}

bool checkRightDirectio(int x, int y, int decNum, int SIZE_X, int SIZE_Y)
{
	return 
}
