# include <stdio.h>

int main()
{
  int arr[200],n,i;
  printf("\n enter the size of array:");
  scanf("%d",&n);
  printf("\n enter element 1 by 1:");
  for(i=0;i<n;i++)
  {
       scanf("%d",&arr[i]);

  }
  
  arr[0]=0;

  for(i=0;i<n;i++)
  {
      arr[i]=arr[i+1];
  }
  n--;

  printf("\n array after deletion: ");
  for(i=0;i<n;i++)
  {
     printf("\n %d",arr[i]);

  }
  return 0;}
