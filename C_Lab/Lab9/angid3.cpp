#include <stdio.h>

int max(int a[] , int n);

int main(){
	int n, m;
	
	printf("Enter a size of A array:\n");
	scanf("%d", &n);
	
	int A[n];
	printf("Enter a value of A array:\n");
	for(int i = 0; i < n; i++)
		scanf("%d", &A[i]);
	
	printf("Enter a size of B array:\n");
	scanf("%d", &m);
	
	int B[m];
	printf("Enter a value of B array:\n");
	for(int i = 0; i < m; i++)
		scanf("%d", &B[i]);
	
	
	int a1 = max(A, n);
	int a2 = max(B, m);
	
	if(a1 > a2) printf("A husnegt hamgiin tom toog aguulna.\n");
	else if(a1 == a2) printf("A, B husnegtiin hamgiin tom toonuud tencuu.\n");
	else printf("B husnegt hamgiin tom toog aguulna.\n");
	
	return 0;
}

max(int a[], int n){
	int mx = a[0];
	
	for(int i = 0; i < n; i++){
		if(mx < a[i]) mx = a[i];
	}
	
	return mx;
}
