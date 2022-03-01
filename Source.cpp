// Персональный шаблон проекта C++
#include <iostream>

using namespace std;

template <typename T> void mySwap(T *num1, T *num2) { // создаём адрес с таким же как у n и m. Создали шаблонную функция, которая помеяет места переменные любого типа
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
template <typename T> void sumArr(T array[], int length, T *num);

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	/*cout << "Введите два числа: ";
	cin >> n >> m;
	mySwap(&n, &m); //передаём адреса.
	cout << n << " " << m << endl;
	bool f1 = false, f2 = true;
	bool* pf1 = &f1; // создаём указатель на f1
	bool* pf2 = &f2; // создаём указатель на f2
	mySwap(pf1, pf2);
	cout << f1 << " " << f2 << endl;

	swap(n, m); */

	// Задача 1
	cout << "Задача 1.\nИзначальный массив:\n[";
	int z1[5] = { 3, 5, 2, 10, 0 };
	for (int i = 0; i < 5; i++)
		cout << *(z1 + i) << ", ";
	cout << "\b\b]\n";
	n = 0;
	sumArr(z1, 5, &n);
	cout << "Сумма всех элементов массива = " << n << "\n\n";

	return 0;
}

// Задача 1

template <typename T> void sumArr(T array[], int length, T* num) {
	for (int i = 0; i < length; i++)
		*num += *(array + i); // array[i] = *(array + i) - преобразование происходит автоматически, когда к массиву обращаемся.
}
// *num = n; потому-что на 1 место в оперативной памяти всё это ссылается.