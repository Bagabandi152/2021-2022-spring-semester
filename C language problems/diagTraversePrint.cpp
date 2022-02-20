#include<stdio.h>


int main(){
	int n, row = 0, col = 0, x, y;
	bool down = false;
	
	printf("Enter a size of matrix: ");
	scanf("%d", &n);

	int a[n][n];
	int val = 1;
	
	int i;
		
	for(i = 0; i < n; i++){
		if(down){
			x = 0;
			y = i;
			while(y >= 0 && x < n){
				a[x][y] = val++;
				x++;
				y--;
			}
		}else{
			x = i;
			y = 0;
			while(x >= 0 && y < n){
				a[x][y] = val++;
				x--;
				y++;
			}
		}
		down = !down; 	
	}

	for(i = 1; i < n; i++){
		if(down){
			x = i;
			y = n - 1;
			while(y >= 0 && x < n){
				a[x][y] = val++;
				y--;
				x++;
			}
		}else{
			x = n - 1;
			y = i;
			while(x >= 0 && y < n){
				a[x][y] = val++;
				x--;
				y++;
			}	
		}
		down = !down;
	}
	
	printf("Result printing: \n");
	
	for(row = 0; row < n; row++){
		for(col = 0; col < n; col++){
			printf("%d ", a[row][col]);
		}
		printf("\n");
	}
	
	return 0;
}
