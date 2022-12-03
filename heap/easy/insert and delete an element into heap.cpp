#include<bits/stdc++.h>
using namespace std;
class heap{
 public:   
      int arr[100];
      int size;
      heap(){
        arr[0]=-1;
        size=0;
      }
      void insert(int val){
        size++;
       int ind=size;
       arr[ind]=val;
       while(ind>1){
          int parent=ind/2;
          if(arr[parent]<arr[ind]){
            swap(arr[parent],arr[ind]);
            ind=parent;
          }else{
             return;
          }
       }
    }
    void print(){
        for(auto i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
    void DeleteHeap(){
        if(size==0){
            cout<<"it is element with zero element"<<endl;
            return ;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int leftChild=2*i;
            int rightChild=2*i+1;
            if(leftChild<size&&arr[i]<arr[leftChild]){
                swap(arr[i],arr[leftChild]);
                i=leftChild;
            }else if(rightChild<size&&arr[i]<arr[rightChild]){
                swap(arr[i],arr[rightChild]);
                i=rightChild;
            }else {
                return ;
            }
        }
    }
};
int main(){
  heap h;
  h.insert(50);
  h.insert(53);
  h.insert(52);
  h.insert(54);
  h.print();
  cout<<endl;
  h.DeleteHeap();
  h.print();
}
