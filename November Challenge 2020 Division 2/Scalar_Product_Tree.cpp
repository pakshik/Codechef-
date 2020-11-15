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
vector<int> w;
vector<int> s1 ; 
vector<int> s2 ; 
int add(int a , int b )
{
   return (a % 1000000007 + b % 1000000007 )%1000000007;
}
int sub(int a , int b )
{
return (a%1000000007 - b%1000000007)%1000000007;
}
// int mul(int a , int  b)
// {
// return (((a&)) * (b&((1<<32)-1)))&((1<<32)-1));
// }

int DFS(vector<int> G[], vector<int> &v, int s, int r)
{
    // cout << s  << "  "<< r << endl ; 
    if (r == s)
        return 1;
    if (G[r].size() == 0)
        return 0;
    for (auto x : G[r])
    {
        // cout << x << " " << w[x] << " "<<endl ;  
        v.push_back(w[x]);
        int n = DFS(G, v, s, x);
        if (n == 1)
            return 1;
        // cout << x << " " << w[x] << " " <<endl; 
        v.pop_back();
    }
    return 0 ; 
}
int32_t main()
{
    int n, q;
    cin >> n >> q;
    vector<int> G[n + 1];
    w.resize(n+1) ; 
    for (int i = 1; i <= n; i++)
    { 
        cin >> w[i] ; 
    }
    unsigned int temp = (pow(2,32)-1) ; 
    // for(auto x : w )
    //  cout << x << " " ; 
    //  cout << endl ; 
   
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
    }
    while (q--)
    {
        s1.clear();
        s2.clear() ;
        int s, d;
        cin >> s >> d;
        s1.push_back(w[1]);
        s2.push_back(w[1]);
        DFS(G, s1, s, 1);
        DFS(G, s2, d, 1);
        // for (auto x : s1)
        //     cout << x << " ";
        // cout << endl;
        // for (auto x : s2)
        //     cout << x << " ";
        // cout << endl;
        unsigned int  ans = 0;
        // sort(s1.begin(), s1.end());
        // sort(s2.begin(), s2.end());
        for (int i = 0; i < s1.size(); i++)
            ans = ((ans & temp) +  ((s1[i] & temp)  *( s2[i] & temp))&temp)&temp;
        cout << ans << endl;
    }
    return 0;
}