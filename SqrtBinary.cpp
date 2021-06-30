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

//*? This give us the closest answer

void runcases(int T)
{

    // int n;
    // cin>> n;
    //vi v(n);
    // for(int i=0;i<n;i++){
    //   cin>>v[i];
    // }
    // m=x*x+sqrt(x);

    double n;
    cin >> n;
    double l = 0, r = n;
    double ans = 0;
    for (int i = 0; i < 60; i++)
    {
        double mid = (l + r) / 2;
        if (mid * mid <= n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    // cout<<ans<<endl;

    cout << setprecision(10) << ans << endl;

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
