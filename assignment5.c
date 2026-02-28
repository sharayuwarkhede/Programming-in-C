#include<stdio.h>
void input(int a[3][3]);
void input(int a[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
}
void addition(int a[3][3],int b[3][3],int c[3][3]);
void addition(int a[3][3],int b[3][3],int c[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
void substraction(int a[3][3],int b[3][3],int c[3][3]);
void substraction(int a[3][3],int b[3][3],int c[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          c[i][j]=a[i][j]-b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
void multiplication(int a[3][3],int b[3][3],int c[3][3]);
void multiplication(int a[3][3],int b[3][3],int c[3][3])
{
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
               c[i][j]=c[i][j]+a[i][j]*b[i][j];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i,j,ch;
    int a[3][3];
    int b[3][3];
    printf("Enter the elemnts of matrix a:");
    fflush(stdout);
    input(a);
    printf("Enter the elemnts of matrix b:");
    fflush(stdout);
    input(b);
    int c[3][3];
    for(i=0;i<3;i++)
    {
         printf("Enter which operation do you want to perform:\n1.Addition\n2.Substraction\n3.Multiplication:");
         fflush(stdout);
         scanf("%d",&ch);
         switch(ch)
         {
           case 1://addition
           addition(a,b,c);
           break;
           case 2://substraction
           substraction(a,b,c);
           break;
           case 3://multiplication
           multiplication(a,b,c);
           break;
           default:
           printf("Invalid choice!");
         }

    }
   return 0;
}
/*Step 1: Start
Step 2: Define a function input(matrix)
Accept a 3×3 matrix as argument
Use nested loops to read elements of the matrix from the user
Step 3: Define a function addition(a, b, c)
Traverse both matrices using nested loops
Add corresponding elements of matrices a and b
Store result in matrix c
Display the resultant matrix
Step 4: Define a function substraction(a, b, c)
Traverse both matrices using nested loops
Subtract elements of matrix b from matrix a
Store result in matrix c
Display the resultant matrix
Step 5: Define a function multiplication(a, b, c)
Use three nested loops
Multiply rows of matrix a with columns of matrix b
Store the result in matrix c
Display the resultant matrix
Step 6: In main() function
Declare three 3×3 matrices a, b, and c
Call input() function to read matrix a
Call input() function to read matrix b
Display menu with choices:
1 → Addition
2 → Subtraction
3 → Multiplication
Step 7: Based on user choice
If choice is 1, call addition(a, b, c)
If choice is 2, call substraction(a, b, c)
If choice is 3, call multiplication(a, b, c)
Otherwise display Invalid choice
Step 8: Stop*/