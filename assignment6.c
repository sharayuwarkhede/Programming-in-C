#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,ch;
    int vowels=0,space=0,digits=0,consonants=0,length=0;
    char s[30];
    printf("Enter the sentence:");
    fgets(s,30,stdin);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            vowels++;
        }
        else if(s[i]==' ')
        {
            space++;
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            digits++;
        }
        else
        {
            consonants++;
        }
        length++;
    }
    for(i=0;i<5;i++)
    {
    printf("Enter your choice:\n1.String length by manually\n2.String length using strlen\n3.Number of vowels\n4.Number of consonants\n5.Number of digits\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("The length of string is:%d\n",length);
        break;
        case 2:
        printf("String length is:%d\n",strlen(s));
        break;
        case 3:
        printf("Total number of vowels is:%d\n",vowels);
        break;
        case 4:
        printf("Total number of consonants is:%d\n",consonants);
        break;
        case 5:
        printf("Total number of digits is:%d\n",digits);
        break;
        default:
        printf("Invalid choice!!");
    }
    }
    
    return 0;
}
/*Step 1: Start
Step 2: Declare variables
Integers: i, ch
Counters: vowels, space, digits, consonants, length and initialize them to 0
Character array s[30]
Step 3: Read input string
Display message to enter a sentence
Read the string using fgets()
Step 4: Traverse the string character by character
Repeat steps for i = 0 to s[i] != '\0'
If character is a vowel (a, e, i, o, u or A, E, I, O, U)
→ Increment vowels
Else if character is a space
→ Increment space
Else if character is a digit (0–9)
→ Increment digits
Else
→ Increment consonants
Increment length for each character
Step 5: Display menu and accept user choice
Repeat menu for required number of times
Menu options:
String length (manual)
String length using strlen()
Number of vowels
Number of consonants
Number of digits
Step 6: Perform operation using switch
Case 1: Display manual string length
Case 2: Display length using strlen()
Case 3: Display number of vowels
Case 4: Display number of consonants
Case 5: Display number of digits
Default: Display invalid choice message
Step 7: Stop*/