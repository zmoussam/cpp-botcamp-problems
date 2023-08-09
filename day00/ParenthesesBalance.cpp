#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <fstream>
using namespace std;
int main()
{
    int len;
    string l;
    std::getline(cin, l);
    len = stoi(l);
    vector<string> v(len);
    for (int i = 0; i < len; i++)
        getline(cin, v[i]);
    for (int i = 0; i < len ; i++)
    {
        stack<char> s;
        size_t l = v[i].length();
        int j = 0;
        for (j = 0; j < l; j++)
        {
            if (v[i][j] == '[' || v[i][j] == '(')
                s.push(v[i][j]);
            else
            {
                if (s.empty())
                {
                    cout << "No" << endl;
                    break;
                }
                if ((v[i][j] == ']' && s.top() == '[') || (v[i][j] == ')' && s.top() == '('))
                    s.pop();
                else
                {
                    cout << "No" << endl;
                    break;
                }
            }
        }
        if (s.empty() && j == l)
            cout << "Yes" << endl;
        else if (!s.empty())
            cout << "No" << endl;
    }
}