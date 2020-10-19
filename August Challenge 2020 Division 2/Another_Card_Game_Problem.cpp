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
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
int countBits(int n)
{
    int count = 0;
    int num = 9;

    if (n <= 9)
    {
        return 1;
    }
    else
    {
        int sum = n / num;
        n -= sum*num;
        num--;
        count += sum;
        if (n <= 9 && n> 0 )
        {
            return count+1;
        }
    }


    return count;
}
int32_t main()
{
    //  c_p_c();
    w(x)
    {
        int  player1, player2;
        cin >> player1>> player2;
        int bits1 = countBits(player1);
        int bits2 = countBits(player2);
        if (bits1 == bits2)
        {
            cout<< 1 << " "<<bits1 <<endl;
        }
        else
        {
            if (bits1 > bits2)
                cout<< 1 << " " <<bits2<<endl;
            else
                cout<<0 <<" " << bits1<<endl;
        }
    }
    return 0;
}
