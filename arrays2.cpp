#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int arr[] {15, 2, 4, 75, 65, 10, 63, 45, 9, 5};
	cout << "Массив: ";
	for (auto arr_el : arr)
		cout << arr_el << ' ';

	int min_el = arr[0], max_el = arr[0];
	for (auto arr_el : arr)
	{
		if (arr_el < min_el)
			min_el = arr_el;
		if (arr_el > max_el)
			max_el = arr_el;
	}
	cout << endl << "Минимальный элемент: " << min_el;
	cout << endl << "Максимальный элемент: " << max_el << endl;
	
	return 0;
}

