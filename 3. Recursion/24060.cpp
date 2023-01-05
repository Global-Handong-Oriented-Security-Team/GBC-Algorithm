#include <iostream> 
#include <vector> 
#include <string.h> 
using namespace std ;

int N, K ; 
int cnt = 0 ; 
bool flag ; 
void merge(int *array, int l, int m, int r) {
    int i, j, t; 
    i = l, j = m + 1, t = 1 ; 

    int tmp[r - l + 2] ; 
    memset(tmp, 0 , sizeof(tmp)) ; 

    while ( i <= m && j <= r) { 
        if ( array[i] <= array[j]) {
            tmp[t++] = array[i++]; 
        } else {
            tmp[t++] = array[j++] ; 
        }
    }

    while ( i <= m ) { tmp[t++] = array[i++] ; }
    while ( j <= r ) { tmp[t++] = array[j++] ; }

    i = l ; t = 1 ; 
    while ( i <= r ) { array[i++] = tmp[t++] ; }

    for (int k = 1; k <= r - l + 1 ; k++) { 
        if ( tmp[k] != 0 ) { 
            cnt++;  
            if ( cnt == K ) { 
                cout << tmp[k] << '\n'; 
                flag = true ; 
                return ; 
            }
        }
    }
}

void mergeSort(int *array, int l, int r) {

    if(l < r) {
        int m = (l + r) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m+1, r);
        merge(array, l, m, r);
    }
}

int main(void) { 
    ios::sync_with_stdio(false); cin.tie(0) ; 
    int arr[500010]; 
    cin >> N >> K ; 

    for (int i = 1 ; i <= N ; i++) { 
        cin >> arr[i] ; 
    }

    mergeSort(arr, 1, N); 
    if ( !flag ) cout << -1 << '\n'; 
    return 0 ; 
}