#include<iostream>
#include<math.h>
#include<fstream>
#include<string>
using namespace std;
int determinant(int **matrix, int n, int z)
{
	int i, j, sum = 0, **matrix3 = NULL;
	if (n == n)
	{
		sum = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
		return sum;

	}
	for (int y = 0; y <n; y++)
	{
		int d=0, k = 0;
		for (int i = 0; i <n; i++)
		{
			for (j = 0; j <n; j++)
			{
				if (j == y)
					continue;
				matrix3[d][k] = matrix[i][j];
				k++;
				if (k == n - 1)
				{
					d++;
					k = 0;
				}
			}
		}
		sum = sum + matrix[0][y] * pow(-1, y)*determinant(matrix3, n - 1, z);
	}
	//return sum;
	if (z == 1)
	{

		cout << sum;

	}


	if (z == 2)
	{


		ofstream str1;
		string filename;
		cout << "enter file name u want to open" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;
			cin >> filename;
		}
		else
		{
			cout << "your determinanat of matrix is" << endl;
			str1 << sum;
			//return sum;

		}

	}
	//return sum;

}
//
int inverse(int **matrix, int n, int m, int z)
{
	int sum = 0, *sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + (matrix[0][i] * (matrix[1][(i + 1) % n] * matrix[2][(i + 2) % n] - matrix[1][(i + 2) % n] * matrix[2][(i + 1) % n]));
		return sum;

	}
	cout << "your matrix is" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << ((matrix[(j + 1) % n][(i + 1) % n] * matrix[(j + 2) % n][(i + 2) % n]) - (matrix[(j + 1) % n][(i + 2) % n] * matrix[(j + 2) % n][(i + 1) % n])) / sum;
			return sum;
		}

	}


}
void scalerAdd(int **matrix, int n, int m, int z)
{
	int A[10][10];
	int k = 0;
	cout << "enter value do u want to add" << endl;
	cin >> k;
	int num = k;

	/* Perform scalar add of matrix */
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < m; col++)
		{
			/* (cAij) = c + Aij */
			A[row][col] = num + matrix[row][col];
		}
	}
	if (z == 1)
	{


		/* Print result of scalar addition of matrix */
		cout << "your addition scaler matrix k + A = \n";
		for (int row = 0; row < n; row++)
		{
			for (int col = 0; col < m; col++)
			{
				cout << A[row][col] << " ";
			}
			cout << endl;
		}
	}
	if (z == 2)
	{


		ofstream str1;
		string filename;
		cout << "enter file name u want o open" << endl;
		cin >> filename;
		str1.open(filename);

		


			if (!str1.is_open())
			{
				cout << "file is not open" << endl;
				cin >> filename;

			}



			else
			{
				str1 << "your addition scaler matrix k + A = \n";
				for (int row = 0; row < n; row++)
				{
					for (int col = 0; col < m; col++)
					{
						str1 << A[row][col] << " ";
					}
					str1 << endl;
				}



			}

		}
	}


void scalersub(int **matrix, int n, int m, int z)
{
	int A[10][10];
	int k = 0;
	cout << "enter value do u want to subtract" << endl;
	cin >> k;
	int num = k;

	/* Perform scalar add of matrix */
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < m; col++)
		{
			/* (cAij) = c + Aij */
			A[row][col] = num - matrix[row][col];
		}
	}
	if (z == 1)
	{

		/* Print result of scalar addition of matrix */
		cout << "your scaler subration is k - A = \n";
		for (int row = 0; row < n; row++)
		{
			for (int col = 0; col < m; col++)
			{
				cout << A[row][col] << " ";
			}
			cout << endl;
		}
	}

	if (z == 2)
	{
		ofstream str1;
		string filename;
		cout << "enter file name u want o open" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;

		}
		else
		{
			cout << "your scaler subration is k - A = \n" << endl;
			for (int row = 0; row < n; row++)
			{
				for (int col = 0; col < m; col++)
				{
					str1 << A[row][col] << " ";
				}
				str1 << endl;
			}
		}

	}
}

