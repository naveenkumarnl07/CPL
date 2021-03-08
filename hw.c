//program to read and print strings

#include<stdio.h>
#include<string.h>

int main()
{
  char s1[10], s2[10], s3[10];

  printf("\n Enter first string:");
  gets(s1);
  printf("\n Enter second string:");
  gets(s2);

  if(strcmp(s1,s2)!=0)
   strcat(s1,s2);

  strcpy(s3,s1);

  printf("\nString S1 = %s, length = %ld", s1, strlen(s1));
  printf("\nString S2 = %s, length = %ld", s1, strlen(s2));
  printf("\nString S3 = %s, length = %ld", s1, strlen(s3));
  
}