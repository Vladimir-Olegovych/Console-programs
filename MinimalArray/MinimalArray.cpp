#include <iostream>

using namespace std;

void minimalArray(int *arr, int len);

int main() {
    
    int arr[9] = {-1, 2, 3, 4, 5, 6, 7, -9, 0};
    minimalArray(arr, 9);

    return 0;
}

void minimalArray(int *arr, int len) {
    int min = *arr;
    for(int i = 0; i < len; i++){
        if(min > *(arr + i)) 
           min = *(arr + i);
    }
    cout << min;
}