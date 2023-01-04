#include <iostream> 
#include <vector> 

using namespace std ; 

int main(void) { 
    ios::sync_with_stdio(false); 
    cin.tie(0) ; 

    vector<int> V ; // declare a vector

    cout << "SIZE: " <<  V.size() << '\n';  // SIZE: 0 

    V.push_back(1) ; // push
    V.push_back(2) ; 
    V.push_back(0) ; 

    // 1 2 0
    // O(n) 
    for (int i = 0 ; i < V.size(); i++) {
        cout << V[i] << ' ' ; 
    }
    cout << '\n' ;

    V.pop_back(); // remove the zero. 

    // 1 2
    // V[0] V[1]
    vector<int>::iterator iter ; 
    for (iter = V.begin() ; iter != V.end() ; iter++) {
        cout << *iter << ' ' ; 
    }
    cout << '\n' ;

    return 0 ; 
}