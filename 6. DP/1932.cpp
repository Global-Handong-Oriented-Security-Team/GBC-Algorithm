#include <iostream>
#include <string.h> 

using namespace std; 

int dp[501][501]; 
int n; 
int main(void) {
    ios::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0); 

    cin >> n ;

    for(int i = 0; i < n; i++) {
        for(int j = 0 ; j <= i ; j++) {
            cin >> dp[i][j]; 
        }
    }

    for (int i = 0 ; i < n ; i++) { 
        for (int j = 0 ; j <= i; j++) { 
            if ( j == 0 ) dp[i][j] += dp[i - 1][j] ; 
            else if ( j == n - 1) dp[i][j] += dp[i - 1][j - 1] ; 
            else dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]) ;
        }
    }
    int result = 0 ;
    for (int i = 0 ; i < n ; i++) { 
        result = max(result, dp[n - 1][i]) ; 
    }
    cout << result << '\n'; 
    return 0; 
}