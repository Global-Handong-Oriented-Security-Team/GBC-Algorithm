#include <iostream> 
#include <algorithm>
using namespace std ;

int N ; 
pair<int, int> arr[100010] ; 
bool compare(pair<int, int> a, pair<int, int> b) { 
    if ( a.second == b.second ) { 
        return a.first < b.first ;
    } else { 
        return a.second < b.second ; 
    }
} 

int main(void) { 
    ios::sync_with_stdio(false); cin.tie(0) ;

    cin >> N ; 
    for (int i = 0; i < N; i++) {
        cin >> arr[i].first >> arr[i].second ; 
    }

    sort(arr, arr + N, compare) ; 

    cout << '\n'; 
    for (int i = 0 ; i < N ; i++) { 
        cout << arr[i].first << ' ' << arr[i].second << '\n'; 
    }

    int result = 0 ; 
    int pre_end = 0 ; 

    for (int i = 0 ; i < N ; i++) { 
        if ( arr[i].first >= pre_end ) { 
            result++; 
            pre_end = arr[i].second ; 
        }
    }

    cout << result << '\n'; 

    return 0 ;
}