//bruted
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int i = 0;
    int j = 0;
    int *ret = (int*)malloc(sizeof(int)* (*returnSize));
    for(i=0;i<numsSize;i++){
         for(j=i+1;j<numsSize;j++){
              if(nums[i]+nums[j]==target){
                    ret[0] = i;
                    ret[1] = j;
                    break;
               }
    
         }
    }
    return ret;
}
