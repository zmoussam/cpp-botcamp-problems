#include <iostream>
#include <vector>

using namespace std;

vector<int> v(100001 * 2);
vector<long long> pre(100001 * 2); 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    for (int i=1; i <=n ; i++)
    {
        cin >> v[i];
        pre[i]=v[i];
    }
    for (int i=1; i <= n; i++)
        pre[i] = pre[i] ^ pre[i - 1];
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        long long sum;
        sum = pre[r] ^ pre[l - 1];
        cout << sum << '\n';
    }
}