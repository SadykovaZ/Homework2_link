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

	cout << "���������� ������ ����: " << countEven << endl; //��� �������� ��������

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
	cout << "������� ����� �������: ";
	cin >> n;

	if (n == 1)
	{
		cout << "1.�������� �������, ������� ��������� ��� ���������: ��������� ������� � ���������� �������, � ��������� ������� ����� �� ������ ���������� ������." << endl;
		int x = 0, y = 0;
		cout << "������� ��������� �������: ";
		cin >> x;
		cout << "������� ���������� �������: ";
		cin >> y;
		cout << "���������:" << power(x, y) << endl;
	}

	else if (n == 2)
	{
		cout << "2.�������� �������, ������� �������� � �������� ���������� 2 ����� ����� � ���������� ����� ����� �� ��������� ����� ����." << endl;
		int a = 0, b = 0;
		cout << "������� ������ ���������: ";
		cin >> a;
		cout << "������� ����� ���������: ";
		cin >> b;
		cout << "��������� ����� ����� � ��������� ��������� (������� ������ � ����� ���������): " << sum(a, b) << endl;
	}

	else if (n == 3)
	{
		cout << "3.�������� ������� ��� ���������� ��������� ����� � �������� ���������." << endl;
		double x = 0;
		int y = 0;

		cout << "������� ����� ��� ����������: ";
		cin >> x;
		cout << "������� �� ������ ����� ����� ���������: ";
		cin >> y;
		cout << "��������� ����������: " << roundDigit(x, y) << endl;
	}

	else if (n == 4)
	{
		cout << "4.�������� �������, ������� ��������� ������, ���������� ���������, ��� ���������� (���������, ������� � �.�. - ������) � ������� ���������� (�� ��������, �� ����������� � ���������� ����������). ������� ��������� ������. ����������� ���������� ��� ����� � ������������ �����." << endl;
		int a[6] = { 1,2,6,8,4,1 };
		char c = 0;
		bool c1 = 0;
		cout << "������� ��� ���������� (b - ������� ��������): ";
		cin >> c;
		cout << "������� 1 - �� ����������� ��� 0 - �� ��������: ";
		cin >> c1;

		arrSort(a, 6, c, c1);



	}

	else if (n == 5)
	{
		cout << "�������� �������, ������� ��������� ����� ����� � ���������� ���������� ���� � ����� � ������� ������ ����." << endl;
		int n = 0, c = 0;
		double p = 0;

		cout << "������� ����� �����: ";
		cin >> n;

		countNum(n, c, p);
		cout << "���������� ���� = " << c << endl;
		cout << "������� ������ ���� = " << p << "%" << endl;

	}

	else if (n == 6)
	{
		cout << "�������� �������, ������� ��������� ������ � ���������� ��������� � ���������� ������� �������������� ���� ��������� �������. ���������� ���������� ��� ����� � ������������ �����." << endl;

		int a[6] = { 5,6,8,9,10,15 };
		double b[6] = { 5.6,3.8,4.6,8.2,7.8,5.7 };

		cout << "������� �������������� ���� ��������� ������� a = " << arr_average(a, 6) << endl;
		cout << "������� �������������� ���� ��������� ������� b = " << arr_average(b, 6) << endl;
	}
	goto start;
	system("pause");
	return 0;
}