#include <iostream> 
#include <string.h> 
using namespace std ;

int N ; 
int recursion(const char *s, int l, int r, int *cnt){
    (*cnt)++; 
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else { 
        return recursion(s, l+1, r-1, cnt);
    }
}

int isPalindrome(const char *s, int *cnt){
    return recursion(s, 0, strlen(s) - 1, cnt);
}

int main(void) { 
    ios::sync_with_stdio(false); cin.tie(0) ; 

    cin >> N ; 

    for (int i = 0 ; i < N ; i++) { 
        int cnt = 0; 
        char s[1001] ; cin >> s ; 
        cout << isPalindrome(s, &cnt) << ' ' << cnt << '\n'; 
    }
    return 0; 
}