#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r){
    int size = r-l+1;
    int temp[size];
    int idx = 0;
    int idx1 = l;
    int idx2 = m+1;
    while(idx1<=m && idx2 <=r){
        if(arr[idx1]<=arr[idx2]){
            temp[idx++] = arr[idx1++];
        }
        else{
            temp[idx++] = arr[idx2++];
        }
    }
    while(idx1<=m) temp[idx++] = arr[idx1++];
    while(idx2<=r) temp[idx++] = arr[idx2++];

    for(int i=0;i<size;i++){
        arr[l+i] = temp[i];
    } 
}

void mergeSort(int arr[],int l, int r){
    if(l<r){
        int m = l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int thirdLargestNumber(int arr[], int n, int k) {
    mergeSort(arr,0,n-1);
    return arr[n-k];

}

int main() {
    int arr[9] ={1,34,5,6789,123,456,67,45,67};
    int ans = thirdLargestNumber(arr,9,3);
    cout << ans;
    cout << "Hello Geek!";
    return 0;
}















