#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int arr[] {12, 32, 36, 21, 75, 45, 1, 0, 25, 31};
    int arr_size = sizeof(arr) / sizeof(*arr);
    for (int i = 0; i < arr_size; ++i)
    {
        cout << arr[i];
        if (i == arr_size - 1)
            cout << endl;
        else
            cout << ", ";
    }

    return 0;
}
