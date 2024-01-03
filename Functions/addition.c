#include <stdio.h>
    int sumWithReturnWithArgs(int a, int b) {
    int sum = a + b;
    return sum;
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = sumWithReturnWithArgs(num1, num2);
    printf("Sum is: %d\n", result);
    return 0;
}
/*    int sumWithReturnTypeWithoutArgs() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    return sum;
}
int main() {
    int result = sumWithReturnTypeWithoutArgs();
    printf("Sum is: %d\n", result);
    return 0;
}
    void sumWithoutReturnTypeWithArgs(int,int);
    void sumWithoutReturnTypeWithArgs(int a, int b) {
    int sum = a + b;
    printf("Sum is: %d\n", sum);
}
void main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sumWithoutReturnTypeWithArgs(num1, num2);
}
    void sumWithoutReturnWithoutArgs() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum is: %d\n", sum);
    
}
int main() {
    sumWithoutReturnWithoutArgs();
    return 0;
}
*/
