#include <stdio.h>
#define N 100

int main(){
	int n;
	int a[N];
	
	printf("Enter a size of number: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	int k=0, t=0;
	
	for(int i=0; i<n-1; i++){
		if(a[i]<a[i+1]){
			k++;
		}else{
			t++;
		}
	}	
	
	if(k == n - 1) printf("Order by increase.");
	else if(t == n - 1) printf("Order by decrease.");
	else printf("no sort.");
	return 0;
}
