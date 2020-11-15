#include<bits/stdc++.h>
using namespace std;
int add(int a , int b )
{
   return (a % 1000000007 + b % 1000000007 )%1000000007;
}
int sub(int a , int b )
{
return (a%1000000007 - b%1000000007 + 1000000007 )%1000000007;
}
int mul(int a , int  b)
{
return ((a%1000000007) * (b %1000000007))%1000000007;
}
int takeeven(int n)
{
    if (n & 1 != 0)
        return n - 1;
    return n;
}
int takeodd(int n)
{
    if (n & 1 != 0)
        return n;
    return n - 1;
}
int32_t main()
{
   int test ;
   cin >> test ;
   while(test--)
   {
      int n ; 
      cin >> n ; 
      int arr[n] ; 
      for(int i= 0 ; i < n ; i++ )
        cin >> arr[i] ; 
       
        
      if(arr[0] == 1 )
      {
        int q ; 
        cin >> q ;
        while(q--)
        {
          int r ; 
          cin >> r ;  
          if (r == 1)
            cout << 1 << endl;
          else
          {
            int div = r / n;
            if (add(mul(div , n ), 1) == r)
            {
                r--;
            }
            div = r / n;
            if (r % n == 0)
                cout << div << endl;
            else
                cout << add(div ,1) << endl;
           }
        }
         
      }
      else 
      { 
          int pre[n] , temp[n];
         for(int i = 0 ; i <n -1   ;i++)
         {
           if(arr[i+1] == 1 )
             pre[i] =takeodd(arr[i]); 
           else
             pre[i] = takeeven(arr[i]) ; 
           temp[i] = pre[i];
         }
         if(n != 1)
           {pre[n-2] = takeeven(arr[n-2]) ;
             temp[n-2] = pre[n-2];}
           pre[n-1] = takeodd(arr[n-1]);
           temp[n-1] = pre[n-1] ; 
        for(int i = 1  ; i < n ;i++  )
         { pre[i] = add(pre[i],pre[i-1]) ;  }
         int q ; 
         cin >>q ; 
         while(q--)
         {
           int r ; 
           cin >>r ;  
            int div = r  / n ; 
            int rem = r  % n ;
            int ans = mul(div , pre[n-1]) ;  
            if(rem == 0 )
            { ans = add(ans , abs(sub(arr[n-1],temp[n-1])));}
            else 
            {
              ans =add(ans ,pre[rem-1])  ; 
              if(arr[rem-1] == 1 )
              {
                if(arr[rem-2] % 2 == 0 )
                  {
                    ans = add(ans ,  2) ; 
                  }
              }
              else 
              {
                ans = add(ans , abs(sub(arr[rem-1] ,temp[rem-1]))) ; 
              }
            }
            cout << ans << endl ; 
        }
      }
   }
  return 0;
}