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
vector<int> I;
vector<int> M;

int calcans (int pre[]  ,int k )
{
  int count = 0 ;  
  int i = 0 ,  j = 0 ; 
  while(i != I.size() && j != M.size())
  {
    if( k + 1 > abs(I[i] - M[j]) + abs(pre[I[i]] - pre[M[j]])  )
    {
      count++ ; 
      i++ ;
      j++ ; 
    }
    else if ( I[i] + k +1  <= M[j] +abs(pre[I[i]] - pre[M[j]]))
    {
      i++ ; 
    }
    else 
    {
      j++ ; 
    }
  }
  return count ; 
}
int32_t main()
{
  int test;
  cin >> test;
  while (test--)
  {
    I.clear();
    M.clear();
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    int pre[n] = {0} ; 
    if(s[0] == ':')
       pre[0] = 1 ;  
    for(int i = 1  ; i < n ; i++ )
    {
       if(s[i] == ':')
         pre[i] += pre[i-1] + 1 ; 
       else 
          pre[i] = pre[i-1] ;  
    }
    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'X')
      {
        count += calcans(pre , k);
        I.clear();
        M.clear();
      }
      if (s[i] == 'I')
        I.push_back(i);
      if (s[i] == 'M')
        M.push_back(i);
    }
    count += calcans(pre, k ) ; 
    cout << count << endl;
  }
  return 0;
}