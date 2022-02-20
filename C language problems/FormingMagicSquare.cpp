#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 3

int magic(int x, int y, int a[][N]){
    int n = N, num = 1;
    int b[n][n];
    
    memset(b, 0, sizeof(b));
    int i = x;
    int j = y;
    while(num <= n*n){
        if (i == -1 && j == n)
        {
            i = n - 1;
            j = 0;
        }
        else {
            if (j == n) j = 0;
            if (i < 0) i = n - 1;
        }
        if (b[i][j])
        {
            j += 2;
            i--;
            continue;
        }
        else b[i][j] = num++; 
        i--;
        j++;
    }
    int s = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            int d = abs(a[i][j] - b[i][j]);
            if(d > 0){
                s += d;
            }
        }
    }
    return s;
}

int main(){
    int n = N, i, j;
    int a[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int x, y;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(a[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    int s;
    s = magic(x, y, a);
    printf("%d\n", s);
    return 0;
}

