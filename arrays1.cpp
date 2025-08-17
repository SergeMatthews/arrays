#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int arr[] {12, 32, 36, 21, 75, 45, 1, 0, 25, 31};
    for (int i = 0; i < sizeof(arr)/sizeof(*arr); ++i)
    {
        cout << arr[i];
        if (i == (sizeof(arr) / sizeof(*arr) - 1))
            cout << endl;
        else
            cout << ", ";
    }

    return 0;
}


