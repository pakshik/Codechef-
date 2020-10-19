#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
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
	w(x)
	{
		int n , k ; 
        cin >> n >> k ; 
        int arr[n]; 
        for(int i =  0 ;i < n ; i++ )
          cin >> arr[i] ; 
         int ans  =  -1 ; 
         int moves = INT_MAX ; 
        for(int i = 0 ;i < n ; i++ )
         {
             if(arr[i] < k )
              {
                 int mul = k / arr[i] ; 
                 if(mul * arr[i] == k )
                 {
                     moves  = min (moves , mul ) ; 
                     if(moves == mul)
                        ans = arr[i] ; 
                 }                  
              }
         }   
         cout<<ans<<endl ; 
	}
	return 0;
}
