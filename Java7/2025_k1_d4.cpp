#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<double> st;
    int n;

    cout << "Sa numra deshironi ti futni ne stack: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int nr;

        cout << "Vendos nr: ";
        cin >> nr;

        st.push(nr);
    }

    int toBeRemoved = st.top();

    if (toBeRemoved > st.size())
    {
        toBeRemoved = st.size() / 2;
    }

    while (toBeRemoved)
    {
        st.pop();
        toBeRemoved--;
    }

    cout << "Antaret e mbetur: " << st.size() << endl;

    return 0;
}