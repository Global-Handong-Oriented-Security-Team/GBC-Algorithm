#include <iostream> 

using namespace std ;

int N ; 
int DP[5010]; 

int main(void) { 

    ios::sync_with_stdio(false); cin.tie(0); 

    cin >> N ; 

    DP[3] = 1 ; 
    DP[5] = 1 ; 

    for (int i = 6 ; i <= N; i++) {
        if ( DP[i - 3] ) DP[i] = DP[i - 3] + 1 ; 
        if ( DP[i - 5] ) DP[i] = DP[i] ? min(DP[i], DP[i - 5] + 1) : DP[i - 5] + 1 ; 
    }
    /*
        DP[3] = DP[5] = 1 
        DP[6] = DP[3] + DP[3] 
        DP[7] = 0 
        DP[8] = DP[3] + DP[5] 
        DP[9] = DP[6] + DP[3] 
        DP[10] = DP[5] + DP[5]
        DP[11] = 0 
        DP[12] = DP[9] + DP[3]  
        ... 
        DP[15] = min(DP[10] + DP[5] vs DP[12] + DP[3]) 
        ..
        DP[18] = DP[15] + DP[3]  
    */ 
    if ( DP[N] != 0) cout << DP[N] << '\n'; 
    else cout << -1 << '\n'; 

    return 0 ; 
}