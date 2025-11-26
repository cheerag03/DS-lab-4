#include <stdio.h>
#include <string.h>

int main(){
    char s[10000];
    fgets(s,10000,stdin);

    int freq[256]={0};
    char q[10000];
    int f=0,r=0;

    for(int i=0; s[i] && s[i]!='\n'; i++){
        char c=s[i];
        freq[(unsigned char)c]++;
        q[r++]=c;

        while(f<r && freq[(unsigned char)q[f]]>1) f++;

        if(f<r) printf("%c ", q[f]);
        else printf("-1 ");
    }
    return 0;
}
