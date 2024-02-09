#include <stdio.h>
int main()
{
    int m;
    printf("Input marks of the student:");
    scanf("%d",&m);
    if (m<40) printf("Your grade is F");
    else if (m<=60) printf("Your grade is E");
    else if (m<=70) printf("Your grade is D");
    else if (m<=80) printf("Your grade is C");
    else if (m<=90) printf("Your grade is B");
    else if (m<=100) printf("Your grade is A");
    else printf("The marks are not valid");
    return 0;
}