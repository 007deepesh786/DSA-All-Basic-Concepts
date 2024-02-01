#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int l,int mid, int r){
    vector<int>ans;
    int left = l;
    int right = mid+1;
     mid=(l+r)/2;
    while(left <= mid && right <= r){
        if(arr[left] <= arr[right]){
            ans.push_back(arr[left++]);
        }
         else{
            ans.push_back(arr[right++]);
        }
    }
    while(left <= mid){
         ans.push_back(arr[left++]);
    }
    while(right <= r){
         ans.push_back(arr[right++]);
    }

    for(int i = l ; i<=r ;i++){
        arr[i] = ans[i-l];
    }

}
void mergeSort(int arr[], int l, int r) {
    if(l>=r) return;
    int mid = (l+r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main(){
    int arr[6] = {7,9,8,5,4,3};

    mergeSort(arr,0,5);
    cout << "decending :" << endl;
    for(int i=5 ; i>=0 ; i--){
        cout << arr[i] <<" ";
    }
    
    cout << endl;

    cout << "ascending :" << endl;
    for(int i=0 ; i<6 ; i++){
        cout << arr[i] <<" ";
    }
}
