#include<iostream>



int sum(int num1, int num2) {
	int result = num1 + num2;
	return result;
}
void hi() {
	std::cout << "Hello World\n";
}
// Функции для вывода массива в консоль
void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

void positive_elements(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] > 0)
			std::cout << i << ' ';
	std::cout << std::endl;
}

void mult_x5(int num) {
	num *= 5; // num - параметр функции.
}
void arr_x5(int arr[]) {
	arr[1] *= 5;
}

int factorial(int num) {
	int result = 1;
	for (int i = 2; i <= num; i++)
		result *= i;
	return result;
}

int main() {
	setlocale(LC_ALL, "RU");
	int n, m;
	// Сохдание и вызов ф-ции:
	hi();


	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;

	std::cout << sum(n, m) << std::endl;
	

	// Функции, работающие с массивами:
	
	const int size = 5;
	int arr111[size]{ 7, 15, 41, 105, 11 };
	print_arr(arr111, size);
	
	arr_x5(arr111);
	print_arr(arr111, size);


	n = 7;
	mult_x5(n); // n - аргумент функции.
	std::cout << "n = " << n << std::endl;
	

	// Задача 1. Индексы положительных элементов массива.
	std::cout << "Задача 1.\nМассив:\n";
	const int size1 = 5;
	int arr1[size1]{ 10, 0, 5, -7, 15 };
	print_arr(arr1, size1);
	std::cout << "Индексы положительных элементов:\n";
	positive_elements(arr1, size1);
	std::cout << '\n';
	

	// Задача 2. Факториал.
	std::cout << "Задача 2.\nВведите число -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl;


	return 0;
}