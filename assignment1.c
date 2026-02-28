#include<stdio.h>
void conversion1(float f, float i);//declaring the function
void conversion1(float f, float i)//defining the function
{
    printf("Enter the values in feet to convert in inches:");
    fflush(stdout);
    scanf("%f",&f);
    i=f*12;
    printf("The converted value in inches is:%f",i);

}
int main()
{
    float f,i;
    conversion1(f, i);
    return 0;
}
/*Step 1: Start
Step 2: Declare a function conversion1()
Function accepts two float variables f (feet) and i (inches)
Step 3: In the function conversion1()
Display message asking user to enter value in feet
Read the value of feet (f)
Convert feet into inches using formula
inches = feet × 12
Display the converted value in inches
Step 4: In main() function
Declare two float variables f and i
Call the function conversion1(f, i)
Step 5: Stop*/