//program to implement linear search

#include<stdio.h>

int main()
{
  int i, ele, n;

  printf("\n Enter size of array: ");
  scanf("%d", &n);

  int A[n];

  printf ("\n Enter array elements: ");
  for(i=0;i<n; i++)
    scanf("%d", &A[i]);

  printf("\n Enter search element: ");
  scanf("%d", &ele);

  for(i=0;i<n;i++)
    {
      if(A[i] == ele)
      {
        printf("\n Position = %d", i+1);
        break;
      }

    }
    if(i==n)
       printf("\n Element not found"); 
}