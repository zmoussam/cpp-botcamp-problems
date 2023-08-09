#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int len, tmp, n;
    stack<int> s;
    cin >> len;

    for (int i = 0; i < len; i++)
    {
        cin >> tmp;
        if (tmp == 1)
        {
            cin >> n;
            s.push(n);
        }
        if (tmp == 2 && !s.empty())
            s.pop();
        if (tmp == 3)
        {
            if (!s.empty())
                cout << s.top() << "\n";
            else 
                cout << "Empty!" << "\n";
        }
    }
}   