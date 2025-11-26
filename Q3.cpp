#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int h=n/2;
    for(int i=0;i<h;i++){
        printf("%d %d", a[i], a[i+h]);
        if(i<h-1) printf(" ");
    }
    if(n%2) printf(" %d", a[n-1]);
    return 0;
}
