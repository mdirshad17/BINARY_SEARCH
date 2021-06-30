// CTRL+ALT+M
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
const int maxn = 1e5;
//*! look for binary search see if dp can fit or dp with bs
//*? Set or Priority_queue
//*! Number is upto 10^5 check if a[maxn] gives something
//*? Graph Question depedencies Topo sort
//todo For a Tree its shortest Path in  dfs is same as in bfs if it is acyclic

// ** UB gives closest integer From the right that is farthest
int UpperBound(int val, vi &v)
{
    int l = 0, r = v.size() - 1;
    int ans = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (v[m] >= val)
        {
            ans = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return ans;
}
// ** LB gives closest integer From the left that is farthest
int LowerBound(int val, vi &v)
{
    int l = 0, r = v.size() - 1;
    int ans = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (v[m] <= val)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return ans;
}
void runcases(int T)
{

    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int idx1 = UpperBound(2, v);
    int idx2 = LowerBound(2, v);
    cout << idx1 << " " << idx2 << endl;

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
