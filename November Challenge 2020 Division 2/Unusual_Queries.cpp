#include <bits/stdc++.h>
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
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)
int dp[1007][1007] = {0};
void  LIS(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int max_element = arr[i];
    int count = 1;
    dp[i][i] = count ;
    for (int j = i + 1; j < n; j++)
    {
      if (max_element <  arr[j])
      {
        max_element = arr[j];
        count = count + 1;
      }
      dp[i][j] = count;
    }
  }
}
int ansCal(int l, int r)
{
  int ans = INT_MIN;
  for (int i = l; i <= r; i++)
  {
    ans = max(dp[i][r], ans);
  }
  return ans;
}
int32_t main()
{
  int  n, q, s;
  cin >> n >> q >> s;
 int  arr[n];
  for (ll i = 0; i < n; i++)
    cin >> arr[i];
  int  prev = 0;
  LIS(arr , n );
//   for(int i= 0 ; i  < n ; i++ )
//   {
//         for(int j = 0 ;j < n ; j++ )
//          cout <<dp[i][j] << " " ; 
//          cout << endl ; 
//   }
  for (ll i = 0; i < q; i++)
  {
    int  x, y;
    cin >> x >> y;
    int  l = (x + s * prev - 1) % n + 1;
    int  r = (y + s * prev - 1) % n + 1;
    if (l > r)
      swap(l, r);
    prev = ansCal(l - 1, r - 1);
    cout << prev << "\n";
  }
  return 0;
}
