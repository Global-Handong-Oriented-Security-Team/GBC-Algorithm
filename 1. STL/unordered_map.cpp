#include <iostream> 
#include <unordered_map> 
using namespace std ;

int main(void) { 
    ios::sync_with_stdio(false); cin.tie(0);

    unordered_map<int, int> m ; 

    m.insert(make_pair(2, 3)) ; 
    m.insert(make_pair(1, 5)) ; 
    m.insert(make_pair(8, 1)) ; 

    m[3] = 5;

    for ( auto iter = m.begin() ; iter != m.end() ; iter++) { 
        cout << iter->first << ' ' << iter->second << '\n'; 
    }
    
    return 0 ;
}