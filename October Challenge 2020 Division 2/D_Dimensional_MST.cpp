#include <bits/stdc++.h>
using namespace std ; 
int ansCal (int key[], bool ms[] , int V ) 
{ 
     int min = INT_MAX, min_index; 
    for (int v = 0; v < V; v++) 
        if (ms[v] == false && key[v] < min) 
            min = key[v], min_index = v; 
 
    return min_index; 
} 
void solve()
{
     int V , d ; 
    cin >> V >> d ; 
    int arr[V][d] , graph[V][V] ; 
    for(int i = 0 ; i < V ; i++)
        for(int j= 0 ; j < d ; j++ )
           cin >>arr[i][j] ; 
    for(int i = 0 ; i < V ; i++)
    {
        graph[i][i] = 0;
        for(int j = i+1 ; j < V ; j++)
        {
            int sum = 0 ; 
            for(int k = 0 ;  k < d ; k++ )
               sum += abs(arr[i][k] - arr[j][k]); 
           graph[i][j] = -1 * sum ; 
           graph[j][i] = -1 * sum ;  
        }
    }
    int parent[V]; 
    int key[V]; 
    bool ms[V]; 
    for (int i = 0; i < V; i++) 
        key[i] = INT_MAX, ms[i] = false; 
    key[0] = 0; 
    parent[0] = -1; // First node is always root of MST 
    for (int count = 0; count < V - 1; count++)
    { 
        int u = ansCal (key, ms ,V ); 
        ms[u] = true; 
        for (int v = 0; v < V; v++)  
            if (graph[u][v] && ms[v] == false && graph[u][v] < key[v]) 
                parent[v] = u, key[v] = graph[u][v]; 
    }
    long long  ans = 0 ; 
    for (int i = 1; i < V; i++) 
        ans += graph[i][parent[i]];     
    cout << ans * -1  << endl ;         
}
int main()
{
   solve(); 
}