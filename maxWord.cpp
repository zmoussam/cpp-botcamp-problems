#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
    int len;
    string str;
    string w;
    map<string , int> m;
    cin >> len;

    for (int i = 0; i < len; i++)
    {
        cin >> str;
        if (m.find(str) == m.end())
            m[str] = 1;
        else
            m[str]++;
    }
    int max = 0;
    for (auto& p : m) {
        max = std::max(max, p.second);
    }
    for (auto& p : m) {
        if (p.second >= max)
            w = p.first;
    }
    cout << w << " " << max << endl;
}