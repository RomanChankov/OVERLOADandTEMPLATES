#include<iostream>
//#include<ctime>
using namespace std;
void Fillrand(int arr[], const int n);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int MinValue(int arr[], const int n);
int MaxValue(int arr[], const int n);
void ShiftLeft(int arr[], const int n, int number_of_shifts);
void ShiftRight(int arr[], const int n, int number_of_shifts);
void Sort(int arr[], const int n);

void main()
{
	setlocale(0, "");
	//srand(time(NULL));
	const int n = 5;
	int arr[n];
	cout << "Массив " << endl;
	cout << endl;
	Fillrand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива:   " << Sum(arr, n) << endl;
	cout << "Среднее значение элементов масива:  " << Avg(arr, n) << endl;
	cout << "Минимальное значение элементов масива:  " << MinValue(arr, n) << endl;
	cout << "Максимальное значение элементов масива:  " << MaxValue(arr, n) << endl;
	cout << "Сортировка массива по возрастанию" << endl;
	Sort(arr, n);
	Print(arr, n);
	int number_of_shifts;
	cout << "Введите кол-во сдвигов в лево: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите кол-во сдвигов вправо: "; cin >> number_of_shifts;
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);

}




void Fillrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;

	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << endl;
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int MinValue(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int MaxValue(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

void ShiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

//void ShiftRight(int arr[], const int n, int number_of_shifts)
//{
//	ShiftLeft(arr, n, n - number_of_shifts);
//}

void ShiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{

		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}