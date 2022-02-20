#include <stdio.h>

int count(int n, int A[]){
	int cnt = 0, j = 0;
	
	for(int i = 1; i <= n; i++){
		if(n%i == 0){
			A[j++] = i;
			cnt++;
		}
	}
	return cnt;
}

int main(){
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int A[n];
	
	int cnt = count(n, A);
	
	printf("%d - nii huwaagchid:\n", n);
	for(int i = 0; i < cnt; i++)
		printf("%d ", A[i]); 
	
	return 0;
}
