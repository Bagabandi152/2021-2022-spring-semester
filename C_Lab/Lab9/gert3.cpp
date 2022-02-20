#include <stdio.h>
void read(int A[], int n);

void print(int A[], int n);

bool not_have(int a[], int n, int k){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == k) cnt++;
	}
	if(cnt == 0) return true;
	else return false; 
}

int join(int A[], int B[], int n, int m){
	int i = 0;
	while(i < m){
		A[n++] = B[i++];
	}
	
	printf("\n\nNiiluulsen husnegt:\n");
	print(A, n);
	int C[n];
	C[0] = A[0];
	int k = 0, cnt = 0;
	for(i = 0; i < n; i++){
		if(not_have(C, k + 1, A[i])){
			C[k + 1] = A[i];
			k++;
		}
	}
	
	for(i = 0; i < k + 1; i++){
		A[i] = C[i];
	}
	
	return k + 1;
}

int main (){
	int a[100], b[100], n, m;
	printf("Ehnii husnegtiin urt:\n");
	scanf ("%d", &n);
	printf("Enhnii husnegtuudiig oruul.\n");
	read(a, n);
	printf("Ehnii husnegt:\n");
	print(a, n);
	
	printf("Khoyar dah husnegtiin urt:\n");
	scanf("%d", &m);
	printf("Khoyar dah husnegtuudiig oruul.\n");
	read(b, m);
	printf("Khoyar dah husnegt:\n");
	print(b, m);
	
	int k = join(a, b, n, m);
	printf("Dawhtsalgui niiluulsen husnegt:\n");
	print(a, k);
	return 0;
}

void read(int A[] , int n){
	int i;
	for (i = 0; i < n; i++)	
		scanf ("%d", &A[i]);
	printf("\n");
}

void print (int A[] , int n){
	int i;
	for(i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\n");
}
