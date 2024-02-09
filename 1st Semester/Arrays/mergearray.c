#include <stdio.h>
int main()
{
  int n1, n2, n3, i, j;
  int temp=0;
  int a[5], b[5], c[5];
  printf("Enter size of first array:");
  scanf("%d", &n1);
  printf("Enter elements:");
  for (i=0;i<n1; i++)
   scanf("%d", &a[i]);
  printf("Enter size of second array:");
  scanf("%d", &n2);
  for (i=0; i<n2; i++)
    scanf("%d", &b[i]);
  n3=n1+n2;
  for(i=0; i<n1; i++)
    c[i]=a[i];
  for(i=0; i<n2; i++)
    c[i+n1]=b[i];
  printf("The merged array:");
  for(i=0; i<n3; i++)
  {
    printf("%d", c[i]);
  }
  for (int i = 0; i < n3; i++) {     
        for (int j = i+1; j < n3; j++) {     
           if(c[i] > c[j]) {    
               temp = c[i];    
               c[i] = c[j];    
               c[j] = temp;    
           }     
        }     
    }
  printf("\n\n");
  printf("The numbers in ascending order is:\n");
   for (i = 0; i < n3; ++i){
      printf("%d\n", c[i]);
   }
  return 0;
}
