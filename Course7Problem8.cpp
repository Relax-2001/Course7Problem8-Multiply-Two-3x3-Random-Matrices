#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void FillMatrix(short Arr[3][3] , short Rows , short Cols)
{
	for (short i = 0 ; i < Rows ; i++)
	{
		for (short j = 0 ; j < Cols ; j++)
		{
			Arr[i][j] = RandomNumber(1,10);
		}
	}
}

void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0 ; i < Rows ; i++)
	{
		for (short j = 0 ; j < Cols ; j++)
		{
			printf(" %0*d\t" , 2, Arr[i][j]);
		}
		cout << "\n";
	}
}

void Multiply2Matrices(short Arr1[3][3] , short Arr2[3][3] , short ResultArr[3][3], short Rows, short Cols)
{
	for (short i = 0 ; i < Rows ; i++)
	{
		for (short j = 0 ; j < Cols ; j++)
		{
			ResultArr[i][j] = Arr1[i][j] * Arr2[i][j];
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	short Arr1[3][3], Arr2[3][3], ResultArr[3][3];

	FillMatrix(Arr1, 3, 3);
	cout << "\nMatris 1 :\n";
	PrintMatrix(Arr1 , 3 , 3);

	FillMatrix(Arr2, 3, 3);
	cout << "\nMatris 2 :\n";
	PrintMatrix(Arr2, 3, 3);

	Multiply2Matrices(Arr1 , Arr2 , ResultArr , 3 , 3 );
	cout << "\nMutiply result :\n";
	PrintMatrix(ResultArr, 3, 3);

}

