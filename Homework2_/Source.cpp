#include<iostream>
#include<cmath>
#include<math.h>


using namespace std;

//#1
int power(int number, int powNum)
{
	int result = 0;
	result = pow(number, powNum);

	return result;
}

//2
int sum(int num1, int num2)
{
	int sum = 0;
	for (int i = num1; i <= num2; i++)
	{
		sum += i;
	}

	return sum;
}

//3
double roundDigit(double number, int rnumber)
{
	double result = 0, f=0;
	f = pow(10,rnumber);
	number *= f;
	number = round(number);
	number = number / f;
	result = number;
	return result;
}

//6
int arr_average(int a[], int size)
{
	int average;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += a[i];		
	}
	
	average =sum/size;

	return average;
}

double arr_average(double a[], int size)
{
	double average;
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += a[i];		
	}
	
	average =sum/size;

	return average;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	

	int n = 0;
start:
	cout << "Введите номер задания: ";
	cin >> n;

	if (n == 1)
	{
		cout << "1.Написать функцию, которая принимает два параметра: основание степени и показатель степени, и вычисляет степень числа на основе полученных данных." << endl;
		int x = 0, y = 0;
		cout << "Введите основание степени: ";
		cin >> x;
		cout << "Введите показатель степени: ";
		cin >> y;
		cout << "Результат:" << power(x, y) << endl;
	}

	else if (n == 2)
	{
		cout << "2.Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел из диапазона между ними." << endl;
		int a = 0, b = 0;
		cout << "Введите начало диапазона: ";
		cin >> a;
		cout << "Введите конец диапазона: ";
		cin >> b;
		cout << "Результат сумма чисел в введенном диапазоне (включая начало и конец диапазона): " << sum(a, b) << endl;
	}

	else if (n == 3)
	{
		cout << "3.Написать функцию для округления заданного числа с заданной точностью." << endl;
		double x = 0;
		int y = 0;

		cout << "Введите число для округления: ";
		cin >> x;
		cout << "Введите до какого знака нужно округлить: ";
		cin >> y;
		cout << "Результат округления: " << roundDigit(x, y) << endl;
	}

	else if (n==4)
	{
		cout << "Напишите функцию, которая принимает массив, количество элементов, тип сортировки (пузырьком, выбором и т.д. - строка) и порядок сортировки (по убыванию, по возрастанию – логическая переменная). Функция сортирует массив. Реализовать перегрузки для целых и вещественных чисел." << endl;



	}

	else if (n==6)
	{
		cout << "Напишите функцию, которая принимает массив и количество элементов и возвращает среднее арифметическое всех элементов массива. Реализуйте перегрузку для целых и вещественных чисел." << endl;
		
		int a[6] = {5,6,8,9,10,15};
		double b[6] = { 5.6,3.8,4.6,8.2,7.8,5.7 };

		cout << "Среднее арифметическое всех элементов массива a = " << arr_average(a, 6) << endl;
		cout << "Среднее арифметическое всех элементов массива b = " << arr_average(b, 6) << endl;
	}
	goto start;
	system("pause");
	return 0;
}