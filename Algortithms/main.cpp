#include <iostream>
#include <vector>
#include <array>
#include <time.h>
using namespace std;
void createArray(array<int, 10> &arr);
void sortArray(array<int, 10> &arr);

int main()
{
    srand(time(0));
    array<int, 10> arr;
    createArray(arr);
    cout << "Old Array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    sortArray(arr);
    cout << "\nNew Array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void createArray(array<int, 10> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = rand() % 100;
    }
}

void sortArray(array<int, 10> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
