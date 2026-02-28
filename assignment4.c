#include<stdio.h>
void sorting(int n,int a[n]);
void sorting(int n,int a[n])
{
    int i,j,temp;
    printf("The elements after sorting:");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
       
    }
    printf("\nMinimum is:%d\n",a[0]);
    printf("Maximum is:%d\n",a[n-1]);
}
void without_sorting(int n,int a[n]);
void without_sorting(int n,int a[n])
{   
    int i;
    int min=a[0];
    int max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Minimum is:%d\n",min);
    printf("Maximum is:%d\n",max);
}
int main()
{
    int i,n,ch,search;
    printf("Enter the size of array:");
    fflush(stdout);
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:");
    fflush(stdout);
    for(i=0;i<n;i++)
    {
      scanf("%d", &a[i]);//
    }
    for(i=0;i<2;i++)
    {
        printf("Enter your choice:\n1.with sorting\n2.without sorting:");
        fflush(stdout);
        scanf("%d",&ch);
        switch(ch)
    {
        case 1://with sorting
        sorting (n,a);
        break;
        case 2://without sorting
        without_sorting(n,a);
        break;
        default:
        printf("Invalid choice!!");
    }
    }

    
    return 0;
}
/*Step 1: Start
Step 2: In main() function
Read the size of array n
Declare integer array a[n]
Read n elements into the array
Display menu with choices:
1 → Find minimum and maximum with sorting
2 → Find minimum and maximum without sorting
Step 3: If user selects Option 1 (With Sorting)
Call function sorting(n, a)
Inside sorting() function
Apply Bubble Sort to arrange array elements in ascending order
After sorting:
First element a[0] is the minimum
Last element a[n-1] is the maximum
Display minimum and maximum values
Step 4: If user selects Option 2 (Without Sorting)
Call function without_sorting(n, a)
Inside without_sorting() function
Initialize
min = a[0]
max = a[0]
Traverse array from index 1 to n-1
Compare each element:
If element > max → update max
If element < min → update min
Display minimum and maximum values
Step 5: Repeat menu for required number of times
Step 6: Stop*/