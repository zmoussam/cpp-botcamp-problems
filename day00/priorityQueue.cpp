#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, np, op, qt, value;
    cin >> n;
    cin >> np;

    vector<priority_queue<int> > v(n);

    for (int i = 0; i < np; i++)
    {
        cin >> op;
        if (op == 0)
        {
            cin >> qt;
            cin >> value;
            v[qt].push(value);
        }
        else if (op == 1)
        {
            cin >> qt;
            if (!v[qt].empty())
                cout << v[qt].top() << '\n';
        }
        else if (op == 2)
        {
            cin >> qt;
            if (!v[qt].empty())
                v[qt].pop();
        }
    }
}