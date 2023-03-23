iterated two for loops and if the count is greater than 2 for any element in the array then , shifted left all the elments untill that elemnt in the array occurred, placed a MAX value in the last places , if the iterator approches to MAX value stopped the array.

int removeDuplicates(int* nums, int numsSize){
  if(numsSize==1 || numsSize==2)
     return numsSize;
  int length=0;
  int index1=0,index2=0;
  int temp;
  int n=numsSize-1;
  for(int i=0;i<numsSize;i++){
    if(nums[i]==INT_MAX){
      break;
    }
    int count=0;
    int flag=0;
    for(int j=i;j<numsSize;j++){
        if(nums[i]==nums[j]){
            count++;
        }
        else
          break;
        if(count>2){
            flag=1;
            index1=j;
            break;
        }
    }
    length++;
    if(index1==2 && numsSize==3)
       return 2;
    if(flag==1){
      int prime=0;
     int key = nums[index1];
     for(int k=index1;k<numsSize;k++){
         if(nums[k]!=key){
             index2=k-1;
             prime=1;
             break;
         }
     }
     if(prime==1){
     int m=index1;
     for(int k=index2+1;k<numsSize;k++){
       nums[m] = nums[k];
       m++;  
     }
   for(int i=0;i<(abs(index1-index2)+1);i++){
     nums[n]=INT_MAX;
     n--;
      } 
    }
    else{
      return length+1;
    }
    }
  }
  return length;
}