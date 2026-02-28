#include<stdio.h>
void fibonnaci(int n);
void fibonnaci(int n)
{
    int i,n3;
    int n1=0;
    int n2=1;
    
    printf("The fibonnaci series is:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
}
int main()
{
    int n;
    printf("Enter the total numbers of terms:");
    fflush(stdout);
    scanf("%d",&n);
    fibonnaci(n);
    return 0;    
}
/*Step 1: Start
Step 2: Declare a function fibonacci(n)
The function accepts one integer n (number of terms)
Step 3: In the function fibonacci(n)
Declare integer variables i and n3
Initialize
n1 = 0
n2 = 1
Display message “The Fibonacci series is”
Step 4: Repeat the following steps for i = 0 to n-1
Print n1
Calculate next term
n3 = n1 + n2
Update values
n1 = n2
n2 = n3
Step 5: In main() function
Read number of terms n
Call fibonacci(n)
Step 6: Stop*/