//here we need to bring the node to it's correct position
// here we don't need to check  for leaf node 
#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>&arr,int ind,int n){
    int largest=ind;
    int leftChild=2*ind;
    int rightChild=2*ind+1;
    if(leftChild<n&& arr[largest]<arr[leftChild]){
        largest=leftChild;
    }
    if(rightChild<n&& arr[largest]<arr[rightChild]){
        largest=rightChild;
    }
    if(largest!=ind){
        swap(arr[largest],arr[ind]);
        heapify(arr,largest,n);
    }


}
int main(){
    //since we know that child node will be heap so we don't process it
    int n=5;
     vector<int>arr={-1,54,53,55,52,50};
     for(auto i=n/2;i>0;i--){
        heapify(arr ,i,n);
    }
    for(auto i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
}
/*algorithm
1) so here we will only process the nodes that are not leaf node .since the leaf node is always a heap
2) now we start process/checking the elements whether the element is smaller than it's leftchild & rightchild so we will swap with the element which is smaller
3) and after completing the process if the largest is not equal to i we will process it furthur

*/ 
