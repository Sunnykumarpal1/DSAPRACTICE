// we ust need to find the largest element 
int largest(vector<int> &arr, int n)
    {
         int maxi=INT_MIN;
          for(auto i:arr){
              if(i>maxi){
                  maxi=i;
              }
          }
          return maxi;
    }
};
