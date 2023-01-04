#include <iostream> 
#include <unordered_set> 
using namespace std ;

int main(void) { 
    ios::sync_with_stdio(false); cin.tie(0);

    unordered_set<int> s ;

    s.insert(3) ; 
    s.insert(1) ;
    s.insert(6) ; 
    
    unordered_set<int>::iterator iter ; 

    for (iter = s.begin() ; iter != s.end() ; iter++) { 
        cout << *iter << ' ' ; 
    } 

    return 0 ;
}

// arr: 1 2 3 4 5 / O(N) 
// hash: O(1)