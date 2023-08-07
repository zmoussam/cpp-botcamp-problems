#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int i , t, n;
    cin >> i;
    cin >> t;
    std::vector<int> v(i);
    std::map<int, int> d;
    for (int j = 0; j < i; j++)
        cin >> v[j];
    for (int j = 0; j < i; j++)
    {
        n = t - v[j];
        if (d.find(n) != d.end())
            return (std::cout << d[n] + 1 << " " << j + 1, 0);
        else 
            d[v[j]] = j;
    }
    std::cout << "IMPOSSIBLE";
}