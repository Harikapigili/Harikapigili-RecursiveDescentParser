#include<stdio.h>
#include<string.h>
#include<ctype.h>
char input[100];
char name[20];
char rollno[20];
int i;
int S();
int A();
int main(void)
{
printf("\nRecursive Descent Parsing for the following grammar\n\n");
printf("\nS->cAd'\nA->ab/a\n\n");
printf("\nEnter the String to be Checked:");
gets(input);

printf("\n Enter the Name:");
scanf("%s",name);
printf("\n Enter the Roll No:");
scanf("%s",rollno);
if(S())
{
if(input[i+1]=='\0')
printf("\nString is ACCEPTED");
else
printf("\nString is NOT ACCEPTED");
}
else
printf("\nString is NOT ACCEPTED");

}
int S()
{
if(input[i]=='c')
{
 i++;
 if(A())
 if(input[i]=='d')
 i++;
 return 1;
 
}
 else
 return 0;
}
int A()
{
if(input[i]=='a')
{
 i++;
 if(input[i]=='b')
 i++;
}
else if(input[i]=='a')
i++;
return 1;
}
