#include <iostream>
#include <vector>

using namespace std;
vector<int> v(44);
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    v[0] = 1;
    v[1] = 1;
    for (int i = 2; i <= 44; i++)
        v[i] = v[i -1] + v[i -2];
    int n;
    cin >> n;
    if (n >= 0 && n <= 44 )
        cout << v[n] << '\n';
}