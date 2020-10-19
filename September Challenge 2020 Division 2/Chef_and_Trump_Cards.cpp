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
#define mode 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x) \
   int x;    \
   cin >> x; \
   while (x--)
unsigned long long  mod(unsigned long long  a )
{
    return    a%mode ;   
}
unsigned long long  add(unsigned long long  a , unsigned long long  b )
{
   return  mod(mod(a) + mod(b));  
}
unsigned long long  sub(unsigned long long  a , unsigned long long  b )
{
  return  mod(mod(a) - mod(b) + 1000000007 );  
}
unsigned long long  mul(unsigned long long  a, unsigned long long  b )
{
   return  mod(mod(a) * mod(b)); 
}   

unsigned long long power(unsigned long long x, 
						unsigned long long   y) 
{ 
	unsigned long long res = 1;
	x = mod(x);  
	while (y > 0) { 
		if (y & 1) 
		  res = mul(res , x) ; 
		y = y >> 1; 
		x = mul(x , x) ; 
	} 
	return res; 
} 
 
unsigned long long modInverse(unsigned long long n) 
{ 
	return power(n, mode - 2); 
}  
unsigned long long nCrModPFermat(unsigned long long n, 
								unsigned long long   r) 
{ 
	if (r == 0) 
		return 1; 
	unsigned long long fac[n + 1]; 
	fac[0] = 1; 
	for (unsigned long long   i = 1; i <= n; i++) 
		fac[i] = mul(fac[i - 1] , i) ; 

	return mul(mul(fac[n] , modInverse(fac[r])), modInverse(fac[n - r])) ; 
} 
long long anscal(unsigned long long  n  , unsigned long long  x  )
{
    if(x% 2 != 0 )
        return power(2 , n) ; 
    else 
    {
        unsigned long long  ans = sub(power(2 , n) , mul(power(2,n-x) , nCrModPFermat(x,x/2))); 
        return ans ; 
    }
}
int main()
{
   w(x)
   {
       unsigned long long  n ; 
       cin >> n ; 
       ll   arr[n] ;
       ll   max = INT_MIN ; 
       ll   count = 0 ;  
       for(unsigned long long  i = 0 ; i < n ; i++)
          { 
              cin >> arr[i] ;
              if( max == arr[i])
                 count++; 
              if(max < arr[i])
              {
                  max = arr[i] ; 
                  count = 1 ; 
              } 
          }
        unsigned long long  ans = anscal(n , count) ;  
        cout << ans << endl ; 
   }
   return 0;
}