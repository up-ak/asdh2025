#include <iostream>
using namespace std;

int *replaceMinWithMax(int *arr, int n)
{
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }

        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    return arr;
}

int *replaceMinWithMax1(int *arr, int n)
{
    int min = 0;
    int max = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == min)
        {
            arr[i] = max;
        }
        else if (arr[i] == max)
        {
            arr[i] = min;
        }
    }

    return arr;
}

int main()
{
    int vargu[5] = {1, -10, 3, -10, 5};

    replaceMinWithMax(&vargu[0], 5);

    for (int i = 0; i < 5; i++)
    {
        cout << vargu[i] << " ";
    }

    return 0;
}