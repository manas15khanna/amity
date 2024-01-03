#include <stdio.h>
int main()
{
  int r, c;
  printf("Input rows and colums:");
  scanf("%d %d", &r, &c);
  int arr[r][c];
  int i;
  int j;
  printf("Enter elements:");
  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      printf("Row %d\nColumn %d", i+1, j+1);
      scanf("%d", &arr[i][j]);
    }
  }
  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      scanf("%d", &arr[i][j]);
      printf("%d",arr[i][j]);
      printf("\n");
    }
    return 0;
  }
}
