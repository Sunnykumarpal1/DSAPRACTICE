//this is zero based indexing
void MinHeap(vector<int>&arr,int ind,int n){
    int smallest=ind;
    int leftchild=2*ind+1;
    int rightchild=2*ind+2;
    if(leftchild<n&&arr[leftchild]<arr[smallest]){
        smallest=leftchild;
    }
    if(rightchild<n&& arr[rightchild]<arr[smallest]){
        smallest=rightchild;
    }
    if(smallest!=ind){
        swap(arr[smallest],arr[ind]);
        MinHeap(arr,smallest,n);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    int n=arr.size();
    for(auto i=n/2;i>=0;i--){
        MinHeap(arr,i,n);
    }
     return arr;
}
