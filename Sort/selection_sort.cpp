#include <iostream>
using namespace std;

int selection(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int MinIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[MinIndex])
                MinIndex = j;
        }
        swap(arr[MinIndex], arr[i]);
    }
}

void printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[8] = {1, 4, 6, 3, 9, 2, 5, 6};

     selection(arr, 8);
    printarray(arr,8);

    return 0;
}