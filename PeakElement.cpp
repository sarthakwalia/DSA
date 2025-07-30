#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// arr [1,2,3,4,3,2,1] can be both, 
// peak element : A number which it's neighbours 
// A[i-1] < A[i] > A[i+1]
int BinarySearch(int arr[], int st, int ed, int n){
    while(st<=ed){
        int mid = st+(ed-st)/2;
        if((mid-1>0 && arr[mid] > arr[mid-1]) && (mid+1<n && arr[mid]> arr[mid+1])){
            return arr[mid];
        }
        else if(mid==0) {
            if(arr[mid]> arr[mid+1]){
                return arr[mid];
            }
            else if(arr[mid]==arr[mid+1]) return -1;
            else return arr[mid+1];
        }
        else if(mid == n-1){
            if(arr[mid]>arr[mid-1]){
                return arr[mid];
            }
            else if(arr[mid]==arr[mid-1]) return -1;
            else return arr[mid-1];
        }
        // else if (mid+1<n && arr[mid] <= arr[mid+1]){
        //     st = mid+1;
        // }
        else if(arr[mid] <arr[ed]) {
                st = mid+1;
        }
        else {
            ed = mid-1;
        }
    }
    return -1;
}

int peakElement(vector<int> &arr) {
    int n = arr.size();
  
    // If there is only one element, then it's a peak
    if (n == 1) 
        return 0;
        
    // Check if the first element is a peak
    if (arr[0] > arr[1])
        return 0;
        
    // Check if the last element is a peak
    if (arr[n - 1] > arr[n - 2])
        return n - 1;
    
    // Search Space for binary Search
    int lo = 1, hi = n - 2;
    
    while(lo <= hi) {
        int mid = lo + (hi - lo)/2;
        
        // If the element at mid is a  
        // peak element return  mid
        if(arr[mid] > arr[mid - 1] 
                       && arr[mid] > arr[mid + 1])
            return mid;
        
        // If next neighbor is greater, then peak
        // element will exist in the right subarray
        if(arr[mid] < arr[mid + 1])
            lo = mid + 1;
            
        // Otherwise, it will exist in left subarray
        else
            hi = mid - 1;
    }
    
    return 0;
}


int main() {
    int arr[7] = {1,2,3,4,3,2,1};
    int arr2[6] ={1,2,3,4,5,6};
    int arr3[4] ={1,1,1,1};
    int arr4[5] ={4,3,3,3,1};
    int arr5[8]= {1,2,4,3,3,3,2,1};
    int arr6[10] = {2,2,4,3,3,3,3,2,2,1};
    // cout<< BinarySearch(arr, 0, 6, 7);
    // cout<< BinarySearch(arr2, 0, 5, 6);
    // cout<< BinarySearch(arr3, 0, 3, 4);
    // cout<< BinarySearch(arr4, 0, 4, 5);
    // cout<< BinarySearch(arr6, 0, 9, 10);
    vector<int> vect = {2,2,4,3,3,3,3,2,2,1};
    cout<< peakElement(vect);

    cout << "Hello Geek!";
    return 0;
}















