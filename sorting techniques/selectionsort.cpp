#include<bits/stdtr1c++.h>
using namespace std;

void selection_sort(int arr[] , int n){
    for(int i=0 ; i<=n-2 ; i++){
        int mini = i;
        for(int j=i ; j<= n-1 ; j++){
            if(arr[j] < arr[mini])
            mini = j;
        }
        // int temp = arr[mini];
        // arr[mini] =  arr[i];
        // arr[i] = temp;

        swap(arr[i],arr[mini]);

    }
}
/* in bubble sort for best case time complexity we can use flag here so if there is no swaps done here it means the array is already sorted*/

void bubble_sort(int arr[] , int n){
    for(int i=n-1 ; i>=0;i--){
        int didswap = 0;
        for(int j=0 ; j<= i-1 ; j++){
            if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
            didswap = 1;
            }
        }
        if(didswap == 0){
            break;
        }
        cout << "run" << endl;
    }

}
void insertion_sort(int arr[] , int n){

}
int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}