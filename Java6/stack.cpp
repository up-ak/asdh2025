#include <iostream>
#include <stack>
using namespace std;

// 4,5,7,9,1,4,5,6,5,0

stack<int> krijoStack(int a, int b, int c)
{
    stack<int> st;

    while (st.size() < a)
    {
        cout << "Vendosni nje numer ne stack: ";
        int nr;
        cin >> nr;

        if (nr >= b & nr <= c)
        {
            st.push(nr);
        }
    }

    return st;
}

int stackEdges(stack<int> st, int &first)
{
    int end = st.top();

    while (st.size() > 1)
    {
        st.pop();
    }

    first = st.top();

    return end;
}

int main()
{
    stack<int> stk = krijoStack(5, 0, 1000);

    stk.pop();
    stk.pop();
    stk.pop();

    cout << "Antari 2: " << stk.top() << endl;
    stk.pop();
    cout << "Antari 1: " << stk.top() << endl;

    stk = krijoStack(5, 0, 1000);

    int first;
    int end = stackEdges(stk, first);

    cout << "Antari 1: " << first << endl;
    cout << "Antari i fundit: " << end << endl;

    return 0;
}