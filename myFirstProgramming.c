# include<stdio.h>

int main() {
    int a, b;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;
    printf("sum is : %d ", sum);
    printf("sub is : %d ", sub);
    printf("mul is : %d ", mul);
    printf("div is : %d ", div);
    printf("mod is : %d ", mod);
    return 0;
}  