#include<stdio.h>
#include<string.h>


int main(){
	int n = 3, i, j, num = 1;
	int a[n][n];
	
	memset(a, 0, sizeof(a));
	
	i = n - 1;
	j = n/2;
	
	
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
        if (a[i][j])
        {
        	j += 2;
            i--;
            continue;
        }
        else a[i][j] = num++; 
		i--;
		j++;
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
