//  so here the question is to find the maximum contigous ones by fliping k zeros
//  approach : here we will keeping 2 pointer from 0 th index and a varible zerocount will be keeping track of number of zeros
// so when the encountered value is 1 we will be increasing j th pointer and when the encounter value is  0 we will increase value of j and value of zerocount 
// so when the zero count value exceeds k .so here the zero values are exceeding the limit 
// so we will increase a pointer i from 0 th index . if it encounters 1 then move i to next index ;
// when value 0 is encoundered . so we need to remove 1 zero because we have taken an additional zero in our window so we will increment the i value
//  at linear time complexity and space complexity
//eg temp = [1,1,1,0,0,0,1,1,1,1,0], k = 2
//          {0,1,2,3,4,5,6,7,8,9,10}
 int ContigousOnes(vector<int>&temp,int k){
   int i=0,j=0;
   int maxi=INT_MIN;
   int n=temp.size();
   int zerocount=0;
         while(j!=n){
            if(temp[j]==1){
                j++;
            }else{
              zerocount++;
               j++;
          while(zerocount>k){
            if(temp[i]==1){
                i++;
              }else {
                i++;
              zerocount--;
            }
         }
       } 
       maxi=max(maxi,j-i);
    }
   return maxi;
 }
