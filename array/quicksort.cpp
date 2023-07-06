#include <bits/stdc++.h>
int partition(vector<int>&arr,int low,int high) {
    int pivot  = arr[low];
    int i=low;
    int j = high;
    while(i<j) {
        while(arr[i]<=pivot && i <= high - 1) {
            i++;
        }
        while(arr[j]>=pivot && j >= low+1) {
            j--;
        }
        if(i<j) {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void q(vector<int> &arr,int low,int high) {
    if(low<high) {
        int position = partition(arr,low,high);
        q(arr,low,position-1);
        q(arr,position+1,high);
    }
}

vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    q(arr,0,arr.size()-1);
    return arr;
}
