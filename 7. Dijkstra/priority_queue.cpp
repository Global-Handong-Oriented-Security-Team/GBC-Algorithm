#include <iostream> 
#include <queue> 
using namespace std ;

int main(void) { 
    ios::sync_with_stdio(false); cin.tie(0) ; 
    priority_queue<int> pq ; // Max Heap
    priority_queue<int, vector<int>, greater<int> > pq_small ; // Min Heap

    pq.push(40); 
    pq.push(20); 
    pq.push(70); 
    pq.push(60); 
    pq.push(50); 

    while ( !pq.empty() ){ 
        int k = pq.top() ; 
        cout << k << ' ' ; 
        pq.pop() ; 

        pq_small.push(k) ; 
    }

    cout << '\n'; 

    while ( !pq_small.empty() ) { 
        int k = pq_small.top() ; 
        cout << k << ' ' ; 
        pq_small.pop() ; 
    }

    cout << '\n'; 
    return 0 ;
}