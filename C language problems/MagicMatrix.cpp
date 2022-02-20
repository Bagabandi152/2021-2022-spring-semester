#include<stdio.h>
#include<string.h> //contain memset() standart function which set a value given range.

int main(){
	int n;
	printf("Enter a odd number that is size of magic matrix: ");
	scanf("%d", &n);
	int a[n][n];
	
	memset(a, 0, sizeof(a));
	
	int i = n/2;
	int max = n*n;
	int j = n - 1;
	for(int num = 1; num <= max;){
		if((i == -1) && (j == n)){
			i = 0;
			j = n - 2;
		}else{
			if(i < 0) i = n - 1;
			if(j == n) j = 0;
		}
		
		if(a[i][j] != 0){
            j = j - 2;
            i++;
            continue;
        }else
			a[i][j] = num++;
		i--;
		j++;
	}
	
	
	printf("\n\nResult: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
