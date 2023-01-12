#include <iostream> 

using namespace std ;

typedef unsigned long long ll ; 
ll DP[91] ; 
int K ; 
ll func(int n) { 
    if ( n == 0 ) return 0 ;
    if ( n == 1 || n == 2 ) { 
        return 1 ; 
    } 

    if ( DP[n - 1] == 0 ) DP[n - 1] = func(n - 1) ; 
    if ( DP[n - 2] == 0 ) DP[n - 2] = func(n - 2) ; 

    DP[n] = DP[n - 1] + DP[n - 2] ; 
    return DP[n] ;
}
int main(void) { 
    ios::sync_with_stdio(false); cin.tie(0) ; 

    cin >> K ; 

    // DP[0] = 1 ; 
    // DP[1] = 1 ; 
    // DP[2] = 1 ; 
    // for (int i = 3 ; i <= K; i++) { 
    //     DP[i] = DP[i - 1] + DP[i - 2] ; 
    // }
    cout << func(K) << '\n'; 
    
    return 0 ; 
}