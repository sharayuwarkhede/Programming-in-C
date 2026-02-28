#include<stdio.h>
#include<string.h>
struct accountholders //structure of account holders
{
  char name[40];
  int account_no;
  char mob_no[11];
  char address[30];
  int balance;
};
//declaring the function
//function for displaying the details of account holder
   void display(struct accountholders a[50],int n);
   void display(struct accountholders a[50],int n)
   {
       int i;
       for(i=0;i<n;i++)
       {
         printf("The account details of %d are:\n",i+1);
         printf("Account holder name is%s",a[i].name);
         printf("Account holder account number is %d",a[i].account_no);
         printf("Account holder mobile number is%s",a[i].mob_no);
         printf("Account holder address is%s",a[i].address);
         printf("Account holder balance is %d",a[i].balance);
       }
   }
   //function for searching
   void search_id(struct accountholders a[50],int id,int n);
   void search_id(struct accountholders a[50],int id,int n)
   {
       int i, found = 0;
       for(i=0;i<n;i++)
       {
           if(a[i].account_no==id)
           {
               found=1;
               printf("The account details are:%s\t%d\t%s\t%s\t%d",a[i].name,a[i].account_no,a[i].mob_no,a[i].address,a[i].balance);
               break;
           }
       }
           if(found==0)
            {
              printf("Account details not found.");
            }
   }
   void search_name(struct accountholders a[50],char searchname[50],int n);
   void search_name(struct accountholders a[50],char searchname[50],int n)
   {
       int i,found=0;
       for(i=0;i<n;i++)
       {
          if(strcmp(a[i].name, searchname) == 0)
           {
               printf("The account details are:%s\t%d\t%s\t%s\t%d",a[i].name,a[i].account_no,a[i].mob_no,a[i].address,a[i].balance);
               found=1;
               break;
           }
       }
          if(found==0)
               {
                 printf("Account details not found.");
               }
   }
   void deposit(struct accountholders a[50], int acc,int n);
   void deposit(struct accountholders a[50],int acc,int n)
   {
       int amt;
       int i,found = 0;
     
       for (i = 0; i < n; i++)
       {
       if (a[i].account_no == acc)
       {
          printf("Enter amount to deposit:");
          scanf("%d", &amt);
          a[i].balance += amt;
          printf("Amount deposited! New balance = %d\n", a[i].balance);
          found = 1;
          break;
       }
       }
        if(found==0)
        {
           printf("Account not found.\n");
        }
   }
   void withdraw(struct accountholders a[50],int acc,int n);
   void withdraw(struct accountholders a[50],int acc,int n)
   {
       int amt;
       int i, found = 0;
       for (i = 0; i < n; i++)
       {
       if(a[i].account_no == acc)
       {
           printf("Enter amount to withdraw: ");
           fflush(stdout);
           scanf("%d", &amt);
           if(amt > a[i].balance)
           {
             printf("Insufficient balance!\n");
           }
           else
           {
               a[i].balance -= amt;
               printf("Withdraw successful! Remaining balance = %d\n", a[i].balance);
           }
           found = 1;
           break;  
       }
       }
   }
int main()
{
   int n,i,ch;
   printf("Enter the number of account holder:");//accepting the number of account holders
   fflush(stdout);
   scanf("%d",&n);
   struct accountholders a[50];
   //accepting the details of account holder
   for(i=0;i<n;i++)
   {
       printf("Enter the details of account holders:%d\n",i+1);
       printf("Name:");
       getchar();
       fgets(a[i].name,sizeof(a[i].name),stdin);
       printf("Account number:");
       fflush(stdout);
       scanf("%d",&a[i].account_no);
       printf("Mobile number:");
       fflush(stdout);
       fgets(e[i].mobile_no,11,stdin);
       printf("Address:");
       getchar();
       fgets(a[i].address,sizeof(a[i].address),stdin);
       printf("Balance:");
       fflush(stdout);
       scanf("%d",&a[i].balance);
   }
   printf("Enter the operation to be performed:\n1.Display the details of all the account holders\n2. Search and obtain details by acc_no\n3.Search and obtain details by acc_holder name\n4. Deposit money in a particular account\n5. Withdraw money from a particular account");
   fflush(stdout);
   scanf("%d",&ch);
   switch(ch)
   {
          case 1:
          int i;
          for(i=0;i<n;i++)
           {
            printf("The account details of %d are:\n",i+1);
            printf("Account holder name is:%s\n",a[i].name);
            printf("Account holder account number  is:%d\n",a[i].account_no);
            printf("Account holder mobile number is:%s\n",a[i].mob_no);
            printf("Account holder address is:%s\n",a[i].address);
            printf("Account holder balance is:%d\n",a[i].balance);
           }
         break;
         case 2:
         int id;
         printf("Enter the account number of the employee for details:");
         fflush(stdout);
         scanf("%d",&id);
         search_id(a,id,n);
         break;
         case 3:
         char name[50];
         printf("Enter your account holder name for details:");
         getchar();
         fgets(name,sizeof(name),stdin);
         search_name(a,name,n);
         break;
         case 4:
         int acc;
         printf("Enter account number to deposit:");
         fflush(stdout);
         scanf("%d", &acc);
         deposit(a, acc,n);  
         break;
         case 5:
         int acc;
         printf("Enter account number to withdraw:");
         fflush(stdout);
         scanf("%d", &acc); 
         withdraw(a, acc,n);  
         break;
         default: 
         printf("Invalid choice!\n");
   }
return 0;
}
/*Step 1: Start
Step 2: Define a structure accountholders
Each account holder contains:
Name
Account number
Mobile number
Address
Balance
Step 3: Read number of account holders
Accept value n from user
Declare structure array a[n]
Step 4: Input details of all account holders
Repeat for i = 0 to n-1:
Read account holder name
Read account number
Read mobile number
Read address
Read balance
Step 5: Display menu of operations
Display details of all account holders
Search account by account number
Search account by account holder name
Deposit money
Withdraw money
Step 6: Perform operation based on user choice
Case 1: Display all account holder details
Traverse structure array
Print name, account number, mobile number, address and balance
Case 2: Search account by account number
Accept account number
Compare with each record
If match found → display details
If no match → display “Account not found”
Case 3: Search account by name
Accept account holder name
Compare using strcmp()
If match found → display details
Else → display “Account not found”
Case 4: Deposit money
Accept account number
Search for matching account
Accept deposit amount
Add amount to balance
Display updated balance
Case 5: Withdraw money
Accept account number
Search for matching account
Accept withdrawal amount
If amount ≤ balance
Deduct amount
Display remaining balance
Else
Display “Insufficient balance”
Step 7: Stop*/
