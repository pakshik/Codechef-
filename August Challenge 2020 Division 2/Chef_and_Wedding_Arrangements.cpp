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
#define mk(arr, n, type) type *arr = new type[`n];
 
    
int rec(int arr[], int n, int k, int i, int j, int ans)
{
    
        cout << i << " " << j << endl;
    if (i == j)
        return k;
    else
    {
        int ans1 = k, ans2 = ans;
        cout<<"f"<<endl ; 
        for (int itr = i; itr < j; itr++)
        {

            int a = rec(arr, n, k, i, itr, ans1) ; 
            int b =rec(arr, n, k, itr + 1, j, ans2)  ;
            ans = min (ans, a+b); 
        }
         cout<<"f"<<endl ;
        cout<<endl ; 
        return ans;
    }
}
int32_t main()
{ 
    int test;
    cin >>test; 
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n], ans = k;
        unordered_map<int, int> um;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (um.find(arr[i]) == um.end())
            {
                um[arr[i]]++;
            }
            else
            {
                if (um[arr[i]] == 1)
                {
                    ans += 2;
                }
                else
                    ans += 1;
                um[arr[i]]++;
            }
            // cout<<i<<" ";
        }
        // cout<<endl ;
        cout << rec(arr, n, k, 0, n - 1, ans) << endl;
    }
    return 0;
}
