#include<bits/stdc++.h>
using namespace std;
int pivot_find (int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high){
            i++;
        }
        while(arr[j]>pivot && j>=low){
            j--;
        }
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
void quick_sort(int arr[],int low,int high){
    if(low<high){
    int pivot=pivot_find( arr,low,high);
    quick_sort( arr,low, pivot-1);
    quick_sort( arr,pivot+1, high);
    }

}
int main(){
    int arr[]={2,1,4,5,3};
    int n=sizeof(arr) / sizeof(arr[0]);
    int low=0;
    int high=n-1;
    quick_sort(arr,low,high);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
