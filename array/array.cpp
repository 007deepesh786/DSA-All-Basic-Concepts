#include<bits/stdc++.h>
using namespace std;

//  void rotateArr(int arr[], int d, int n){
//         int start = 0;
//         int end= n-1;
//     for(int i=1; i<=d ; i++){
//         for(int j=0 ; j<n ; j++){
//             swap(arr[start],arr[end--]);
//            }
//         }
//     }

    // int main(){
    //     int arr[7] = {1,2,3,4,5,6,7};

    //     rotateArr(arr,2,7);

    //     for(int i =0 ; i<7; i++){
    //          cout << arr[i] << " ";
    //     }
    // }

    int main(){
        // int temp[5];
        // int arr[7] = {1,2,0,4,5,0,7};
        // int k=0;
        // for(int i=0 ; i<7 ; i++){
        //     if(arr[i] != 0)
        //     temp[k++] = arr[i];
        // }
        // for(int i=0 ; i<5 ; i++){
        //    cout << temp[i]  << " ";
        // }
       
       map<int,int>mpp;
       for(int i=0 ; i<5 ; i++){
        mpp[i]++;
       }
      cout << mpp[0];
    }