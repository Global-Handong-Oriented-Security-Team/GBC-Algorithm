#include <iostream> 
#include <deque> 

using namespace std ;

int main(void) { 
    ios::sync_with_stdio(false); cin.tie(0) ; 

    deque<int> D ; 

    D.push_back(2) ; 
    D.push_back(3) ; 
    D.push_back(4) ; 
    D.push_front(1) ; 

    while(!D.empty()) { 
        int k = D.front() ; 
        cout << k << ' '; 
        D.pop_front() ; 
    }

    cout << '\n' ; 

    D.push_back(2) ; 
    D.push_back(3) ; 
    D.push_back(4) ; 
    D.push_front(1) ; 

    while(!D.empty()) { 
        int k = D.back() ; 
        cout << k << ' '; 
        D.pop_back() ; 
    }
    cout << '\n' ; 

    return 0 ; 
}