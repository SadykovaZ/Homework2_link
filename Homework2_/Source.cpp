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
	double result = 0, f = 0;
	f = pow(10, rnumber);
	number *= f;
	number = round(number);
	number = number / f;
	result = number;
	return result;
}

//4
void arrSort(int a[], int size, char choice, bool choice1)
{
	if (choice = "b" && choice1 == 1)
	{
		int temp = 0;
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}

		for (int i = 0; i < size; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	else if (choice = "b" && choice1 == 0)
	{
		int temp = 0;
		for (int i = 1; i < size; i++)
		{
			for (int j = 0; j < size - i; j++)
			{
				if (a[j] < a[j + 1])
				{
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i < size; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	else if (choice = "c" && choice1 == 1)
	{

	}


}

//5
void countNum(int number, int &count, double &Eper)
{
	int countEven = 0;

	while (number > 0)
	{
		if ((number % 10) % 2 == 0)
		{
			countEven++;
		}
		number /= 10;
		count++;
	}

	cout << "Количество четных цифр: " << countEven << endl; //для удобства добавила

	Eper = (double)countEven / count;
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

	average = sum / size;

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

	average = sum / size;

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

	else if (n == 4)
	{
		cout << "4.Напишите функцию, которая принимает массив, количество элементов, тип сортировки (пузырьком, выбором и т.д. - строка) и порядок сортировки (по убыванию, по возрастанию – логическая переменная). Функция сортирует массив. Реализовать перегрузки для целых и вещественных чисел." << endl;
		int a[6] = { 1,2,6,8,4,1 };
		char c = 0;
		bool c1 = 0;
		cout << "Введите тип сортировки (b - методом пузырька): ";
		cin >> c;
		cout << "Введите 1 - по возрастанию или 0 - по убыванию: ";
		cin >> c1;

		arrSort(a, 6, c, c1);



	}

	else if (n == 5)
	{
		cout << "Напишите функцию, которая принимает целое число и возвращает количество цифр в числе и процент четных цифр." << endl;
		int n = 0, c = 0;
		double p = 0;

		cout << "Введите целое число: ";
		cin >> n;

		countNum(n, c, p);
		cout << "Количество цифр = " << c << endl;
		cout << "Процент четных цифр = " << p << "%" << endl;

	}

	else if (n == 6)
	{
		cout << "Напишите функцию, которая принимает массив и количество элементов и возвращает среднее арифметическое всех элементов массива. Реализуйте перегрузку для целых и вещественных чисел." << endl;

		int a[6] = { 5,6,8,9,10,15 };
		double b[6] = { 5.6,3.8,4.6,8.2,7.8,5.7 };

		cout << "Среднее арифметическое всех элементов массива a = " << arr_average(a, 6) << endl;
		cout << "Среднее арифметическое всех элементов массива b = " << arr_average(b, 6) << endl;
	}
	goto start;
	system("pause");
	return 0;
}