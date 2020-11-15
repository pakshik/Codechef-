#include<bits/stdc++.h>
#include <numeric>
// #include <boost/math/common_factor.hpp> 
using namespace std;
#define umii            unordered_map<int,int >
#define umic            unordered_map<int,char >
#define umci            unordered_map<char,int >
#define usi             unordered_set<int>
#define usc             unordered_set<char>
#define mii             map<int,int >
#define mic             map<int,char >
#define mci             map<char,int >
#define si              set<int>
#define sc              set<char>
#define ll              long long 
#define ff              first
#define ss              second
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vii             vector<vector<int>>
#define vi              vector<int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
  
int32_t main()
{
   int test ; 
   cin >> test; 
   while(test--)
   { 
     int n; 
     cin >> n ; 
     ll  arr[n+1] ; 
    //  cout << " saks "<< endl ; 
     for(int i= 1 ; i <=  n ; i++ )
      {  cin >> arr[i] ; }
     ll  ans[n+1] ; 
     for(int i = 1 ; i <=n  ; i++ )
       { ans[i] = n- i + 2   ;  }
     for(int i =1 ;i <= n ;i++)
     {
         if(arr[i] != i )
         {
           ans[i] =ans[arr[i]] ; 
         }
     }
      for(int i=   1 ; i <=  n ; i++ )
        cout << ans[i] <<" "  ;   
       cout << endl ;   
   }
  return 0;
}