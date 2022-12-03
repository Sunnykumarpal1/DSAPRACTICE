#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>&arr,int ind,int n){
    int largest=ind;
    int leftChild=2*ind;
    int rightChild=2*ind+1;
    if(leftChild<=n&& arr[largest]<arr[leftChild]){
        largest=leftChild;
    }
    if(rightChild<=n&& arr[largest]<arr[rightChild]){
        largest=rightChild;
    }
    if(largest!=ind){
        swap(arr[largest],arr[ind]);
        heapify(arr,largest,n);
    }
}
void heapSort(vector<int>&arr,int n){
     int t=n;
     while(t>1){
        // step1 : swap the first element that's the maximum and the last node
        swap(arr[t],arr[1]);
        t--;
        heapify(arr,1,t);
     }
}
 

int main(){
  vector<int>arr={-1,5,34,7,4,9};
  int n=arr.size()-1;
  for(auto i=n/2+1;i>0;i--){
    heapify(arr,i,n);
  }
  cout<<endl;
  for(auto i=1;i<=n;i++){
    cout<<arr[i]<<" ";
  }
  heapSort(arr,n);
  cout<<endl;
  for(auto i=1;i<=n;i++){
    cout<<arr[i]<<" ";
  }
}
