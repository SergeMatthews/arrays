#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int arr[3][6]{ {29, 22, 10, 3, 77, 5}, {8, 52, 11, 12, 70, 55}, {52, 63, 88, 41, 57, 61} };
    cout << "Массив: " << endl;
    for (auto& sub_arr : arr)
    {
        for (auto arr_el : sub_arr)
            cout << arr_el << "\t";
    cout << endl;
    }

    int min_el = arr[0][0], max_el = arr[0][0];
    int min_el_index[]{0, 0}, max_el_index[]{0, 0};
    for (int i = 0; i < sizeof(arr) / sizeof(*arr); ++i)
    {
        for (int j = 0; j < sizeof(*arr) / sizeof(**arr); ++j)
        {
            if (arr[i][j] < min_el)
            {
                min_el = arr[i][j];
                min_el_index[0] = i;
                min_el_index[1] = j;
            }
            if (arr[i][j] > max_el)
            {
                max_el = arr[i][j];
                max_el_index[0] = i;
                max_el_index[1] = j;
            }
        }
    }
    cout << "Индекс минимального значения: " << min_el_index[0] << ' ' << min_el_index[1] << endl;
    cout << "Индекс максимального значения: " << max_el_index[0] << ' ' << max_el_index[1] << endl;
    
    return 0;
}
