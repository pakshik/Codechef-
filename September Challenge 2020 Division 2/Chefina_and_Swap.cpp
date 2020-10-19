#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define umii unordered_map<int, int>
#define umic unordered_map<int, char>
#define umci unordered_map<char, int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define mii map<int, int>
#define mic map<int, char>
#define mci map<char, int>
#define si set<int>
#define sc set<char>
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vii vector<vector<int>>
#define vi vector<int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
ll ncr(ll n, ll r)
{
    ll ans = n * (n - 1);
    ans /= 2;
    return ans;
}
int main()
{
    w(x)
    {
        ll n;
        cin >> n;
        ll sum;
        sum = (n*(n +1))/2 ; 

        if (sum %2  == 0)
        {
            ll ans = 0;
            ll count = sum;
            sum /= 2;
            ll x = (sqrt(1+ 4*count )- 1 )/2 ; 
            ll temp = (x * (x+1 ))/2  ;
                if (temp < sum)
                    ans = n - x ; 
                else if (temp== sum)
                    ans = ncr(x  , 2) + ncr(n -x , 2 ) + (n -x);
                 cout << ans << endl;
        }
        else 
          cout << 0 << endl ;  
    }
    return 0;
}