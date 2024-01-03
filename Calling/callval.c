#include <stdio.h>
void swapx(int x, int y);
int main()
{
	int a, b;
  printf("Enter the two values:");
  scanf("%d %d", &a, &b);
 	swapx(a,b);
	printf("%d %d\n", a, b);
}
	void swapx(int x, int y)
{
	int t;
	t=x;
  	x=y;
 	  y=t;
 	printf("%d %d\n", x, y);
}
