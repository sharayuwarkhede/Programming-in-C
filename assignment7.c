#include<stdio.h>
#include<string.h>
struct employee
{
    char name[30];
    int id;
    char mobile_no[11];
    int salary;
};
void input(int n,struct employee e[n]);
void input(int n,struct employee e[n])
{   
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEmployee%d",i+1);
        printf("\nName:");
        getchar();
        fgets(e[i].name,30,stdin);
        printf("Id_no:");
        fflush(stdout);
        scanf("%d",&e[i].id);
        printf("Mobile_no:");
        getchar();
        fgets(e[i].mobile_no,11,stdin);
        printf("salary:");
        fflush(stdout);
        scanf("%d",&e[i].salary);
    }
}
void display(int n,struct employee e[n]);
void display(int n,struct employee e[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Employee%d\n",i+1);
        printf("Name:%s",e[i].name);
        printf("Id_no:%d\n",e[i].id);
        printf("Mobile_no:%s\n",e[i].mobile_no);
        printf("salary:%d\n",e[i].salary);
    }
}
void details(int n,struct employee e[n],int search);
void details(int n,struct employee e[n],int search)
{
    int i,found=0;
    for(i=0;i<n;i++)
    {
        if(e[i].id==search)
        {
            found==1;
            printf("Name:%s",e[i].name);
            printf("Id_no:%d\n",e[i].id);
            printf("Mobile_no:%s\n",e[i].mobile_no);
            printf("salary:%d\n",e[i].salary);
            break;
        }
    }
    if(found==0)
    printf("Invalid Id!!\n");
}
void salary(int n,struct employee e[n]);
void salary(int n,struct employee e[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(e[i].salary>10000)
        {
           printf("Name:%s",e[i].name);
           printf("Id_no:%d\n",e[i].id);
           printf("Mobile_no:%s\n",e[i].mobile_no);
           printf("salary:%d\n",e[i].salary); 
        }
    }

}
void update(int n,struct employee e[n],int up);
void update(int n,struct employee e[n],int up)
{
    int i;
    char mob[11];
    for(i=0;i<n;i++)
    {
        if(e[i].id==up)
        {
            printf("Enter the new mobile_no");
            getchar();
            fgets(mob,11,stdin);
            e[i].mobile_no==mob;
            //printf("New mobile no is:%s\n",e[i].mob);//doubt
            printf("Mobile no updated successfully!!");
        }
    }
}

int main()
{
    int n,i,ch;
    int search,up;
    printf("Enter the total number of employee:");
    fflush(stdout);
    scanf("%d",&n);
    struct employee e[n];
    printf("Enter the details of employee:");
    input(n,e);
    for(i=0;i<4;i++)
    {
        printf("Enter your choice:\n");
        printf("1.Display the details\n");
        printf("2.Obtain details of employee by id\n");
        printf("3.Display details of employee with salary more than 10000\n");
        printf("4.Update the contact no of particular employee");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            display(n,e);
            break;
            case 2:
            printf("Enter the id of employee of which details to be searched:");
            fflush(stdout);
            scanf("%d",&search);
            details(n,e,search);
            break; 
            case 3:
            salary(n,e);
            break;
            case 4:
            printf("Enter the id of employee to uptade it:");
            fflush(stdout);
            scanf("%d",&up);
            update(n,e,up);
        }
    }
    return 0;
}
/*Step 1: Start
Step 2: Define a structure employee
Members:
name
id
mobile_no
salary
Step 3: Define function input(n, e)
Accept number of employees n and structure array e
For each employee:
Read name
Read employee ID
Read mobile number
Read salary
Step 4: Define function display(n, e)
Traverse the employee array
Display details of all employees:
Name
ID
Mobile number
Salary
Step 5: Define function details(n, e, search)
Accept employee ID to be searched
Compare search ID with each employee ID
If match found:
Display employee details
Stop searching
If no match found:
Display “Invalid ID”
Step 6: Define function salary(n, e)
Traverse employee array
If employee salary is greater than 10000:
Display employee details
Step 7: Define function update(n, e, up)
Accept employee ID whose mobile number is to be updated
Search for the employee ID
If found:
Accept new mobile number
Update employee contact number
Display success message
Step 8: In main() function
Read number of employees n
Declare structure array e[n]
Call input() to store employee details
Display menu:
1 → Display all employee details
2 → Search employee by ID
3 → Display employees with salary > 10000
4 → Update mobile number
Perform selected operation using switch case
Step 9: Repeat menu for required number of times
Step 10: Stop*/