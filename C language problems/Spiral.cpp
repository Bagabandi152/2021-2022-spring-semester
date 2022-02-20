#include <stdio.h>
#include <string.h>

int main(){
	int n, m = 1;
	printf("Enter a number:");
	scanf("%d", &n);
	
	int a[n][n];
	memset(a, 0, sizeof(a));
	int i, j;
	int x = 0, y = 0, lr = n - 1, lc = n - 1;
	while(x <= lr && y <= lc){
		for (i = x; i <= lc; i++) { 
            a[y][i] = m++; 
        } 
        y++;
  

        for (i = y; i <= lr; i++) { 
            a[i][lc] = m++; 
        } 
        lc--; 
        
        
        if (y <= lr) { 
            for (i = lc; i >= x; i--) { 
                a[lr][i] = m++; 
            } 
            lr--; 
        }
		
		 
        if (x <= lc) { 
            for (i = lr; i >= y; i--) { 
                a[i][x] = m++; 
            } 
            x++; 
        } 
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%d ", a[i][j]);
		printf("\n");	
	}
	
	return 0;
}
