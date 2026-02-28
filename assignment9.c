#include<stdio.h>
#include<string.h>
void encryption(char message[40],int key);
void encryption(char message[40],int key)
{
    int i;
    char ch;
    for(i=0;message[i]!='\0';i++)
    {
        ch=message[i];
        if(ch>='a'&&ch<='z')
        {
            ch=(ch-'a'+key)%26+'a';
        }
        else if(ch>='A'&&ch<='Z')
        {
            ch=(ch-'A'+key)%26+'A';
        }
        else if(ch>='0'&&ch<='9')
        {
            ch=(ch-'0'+key)%10+'0';
        }
        printf("%c",ch);
        
    }
}
void decryption(char message[40],int key);
void decryption(char message[40],int key)
{
    int i;
    char ch;
    for(i=0;message[i]!='\0';i++)
    {
        ch=message[i];
        if(ch>='a'&&ch<='z')
        {
            ch=(ch-'a'-key+26)%26+'a';
        }
        else if(ch>='A'&&ch<='Z')
        {
            ch=(ch-'A'-key+26)%26+'A';
        }
        else if(ch>='0'&&ch<='9')
        {
            ch=(ch-'0'-key+26)%10+'0';
        }
        printf("%c",ch);
        
    }
}
int main()
{    
    char message[40];
    int key;
    int choice;
    printf("Enter the message to be decoded:");
    fgets(message,40,stdin);
    printf("Enter the key matrix:");
    fflush(stdout);
    scanf("%d",&key);
    printf("Enter your choice:\n1.Encryption\n2.Decryption\n");
    fflush(stdout);
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        encryption(message,key);
        break;
        case 2:
        decryption(message,key);
        break;
        default:
        printf("Invalid choice!");
    }
   return 0;
}
/*Step 1: Start
Step 2: Declare functions
encryption(message, key)
decryption(message, key)
Step 3: In main() function
Declare character array message[40]
Declare integer variables key and choice
Read the message using fgets()
Read the key value
Display menu:
1 → Encryption
2 → Decryption
Accept user choice
Step 4: If user selects Encryption
Inside encryption() function
Traverse the message character by character
For each character:
If character is lowercase letter (a–z):
ch = (ch − 'a' + key) % 26 + 'a'
If character is uppercase letter (A–Z):
ch = (ch − 'A' + key) % 26 + 'A'
If character is digit (0–9):
ch = (ch − '0' + key) % 10 + '0'
Other characters remain unchanged
Print the encrypted character
Step 5: If user selects Decryption
Inside decryption() function
Traverse the message character by character
For each character:
If character is lowercase letter (a–z):
ch = (ch − 'a' − key + 26) % 26 + 'a'
If character is uppercase letter (A–Z):
ch = (ch − 'A' − key + 26) % 26 + 'A'
If character is digit (0–9):
ch = (ch − '0' − key + 10) % 10 + '0'
Print the decrypted character
Step 6: Stop*/