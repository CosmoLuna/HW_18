#include <iostream>
using namespace std;

// Задача 1
inline int func1(int num1, int num2) {
	return (num1 + num2) / 2;
}

// Задача 2
int func2(int num1, int num2, int num3) {
	int max;
	if (num1 > num2)
		max = num1;
	else
		max = num2;
	if (max < num3)
		max = num3;
	return max;
}
float func2(float num1, float num2, float num3) {
	float max;
	if (num1 > num2)
		max = num1;
	else
		max = num2;
	if (max < num3)
		max = num3;
	return max;
}
double func2(double num1, double num2, double num3) {
	double max;
	if (num1 > num2)
		max = num1;
	else
		max = num2;
	if (max < num3)
		max = num3;
	return max;
}

// Задача 3
template <typename T> T maximum(T array[], int length) {
	T max = array[0];
	for (int i = 0; i < length; i++)
		if (array[i] > max)
			max = array[i];
	return max;
}


int main() {
	setlocale(LC_ALL, "Russian");

	// Задача 1
	cout << "Задача 1\nВведите два числа: ";
	int a, b;
	cin >> a >> b;
	cout << "Среднее арифметическое чисел " << a << " и " << b << " = " << func1(a, b) << "\n\n";

	// Задача 2
	cout << "Задача 2\n";
	cout << func2(7, 9, -2) << endl;
	cout << func2(7.2, 2.1, 7.5) << endl;
	cout << func2(6.23, 6.25, 7.04) << "\n\n";

	// Задача 3
	cout << "Задача 3\nИзначальный массив:\n[";
	int array[5] = { 3, 9, 1, -7, 4 };
	for (int i = 0; i < 5; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
	cout << "Максимальный элемент = " << maximum(array, 5) << "\n\n";

	double array1[5] = { 4.6, -2.1, 8.8, 3.4, 1.8 };
	cout << "Изначальный массив : \n[";
	for (int i = 0; i < 5; i++)
		cout << array1[i] << ", ";
	cout << "\b\b]\n";
	cout << "Максимальный элемент = " << maximum(array1, 5) << endl;

	return 0;
}