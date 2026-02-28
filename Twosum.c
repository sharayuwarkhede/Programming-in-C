//coded by me
#include<stdio.h>
int main()
{
    int n, target;
    int i, j;//,x;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int num[n];
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
    {
      scanf("%d", &num[i]);
    }
    printf("Enetr the target you want to achieve:");
    scanf("%d",&target);
    /*for(i=0;i<n;i++)
    {
        x=target-num[i];
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                 if(num[j]==x)
                 {
                    printf("The indices of two numbers is:%d,%d",i,j);
                 }
            }
        }
    }*/
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]+num[j]==target)
            {
                if(i!=j)
                {
                    printf("The indices of two numbers is:%d,%d",i,j);
                }               
            }           
        }
    }
    return 0;
}

//coded in leetcode
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));

    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}
