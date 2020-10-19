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
#define w(x) \
   int x;    \
   cin >> x; \
   while (x--)
int main()
{
   w(x)
   {
      int n ; 
      cin >>  n ; 
      bool flag = false ; 
      unordered_set < int > us ; 
      // cout << (1 << 28 ) << endl ; 
      for(int i= 0 ; i < 28  ; i++ )
      {
         int num = pow(2,i+1) ; 
         us.insert(num) ;
          if(num  == n )
            {
                flag =true ; 
                break ; 
            }
      } 
      if(flag)
        cout << -1  << endl ; 
      else 
      {
         if( n == 1  )
           cout << 1  << endl ; 
          else 
          {
             cout << 2 << " "<< 3  <<" "<< 1  <<" "; 
             int count = 4 ; 
             for(int i= count ; i<=  n ; i++ )
             {
                if(us.find(i) != us.end())
                {
                   cout << i +1 << " " ; 
                }
                else if(us.find(i-1) != us.end())
                {
                   cout << i - 1 << " "; 
                }
                else 
                {
                   cout << i << " "; 
                }
             } 
             cout << endl ;  
          }     
          
      }   
   }
   return 0;
}