// CTRL+ALT+M

// *! Binary Search With dp
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define int long long int
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vpi vector<pair<int, int>>
#define pii pair<int, int>
#define pb push_back
#define inf 1e18
#define ff first
#define ss second
#define deb(x) cout << #x << " " << x << endl;
#define all(x) x.begin(), x.end()
#define endl "\n"
const int maxn = 4e5;
//*! look for binary search see if dp can fit or dp with bs
//*? Set or Priority_queue
//*! Number is upto 10^5 check if a[maxn] gives something
//*? Graph Question depedencies Topo sort
//todo For a Tree its shortest Path in  dfs is same as in bfs if it is acyclic
vi v;
int n, k;
bool good(int diff)
{
    //  *! here dp[i] stores that ending index of its group and after adding one to its ending index we will have the start of next group
    int dp[n + 3];
    memset(dp, 0, sizeof(dp));

    for (int i = k; i <= n; i++)
    {
        // ? Getting the last index of the previou group and adding one to it
        int prev = (dp[i - k] + 1);
        if ((v[i] - v[prev]) <= diff)
        {
            dp[i] = i;
        }
        else
            dp[i] = dp[i - 1];
    }

    return (dp[n] == n);
}
void runcases(int T)
{

    cin >> n >> k;
    v.assign(n + 1, -1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    int l = 0, r = 1e10;
    int ans = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (good(m))
        {
            ans = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    cout << ans << endl;

    //cout<<"Case #"<<T<<": ";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    //cin >> T;
    for (int t = 1; t <= T; t++)
    {
        runcases(t);
    }

    return 0;
}