void scalermul(int **matrix, int n, int m, int z)
{
	int A[10][10];
	int k = 0;
	cout << "enter value do u want to multiply" << endl;
	cin >> k;
	int num = k;

	/* Perform scalar add of matrix */
	for (int row = 0; row<n; row++)
	{
		for (int col = 0; col<m; col++)
		{
			/* (cAij) = c + Aij */
			A[row][col] = num * matrix[row][col];
		}
	}

	if (z == 1)
	{


		cout << "you mulptiplication scaler matrix k * A = \n";
		for (int row = 0; row < n; row++)
		{
			for (int col = 0; col < m; col++)
			{
				cout << A[row][col] << " ";
			}
			cout << endl;
		}
	}
	if (z == 2)
	{
		ofstream str1;
		string filename;
		cout << "enter file name u want o opena" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;

		}
		else
		{
			str1 << "you mulptiplication scaler matrix k * A = \n";
			for (int row = 0; row < n; row++)
			{
				for (int col = 0; col < m; col++)
				{
					str1 << A[row][col] << " ";
				}
				str1 << endl;
			}

		}


	}

}
void scalerdiv(int **matrix, int n, int m, int z)
{
	int A[10][10];
	int k = 0;
	cout << "enter value do u want to division" << endl;
	cin >> k;
	int num = k;

	/* Perform scalar add of matrix */
	for (int row = 0; row<n; row++)
	{
		for (int col = 0; col<m; col++)
		{
			/* (cAij) = c + Aij */
			A[row][col] = num / matrix[row][col];
		}
	}

	if (z == 1)
	{

		/* Print result of scalar addition of matrix */
		cout << "your divion scaler matrix is  k / A = \n";
		for (int row = 0; row < n; row++)
		{
			for (int col = 0; col < m; col++)
			{
				cout << A[row][col] << " ";
			}
			cout << endl;
		}
	}
	if (z == 2)
	{
		ofstream str1;
		string filename;
		cout << "enter file name u want o opena" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;

		}
		else
		{
			str1 << "your divion scaler matrix is  k / A = \n";
			for (int row = 0; row < n; row++)
			{
				for (int col = 0; col < m; col++)
				{
					str1 << A[row][col] << " ";
				}
				str1 << endl;
			}

		}

	}
}
void sum1(int **matrix, int n, int m, int z)
{

	int sum = 0;// , z = 0;
	//string filename;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum = sum + matrix[i][j];

		}
	}
	if (z == 1)
	{

		cout << " the sum of the matrix is " << sum;
	}
	if (z == 2)
	{
		ofstream str1;
		string filename;
		cout << "enter file name u want o opena" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;

		}
		else{
			str1 << "sum of matrix is" << endl;
			str1 << sum;
		}

		str1.close();

	}


}
void product1(int **matrix, int n, int m, int z)
{

	int product = 1;// , z = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			product = product* matrix[i][j];

		}
	}
	if (z == 1)
	{

		cout << " the product of the matrix is " << product;
	}
	if (z == 2)
	{

		string filename;
		ofstream str1;
		cout << "enter again file name" << endl;
		cin >> filename;
		str1.open(filename);
		str1 << "your product of matrix is" << product;

	}


}
void multiply(int **matrix, int n, int m, int z)
{
	int matrix2[10][10], matrix3[10][10];

	cout << "multiplication of two matrix we need a one more matrix " << endl;
	cout << endl;
	cout << "enter a second matrix" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix2[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix3[i][j] = matrix[i][j] * matrix2[i][j];

		}
	}
	if (z == 1)
	{

		cout << "Multiplication of two matrix is" << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << matrix3[i][j] << " ";

			}
			cout << endl;
		}
	}
	if (z == 2)
	{
		ofstream str1;
		string filename;
		cout << "enter file name u want o opena" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;

		}
		else
		{
			str1 << "Multiplication of two matrix is" << endl;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					str1 << matrix3[i][j] << " ";

				}
				str1 << endl;
			}

		}

	}


}
void add(int **matrix, int n, int m, int z)
{
	int matrix2[100][100], matrix3[100][100];

	cout << "ADD of two matrix we need a one more matrix " << endl;
	cout << endl;
	cout << "enter a second matrix" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix2[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix3[i][j] = matrix[i][j] + matrix2[i][j];

		}
	}
	if (z == 1)
	{

		cout << "addition of two matrix is" << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << matrix3[i][j] << " ";

			}
			cout << endl;
		}
	}
	if (z == 2)
	{
		ofstream str1;
		string filename;
		cout << "enter file name u want o opena" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;

		}
		else
		{
			cout << "addition of two matrix is" << endl;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					str1 << matrix3[i][j] << " ";

				}
				str1 << endl;
			}
		}

	}


}
void sub(int **matrix, int n, int m, int z)
{
	int matrix2[100][100], matrix3[100][100];

	cout << "SUB of two matrix we need a one more matrix " << endl;
	cout << endl;
	cout << "enter a second matrix" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix2[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix3[i][j] = matrix[i][j] - matrix2[i][j];

		}
	}
	if (z == 1)
	{

		cout << "sub of two matrix is" << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << matrix3[i][j] << " ";

			}
			cout << endl;
		}
	}
	if (z == 2)
	{
		ofstream str1;
		string filename;
		cout << "enter file name u want o opena" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;

		}
		else
		{
			str1 << "subtraction of two matrix is" << endl;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					str1 << matrix3[i][j] << " ";

				}
				str1 << endl;
			}

		}

	}


}
void row_sorting(int **matrix, int n, int m, int z)
{
	float temp = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int p = 0; p < m - 1; p++)
			{
				if (matrix[i][p]>matrix[i][p + 1])
				{
					temp = matrix[i][p];
					matrix[i][p] = matrix[i][p + 1];
					matrix[i][p + 1] = temp;

				}

			}

		}
	}
	if (z == 1)
	{
		cout << "your row wise sorting is" << endl;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
	if (z == 2)
	{
		ofstream str1;
		string filename;
		cout << "enter file name u want o opena" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;

		}
		else
		{
			str1 << "your row wise sorting is" << endl;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					str1 << matrix[i][j] << " ";
				}
				str1 << endl;
			}

		}

	}
}
void column_sorting(int **matrix, int n, int m, int z)
{
	float temp = 0;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int p = 0; p < n - 1; p++)
			{
				if (matrix[p][i]>matrix[p + 1][i])
				{
					temp = matrix[p][i];
					matrix[p][i] = matrix[p + 1][i];
					matrix[p + 1][i] = temp;

				}

			}

		}
	}
	if (z == 1)
	{

		cout << "your column wise sorting is" << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
	if (z == 2)
	{
		ofstream str1;
		string filename;
		cout << "enter file name u want o opena" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;

		}
		else
		{
			str1 << "your column wise sorting is" << endl;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					str1 << matrix[i][j] << " ";
				}
				str1 << endl;
			}

		}
	}
}
void transpose(int **matrix, int n, int m, int z)
{
	int **copy = NULL;
	if (z == 1)
	{
		cout << "transpose of a matrix is" << endl;

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << matrix[j][i] << " ";
			}
			cout << endl;
		}
	}
	if (z == 2)
	{
		ofstream str1;
		string filename;
		cout << "enter file name u want o opena" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;

		}
		else
		{
			str1 << "transpose of a matrix is" << endl;

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					str1 << matrix[j][i] << " ";
				}
				str1 << endl;
			}
		}

	}
}
void row_average(int **matrix, int n, int m, int z)
{
	//int **copy = NULL;
	int sum = 0;
	int average[100];
	//int sum2 = NULL;
	//int *matrix3=NULL;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < m; j++)
		{
			//matrix[i][j] = NULL;
			sum = sum + matrix[i][j];


		}


		average[i] = sum / m;

	}
	if (z == 1)
	{
		cout << "your row wise average is" << endl;
		for (int i = 0; i < n; i++)
		{
			//int sum = 0;
			cout << average[i] << " ";
		}
	}
	if (z == 2)
	{
		ofstream str1;
		string filename;
		cout << "enter file name u want o opena" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;

		}
		else
		{
			str1 << "your row wise average is" << endl;
			for (int i = 0; i < n; i++)
			{
				//int sum = 0;
				str1 << average[i] << " ";
			}
		}
	}
	cout << endl;

}
void column_average(int **matrix, int n, int m, int z)
{
	//int **copy = NULL;
	int sum = 0;
	int average[100];
	//int sum2 = NULL;
	//int *matrix3=NULL;
	for (int i = 0; i < m; i++)
	{
		sum = 0;
		for (int j = 0; j < n; j++)
		{
			//matrix[i][j] = NULL;
			sum = sum + matrix[j][i];


		}


		average[i] = sum / n;

	}
	if (z == 1)
	{
		cout << "your column wise average is" << endl;
		for (int i = 0; i < m; i++)
		{
			//int sum = 0;
			cout << average[i] << " ";
		}
		cout << endl;
	}
	if (z == 2)
	{
		ofstream str1;
		string filename;
		cout << "enter file name u want o opena" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;

		}
		else
		{
			str1 << "your column wise average is" << endl;
			for (int i = 0; i < m; i++)
			{
				//int sum = 0;
				str1 << average[i] << " ";
			}
			str1 << endl;


		}
	}

}
void whole_average(int **matrix, int n, int m, int z)
{
	//int **copy = NULL;
	int sum = 0;
	int average;
	//int sum2 = NULL;
	//int *matrix3=NULL;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//matrix[i][j] = NULL;
			sum = sum + matrix[j][i];


		}

	}
	average = sum / (n*m);

	//int sum = 0;
	if (z == 1)
	{
		cout << "your average of whole matrix is" << endl;

		cout << average << " ";
	}

	cout << endl;
	if (z == 2)
	{
		ofstream str1;
		string filename;
		cout << "enter file name u want o opena" << endl;
		cin >> filename;
		str1.open(filename);

		if (!str1.is_open())
		{
			cout << "file is not open" << endl;

		}
		else
		{
			str1 << "your average of whole matrix is" << endl;

			str1 << average << " ";
		}

		str1 << endl;

	}
}


