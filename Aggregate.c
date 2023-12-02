/*Write a program to find the grade of total marks of six subjects*/
#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    float g;
    char name[20], fname[20];
        printf("Enter Student's Name:");
        scanf("%s", name);
        printf("Enter Father's Name:");
        scanf("%s", fname);
        printf("Enter marks of Maths: \n");
        scanf("%d", &a);
        printf("Enter marks of Physics: \n");
        scanf("%d", &b);
        printf("Enter marks of Chemistry: \n");
        scanf("%d", &c);
        printf("Enter marks of Biology:\n");
        scanf("%d", &d);
        printf("Enter marks of Computer Science: \n");
        scanf("%d", &e);
        printf("Enter marks of Engineering Drawing: \n");
        scanf("%d", &f);
        g=a+b+c+d+e+f;
        float h=g/6; 
    if (h<60) printf("Your grade is C with an total of %f and a percentage of %f\n", g, h);
    else if (h<=70) printf("Your grade is B with an total of %f and a percentage of %f\n", g, h);
    else if (h<=80) printf("Your grade is B+ with an total of %f and a percentage of %f\n", g, h);
    else if (h<=90) printf("Your grade is A with an total of %f and a percentage of %f\n", g, h);
    else if (h<=100) printf("Your grade is A+ with an total of %f and a percentage of %f\n", g, h);

    if (h>33)
    {
        printf("The student has passed with %d percent.", h);
    }
    else
    {
        printf("The student has failed.");
    }
    
    
    printf("These marks are of %s whose father name is %s\n\n", name, fname);
    return 0;
}
