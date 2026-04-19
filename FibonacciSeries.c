#include<stdio.h>

int main(){
    int n, a=0, b=1, c;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    int i=1;

    while (i<=n){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return 0;
}
