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
int count(int arr[], int n, int x)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            cnt++;
    }
    return cnt;
}
int index(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    w(x)
    {
        int n, x, p, k;
        cin >> n >> x >> p >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        p -= 1;
        k -= 1;
        sort(arr, arr + n);
        if (arr[p] == x)
            cout << 0 << endl;
        else if (k >= p && arr[p - 1] >= x)
        {
            int cnt = 1;
            arr[k] = x;
            sort(arr, arr + n);
            if (arr[p] == x)
                cout << cnt << endl;
            else
            {
                int cot = count(arr, n, x);
                int ind = index(arr, n, x);
                cout << min(abs(p - ind), abs(p - (ind + cot - 1))) + cnt << endl;
            }
        }
        else if (p >= k && arr[p - 1] <= x)
        {
            int cnt = 1;
            arr[k] = x;
            sort(arr, arr + n);
            if (arr[p] == x)
                cout << cnt << endl;
            else
            {
                int cot = count(arr, n, x);
                int ind = index(arr, n, x);
                cout << min(abs(p - ind), abs(p - (ind + cot))) + cnt << endl;
            }
        }
        else
            cout << -1 << endl;
    }
    return 0;
}