#include <iostream> 
#include <map> 
#include <string> 
using namespace std ;

int main(void) { 
    ios::sync_with_stdio(false); cin.tie(0);

    // map<int, int> m ; // Red-black Tree

    // // Key - Value 
    // m.insert(make_pair(2, 3)) ; 
    // m.insert(make_pair(1, 5)) ; 
    // m.insert(make_pair(8, 1)) ; // m.insert({8, 1}); 

    // m[3] = 5 ; 

    map<string, int> m ; 
    
    m["TEST"] = 5 ; 
    m["TEST2"] = 3 ; 

    for ( auto iter = m.begin() ; iter != m.end() ; iter++) { 
        cout << iter->first << ' ' << iter->second << '\n'; // first : key, second : value
    }
    
    return 0 ;
}