#include <iostream> 
#include <queue> 
#include <string.h> 

using namespace std ;

typedef struct Point{ 
    int x, y; 
} POINT ; 

int main(void) { 
    ios::sync_with_stdio(false); cin.tie(0) ; 
    
    queue<int> Q ; 
    queue<POINT> QP; 

    Q.push(3) ; 
    Q.push(4) ;
    Q.push(5) ; 
     
    POINT t = { 1,2 }; 
    QP.push(t) ; 

    while (!QP.empty()) {
        POINT k = QP.front() ;
        cout << k.x << '\n' ; 
        Q.pop();  
    }

    return 0 ;
}