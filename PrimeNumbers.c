#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n==2 || n==3 || n==5 || n==7){
        printf("yes prime");
    }
        else if(n%2==0 || n%3==0 || n%5==0 || n%7==0){
            printf("no prime");
        }
        else{
            printf("yes prime");
        }
    return 0;
}