int main()
{

	int n = 0, i, j, a, K = 0, m, k, nbr, sum = 0, z = 0;
	int *matrix3 = NULL, count = 0;
	//int count=0, num=0;
	char s;
	int **matrix1 = NULL;
	int **matrix2;

	//system("clr");
start:

	cout << "Welcome to Matrix Manipulator :\n";
	cout << endl;


	cout << "enter 0 anywhere in program to exit" << endl;
	cout << endl;
	cout << "Enter the row  size greater than 1\n" << endl;      //taking row size from user for how many rows in your file
	cin >> n;
	cout << "enter the column size greater than 1" << endl;       //taking column size from user for how many column in your file
	cin >> m;


	if (n == 0)
	{
		return 0; //if we put o then exit from the program

	}
	else if (n < 1) //if n less than 1 then show a masg plz enter right input
	{
		cout << "plzz enter right input" << endl;

		goto start;
	}
	else
	{

		cout << "enter 1 taking input from file" << endl;
		cout << "enter 2 for taking input from user" << endl;
		cin >> nbr;



		while (nbr != 1 && nbr != 2)  //if n is not equal to 1 or 2 then show a error masg
		{
			if (nbr == 0)              //if we put o then exit from the program
			{
				return 0;
			}




			else
			{
				cout << "plz enter right input" << endl;
				cin >> nbr;
			}
		}



		if (nbr == 1)             //if user enter 1 then taking input from file
		{
			string filename;

			while (true)
			{

				matrix1 = new int *[n];       //create new memory
				for (int i = 0; i < n; i++)
				{
					matrix1[i] = new int[m];
				}

				ifstream str;
				int **copy;

				cout << "enter file name du u want to open" << endl;
				cin >> filename;                              // enter file name if exist then open otherwise show a error masg
				str.open(filename);
				int num2 = 0, flag = 0;
				while (!str.is_open())           //file is not open
				{
					cout << "plz enter correct file name " << endl;
					cin >> filename;          //enter again file name
					str.open(filename);
					//goto start;
				}
				while (str >> nbr)
				{
					count++;
				}


				if (count >= n*m)
				{
					str.close();
					flag = 1;
					break;


				}
				else
				{
					cout << "your enter file data is enough" << endl;
					cout << "enter again row" << endl;
					cin >> n;
					cout << "enter again column" << endl;
					cin >> m;
				}
			}
			ifstream str;
			//string filename;
			str.open(filename);


			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					str >> matrix1[i][j];            //taking input from file
					count++;
				}
			}


			cout << "your matrix is" << endl;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					//matrix1[i][j] = copy;
					cout << matrix1[i][j] << " ";   //show a matrix in console
				}
				cout << endl;
			}
			str.close();

		}
		else if (nbr == 2)        //if user enter 2 then taking output from user in console
		{
			matrix1 = new int *[n];       //create new memory
			for (int i = 0; i < n; i++)
			{
				matrix1[i] = new int[m];
			}

			cout << "Enter the elements of the matrix:\n";
			for (i = 0; i < n; i++)
			{

				for (j = 0; j < m; j++)
				{
					cin >> matrix1[i][j];      //taking a input from user
				}
			}
			cout << "The entered matrix is" << endl;
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < m; j++)
				{

					cout << matrix1[i][j] << " "; //show a enter matrix in console

				}
				cout << endl;
			}
		}




		cout << "enter 1 for taking output from console" << endl;
		cout << "enter 2 for taking output from file" << endl;
		cin >> z;
		while (z != 1 && z != 2)
		{
			if (z == 0)
			{
				return 0;
			}
			else
			{
				cout << "plz enter right output" << endl;
				cin >> z;
			}
		}
		cout << "Enter the Following to keys to perform following Functions :\n";    //menu box 
		cout << "Press 1 for Determinent of the Matrix :" << endl;
		cout << "Press 2 for Scalar Matrix Addition  " << endl;
		cout << "Press 3 for scalar Matrices subtraction" << endl;
		cout << "press 4 for sum of the all values" << endl;
		cout << "press 5 for product of all valuues" << endl;
		cout << "press 6 for muliply of two matrix" << endl;
		cout << "enter 7 for addition of two matrix" << endl;
		cout << "press 8 for subtraction of two matrix" << endl;
		cout << "press 9 for scaler matrix multiply" << endl;
		cout << "press 10 for scaler matrix division" << endl;
		cout << "press 11 for row wise sorting" << endl;
		cout << "press 12 for column wise sorting" << endl;
		cout << "press 13 for transpose of a matrix" << endl;
		cout << "press 14 for row wise average of a matrix" << endl;
		cout << "press 15 for column wise average of a matrix" << endl;
		cout << "press 16 for whole average of matrix" << endl;
		cout << "emter 17 for inverse of a matrix" << endl;
		cout << endl;
		cout << "which operation u want to perform " << endl;

		cin >> a;

		while (a != 1 && a != 2 && a != 3 && a != 4 && a != 5 && a != 6 && a != 7 && a != 8 && a != 9 && a != 10 && a != 11 && a != 12 && a != 13 && a != 14 && a != 15 && a != 16 && a != 17)
		{

			if (a == 0)               //if we put o then exit from the program
			{
				return 0;
			}
			else
			{
				cout << "plz enter right input" << endl;
				cin >> a;

			}
		}
	}
	if (a == 1)
	{
		int *arr1;
		arr1 = new int[n];
		cout << "Determinant of the matrix is " << determinant(matrix1, n, z);// calling a function ofdeterminat
		cout << "Press any integer to Return to main menu" << endl; //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start; //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[]arr1;
	}
	else if (a == 2)
	{
		int *arr2;
		arr2 = new int[n];

		scalerAdd(matrix1, n, m, z);                     // calling a function of scaler matrix addition
		cout << "Press any integer to Return to main menu" << endl; //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;
		delete[]arr2;

		goto start;      //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program


	}
	else if (a == 3)
	{
		int *arr3;
		arr3 = new int[n];
		scalersub(matrix1, n, m, z);                  // calling a function of scaler matrix subtraction
		cout << "Press any integer to Return to main menu" << endl; //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;     //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program

		delete[]arr3;
	}
	else if (a == 4)
	{
		int *arr4;
		arr4 = new int[n];
		sum1(matrix1, n, m, z);                 //  // calling a function of sum of all values in a matrix
		cout << endl;
		cout << "Press any integer to Return to main menu" << endl;   //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;          //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[] arr4;


	}
	else if (a == 5)
	{
		int *arr5;
		arr5 = new int[n];
		product1(matrix1, n, m, z);              // // calling a function of product
		cout << endl;
		cout << "Press any integer to Return to main menu" << endl; //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;       //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[] arr5;

	}
	else if (a == 6)
	{
		int *arr6;
		arr6 = new int[n];
		multiply(matrix1, n, m, z);   //caling a function of multiply a two matrix
		cout << endl;
		cout << "Press any integer to Return to main menu" << endl;  //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;      //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[]arr6;

	}
	else if (a == 7)
	{
		int *arr7;
		arr7 = new int[n];
		add(matrix1, n, m, z);     //caling a function of addition a two matrix
		cout << endl;
		cout << "Press any key to integer to main menu" << endl; //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;           //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[]arr7;

	}
	else if (a == 8)
	{
		int *arr8;
		arr8 = new int[n];
		sub(matrix1, n, m, z);        //caling a function of subtraction a two matrix
		cout << endl;
		cout << "Press any integer to Return to main menu" << endl; //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;       //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[]arr8;

	}
	else if (a == 9)
	{
		int *arr9;
		arr9 = new int[n];

		scalermul(matrix1, n, m, z);    // calling a function of scaler matrix multipication
		cout << "Press any integer to Return to main menu" << endl; //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;        //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[]arr9;


	}
	else if (a == 10)
	{
		int *arr10;
		arr10 = new int[n];

		scalerdiv(matrix1, n, m, z);           // calling a function of scaler matrix divison
		cout << "Press any integer to Return to main menu" << endl; //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start; //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[]arr10;

	}
	else if (a == 11)
	{
		int *arr11;
		arr11 = new int[n];
		row_sorting(matrix1, n, m, z);      //calling a funcion of row wise sorting
		cout << "Press any integer to Return to main menu" << endl;  //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;    //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[]arr11;

	}
	else if (a == 12)
	{
		int *arr12;
		arr12 = new int[n];
		column_sorting(matrix1, n, m, z);        //calling a funcion of column wise sorting
		cout << "Press any integer to Return to main menu" << endl;     //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;   //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[]arr12;

	}
	else if (a == 13)
	{
		int *arr13;
		arr13 = new int[n];
		transpose(matrix1, n, m, z);       //caling a function of transpose of a matrix row into column and column into row
		cout << "Press any integer to Return to main menu" << endl;     //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;    //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[]arr13;

	}
	else if (a == 14)
	{
		int *arr14;
		arr14 = new int[n];
		row_average(matrix1, n, m, z);      //taking a average of row wise matrix
		cout << "Press any integer to Return to main menu" << endl;     //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;         //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[]arr14;

	}
	else if (a == 15)
	{
		int *arr15;
		arr15 = new int[n];
		column_average(matrix1, n, m, z);         //taking a average of column wise matrix
		cout << "Press any integer to Return to main menu" << endl;        //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;            //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[]arr15;

	}
	else if (a == 16)
	{
		int *arr16;
		arr16 = new int[n];
		whole_average(matrix1, n, m, z);  //taking a average of  whole matrix
		cout << "Press any integer to Return to main menu" << endl;     //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;  //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[]arr16;
	}
	else if (a == 17)
	{
		int *arr17;
		arr17 = new int[n];
		inverse(matrix1, n, m, z);  //taking a average of  whole matrix
		cout << "Press any integer to Return to main menu" << endl;     //if user enter any integer or alphabet then go again to matrix manipulator
		cin >> s;

		goto start;  //goto  is used to unconditonal transfer of control and go start means he will again gone to starting of the program
		delete[]arr17;

	}
	delete[]matrix1;

	system("pause");
	return 0;
}