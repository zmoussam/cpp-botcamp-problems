#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int solve(vector<int> v, int x, int n, vector<int> dp) 
{
    for (int j = 1; j <= x; j++)
    {
        int ans = INT_MAX;
        for (int i = 0; i < n ; i++)
        {
            if (j - v[i] < 0)
                continue;
            int val = dp[j - v[i]];
            if (val != -1) ans = min(ans , val + 1);
        }
        if (ans == INT_MAX) dp[j] = -1;
        else dp[j] = ans;
    }
    return dp[x];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    vector<int> dp(x + 1, -2);
    dp[0] = 0;
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    cout << solve(v, x, n, dp) << '\n';
}