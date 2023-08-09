#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    in.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    vector<long long > pre(n+1);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<long long, long long> s;

    s[0] = 1;
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i - 1];
        ans = ans + s[pre[i] - x];
        s[pre[i]]++;
    }
    cout << ans << '\n';

}
