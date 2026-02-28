#include<stdio.h>
void searching(int n,int a[n],int search);
void searching(int n,int a[n],int search)
{
    int i;
    int found = 0;
    for(i=0;i<n;i++)
    {
        if(a[i] == search)
       {
        found = 1;
        break;
       }
    }
    if(found)
        printf("Element is found!!");
    else
        printf("No such element exist.");
}
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
    for(i=0;i<n;i++)
    {
         printf("\t%d",a[i]);
    }
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
        printf("Enter your choice:\n1.searching\n2.sorting:");
        scanf("%d",&ch);
        switch(ch)
    {
        case 1://searching
        printf("Enter the value to search in array:");
        fflush(stdout);
        scanf("%d",&search);
        searching (n,a,search);
        break;
        case 2:
        sorting (n,a);
        break;
        default:
        printf("Invalid choice!!");
    }
    }
    
    return 0;
}
/*Algorithm: Searching and Sorting of an Array Using Functions
Step 1: Start
Step 2: In main() function
Read the size of array n
Declare integer array a[n]
Read n elements into the array
Display menu with choices:
1 → Searching
2 → Sorting
Step 3: If user selects Searching
Read the element to be searched (search)
Call function searching(n, a, search)
Inside searching() function
Initialize variable found = 0
Traverse array from index 0 to n-1
Compare each element with search
If match found:
Set found = 1
Exit loop
If found == 1, display “Element is found”
Else display “No such element exist”
Step 4: If user selects Sorting
Call function sorting(n, a)
Inside sorting() function
Use Bubble Sort technique
Compare adjacent elements
Swap elements if they are in wrong order
Repeat until array is sorted
Display sorted array elements
Step 5: Repeat menu for required number of times
Step 6: Stop*/