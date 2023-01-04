#include <iostream> 
#include <stack>

using namespace std ;

int main(void) { 
    ios::sync_with_stdio(false); cin.tie(0) ;

    stack<int> s ; 

    s.push(3) ;
    s.push(4) ; 
    s.push(5) ; 

    while (!s.empty()) { 
        int k = s.top() ; // 5, 4, 3
        cout << k << '\n'; 
        s.pop(); 
    }
    
    return 0 ;
}