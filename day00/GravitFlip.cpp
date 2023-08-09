#include <iostream>
#include <set>

using namespace std;
int main()
{
    int len, tmp;
    cin >> len;

    multiset<int> v;
    for (int i = 0; i < len; i++)
    {
        cin >> tmp;
        v.insert(tmp);
    }
    for (multiset<int>::iterator i = v.begin(); i != v.end(); i++)
        cout << *i << ' ';
    cout << endl;
}
