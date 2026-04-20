#include <stdio.h>
int main() {
    int a[10],i,sum=0;
    float avg;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/10.0;
    printf("%d %.2f",sum,avg);
    return 0;
}
