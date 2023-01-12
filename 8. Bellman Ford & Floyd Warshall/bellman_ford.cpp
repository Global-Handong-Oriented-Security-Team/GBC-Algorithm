#include <iostream> 
#include <limits.h>
#include <vector> 
#define MAX 20010
#define INF INT_MAX

typedef long long ll ; 

using namespace std; 

int N, M ; 
int A, B, C; 

vector<pair<pair<int, int>, int> > graph ;
ll DIST[MAX] ; 
int start ;
// O( V * E )
void bellmanFord(int start) { 
    for (int i = 1; i <= N; i++) DIST[i] = INF ; 

    DIST[start] = 0 ; // DIST[1] = 0 ; 

    for (int i = 1 ; i <= N - 1 ; i++) { 
        for (int j = 0 ; j < graph.size(); j++) { 
            ll src = graph[j].first.first ; 
            ll dest = graph[j].first.second ;  
            ll weight = graph[j].second ;   
            if ( DIST[src] != INF && DIST[dest] > DIST[src] + weight ) { 
                DIST[dest] = DIST[src] + weight ;  
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0) ; 

    cin >> N >> M >> start ; 

    for (int i = 0 ; i < M ; i++) { 
        cin >> A >> B >> C ; 
        graph.push_back({{A, B}, C}) ; 
    }

    bellmanFord(start) ; 

    for (int i = 1; i <= N ; i++) { 
        if ( DIST[i] == INF ) { 
            cout << "INF" << '\n'; 
        } else { 
            cout << DIST[i] << '\n'; 
        } 
    }

    return 0 ;
}
