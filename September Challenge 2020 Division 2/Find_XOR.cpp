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
ll digit(ll p, ll q, ll num, ll n)
{
    ll ans = (((p - q) / num) + n) / 2;
    return ans;
}
int main()
{
    w(x)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        ll arr[22];
        arr[0] = 1;
        for (int i = 1; i < 21; i++)
            arr[i] = arr[i - 1] * 2;
        cout << 2 << " " << arr[20] << endl;
        ll sum1 ; 
        cin >> sum1 ; 
        sum1 -= (arr[20] * n) ; 
        if(sum1%2 != 0 )
         ans +=1 ; 
        for(int i =1 ; i < 20 ; i++ )
        {
            ll userSum = sum1 + (arr[i]* n ); 
            cout << 1 << " "<< arr[i] << endl ; 
            ll givenSum ; 
            cin >> givenSum ; 
            if((userSum - givenSum) /( arr[i]*2 ) %2 != 0 )
             ans += arr[i] ; 
        } 
        cout << 2 << " "<< ans << endl ;   
        int crt;
        cin >> crt;
        if (crt == -1)
            break;
    }
    return 0;
}