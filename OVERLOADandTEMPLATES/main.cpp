#include"stdafx.h"
#include"Fillrand.h"
#include"Print.h"
#include"Statistics.h"
#include"Shift.h"
#include"Sort.h"



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
