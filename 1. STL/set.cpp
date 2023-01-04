#include <iostream> 
#include <set> 
using namespace std ;

// Sort + Only one
int main(void) { 
    ios::sync_with_stdio(false); cin.tie(0);

    set<int> s ;
    
    s.insert(3) ; 
    s.insert(1) ;
    s.insert(6) ; 
    
    s.insert(1) ; 

    // vector: 3 1 6 1, set: 1 3 6
    set<int>::iterator iter ; 
    for (iter = s.begin() ; iter != s.end() ; iter++) { 
        cout << *iter << ' ' ; 
    } 
    cout << '\n'; 
    return 0 ;
}