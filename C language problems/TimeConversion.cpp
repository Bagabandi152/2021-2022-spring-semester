#include<stdio.h>
#include<string.h>
int main() {
    int h, m, s;
    char t12[3];
    scanf("%d:%d:%d%s", &h, &m, &s, t12) ;
        
    if (strcmp(t12,"PM")==0 && h!=12) h += 12 ;
    else if (strcmp(t12,"AM")==0 && h==12) h = 0;
        
    printf("%02d:%02d:%02d", h, m, s) ;
    return 0;
}
