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
vector<vector<double>> v  ;
vector<bool> visit ; 
unordered_set<int> us ; 
double Time(double  v1, double  v2, double  i1, double  i2)
{
    if( v1 == v2 ) 
       return -1 ; 
    return (i1 - i2) / (v2 - v1);
}
void Tra(int i ,int n , double time )
{
    // cout << i << " " <<endl ; 
    for(int j = 0 ; j < n ; j++ )
    {
        if(v[i][j] > time )
        {
             us.insert(j) ;
             Tra(j , n , v[i][j]) ;  
        }
    }
     return ; 
}
void reset(vector<bool> v )
{
    for(int i = 0 ; i < v.size() ; i++ )
    {
         v[i] =false ; 
    }
}

int main()
{
    w(x)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int ans[n];
        v.clear() ; 
        v.resize(n) ;  
        visit.resize(n) ; 
        for(int i  =0 ; i <n ; i++ )
           visit[i] = false ; 
        for(int i= 0 ; i< n ; i++ )
        {
           vector<double> temp(n) ; 
           v[i] = temp ; 
            for(int j = 0 ; j < v[i].size()  ; j++ )
            {
               v[i][j] = Time(arr[i] , arr[j] , i+1 , j+1 ); 
            }
        }
     
        for(int i = 0 ; i < n ; i++ )
        {
            us.clear() ; 
            // reset(visit) ; 
            us.insert(i) ; 
            // visit[i] = true ; 
            for(int j= 0 ; j < n ; j++ )
            {
                if(v[i][j] > 0  )
                {
                    us.insert(j) ;
                    // visit[j] = true ;  
                    Tra(j , n , v[i][j]) ; 
                }
            }
            ans[i] = us.size() ; 
        } 
        // for(int i= 0 ;i < n ; i++ )
        //  cout << ans[i] << " " ; 
        int max = INT_MIN, min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (ans[i] > max)
                max = ans[i];
            if (ans[i] < min)
                min = ans[i];
        }
        cout << min << " " << max << endl;
    }
    return 0;
}