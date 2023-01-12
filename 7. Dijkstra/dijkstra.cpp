#include <iostream> 
#include <vector>
#include <queue> 
#include <climits> 
#define INF INT_MAX
/*
5 6
1
start end weight
5     1   1
1     2   2
1     3   3
2     3   4
2     4   5
3     4   6
*/
using namespace std ;

int V, E, start ; 
int DIST[20010] ; 
vector<pair<int, int> > graph[20010] ; 

// O((V+E)LogV) 
// Dijkstra: O( V * ( (V +  E) log V ) ) = O ( V * ( 2V + E) ) 
// Floyd : O (V^3)
void dijkstra() {
    // Distance 무한대 값
    for (int i = 1 ; i <= V; i++) {
        DIST[i] = INF ; // 다 못가는 상태로 초기화
    }
    priority_queue<pair<int, int> > pq; 
    
    pq.push({0, start}) ; // weight, curr node
    DIST[start] =  0 ;

    // pq: <0, start> 
    while (!pq.empty() ) {
        int curr_weight = -pq.top().first ; 
        int curr_node = pq.top().second ; 
        
        pq.pop() ; 
        // pq: empty

        for (int i = 0 ; i < graph[curr_node].size(); i++) { 
            int next_node = graph[curr_node][i].first ;    // 2, 3
            int next_weight = graph[curr_node][i].second ; // 2, 3

            if ( DIST[next_node] > curr_weight + next_weight) { 
                DIST[next_node] = curr_weight + next_weight ;
                pq.push({-DIST[next_node], next_node}) ; 
                // pq: {-2, 2} 
                // pq: {-2, 2}, {-3, 3} 
            }   
        }
    }

    for (int i = 1 ; i <= V; i++) { 
        if ( DIST[i] == INF ) cout << "INF" << '\n'; 
        else cout << DIST[i] << '\n' ; 
    }
}

int main(void) { 
    ios::sync_with_stdio(false); cin.tie(0) ; 
    cin >> V >> E ; 
    cin >> start ; 
    for (int i = 0, a,b,c; i < E ; i++) {
        cin >> a >> b >> c ; 
        // start, end, weight
        graph[a].push_back({b, c}) ; 
    }
    // graph
    /*
        1 -> {2, 2}(graph[1][0]) -> {3, 3}(graph[1][1])
        2 -> {3, 4} -> {4, 5}
        3 -> {4, 6}
        4
        5 -> {5, 1}
    */

    dijkstra() ; 
    return 0; 
}