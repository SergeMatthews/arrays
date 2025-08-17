#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int arr[]{ 15, 20, 8, 95, 47, 89, 55, 61, 41, 27 };
    cout << "Массив до сортировки: ";
    for (auto arr_el : arr)
        cout << arr_el << ' ';

    auto size = sizeof(arr) / sizeof(*arr);
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = size - 1; j > i; --j)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    cout << endl << "Массив после сортировки: ";
    for (auto arr_el : arr)
        cout << arr_el << ' ';
    cout << endl;

    return 0;
}
