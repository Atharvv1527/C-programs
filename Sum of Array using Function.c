#include <stdio.h>
int sum(int a[],int n){
    int i,s=0;
    for(i=0;i<n;i++)
        s+=a[i];
    return s;
}
int main(){
    int a[10],i;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("%d",sum(a,10));
    return 0;
}
