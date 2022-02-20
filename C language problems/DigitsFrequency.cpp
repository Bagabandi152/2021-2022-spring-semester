#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    const int N = 10;
    char s[1000];
    int a[10] = {0};
    scanf("%s", s);    
    int l = strlen(s);
    for(int i=0; i<l; i++){
        char ch = s[i];
        if(ch>=48&&ch<=57){
            a[s[i]-48]++;
        }
    }
    for(int i=0; i<N; i++)
        printf("%d ", a[i]);   
    return 0;
}

