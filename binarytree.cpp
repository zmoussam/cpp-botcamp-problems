#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string cmd;
    int x;
    set<int> s;

    while (cin >> cmd)
    {
        cin >> x;
        if (cmd == "insert")
            s.insert(x);
        else if (cmd == "delete")
            s.erase(x);
        else
        {
            if (s.find(x) != s.end())
                cout << "true" << "\n";
            else 
                cout << "false" << "\n";
        }
    }
}
