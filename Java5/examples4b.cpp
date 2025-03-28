#include <iostream>
#include <chrono>
using namespace std;

// 2 => O(2) => O(1)
void example0(int A[])
{
    cout << A[0];
}

// rasti me i mir => 3
// rasti me i keq =>
// 1 + 1 + 1 + b + b + b + 1 = 4 + 3b => O(3b) => O(b)
int example1(int a, int b)
{
    int res = 1;

    if (b == 4)
    { // rasti me i mir anashkalohet nga Big O
        return b;
    }

    for (int i = 0; i < b; i++)
    {
        res *= a;
    }

    return res;
}

// 1 + 1 + n + n + n(1+3m) + 1 = 3 + 2n + n + 3mn = 3 + 3n + 3nm
// => O(n + nm) => O(nm) => O(n^2) || O(m^2)
int example3(int n, int m)
{
    int x = 0;

    for (int i = 0; i < n; i++)
    {

        // 1 + 3m
        for (int j = 0; j < m; j++)
        {
            x += 1;
        }
    }

    return x;
}

int *sort(int A[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }

    return A;
}

bool contains(string text, char c)
{
    for (int j = 0; j < text.length(); j++)
    {
        if (text[j] == c)
        {
            return true;
        }
    }

    return false;
}

void sayHello(int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << "Hello";
    }
}

string *getHellos(int n)
{
    string *arr = new string[n];

    for (int j = 0; j < n; j++)
    {
        arr[j] = "hello";
    }

    return arr;
}

int main()
{
    system("pause");
    return 0;
}