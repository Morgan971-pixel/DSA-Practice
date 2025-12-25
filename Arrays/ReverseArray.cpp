#include <iostream>
using namespace std;

void ReverseArray(int arr[], int size){
    // Swaps
    for (int i = 0, j = size-1; i < j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }

}

int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    ReverseArray(arr,size);
    for (int i =0; i<size;i++){
        cout << arr[i] << " ";

    }

}

