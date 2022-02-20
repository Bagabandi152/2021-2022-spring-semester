#include <stdio.h>

int main(){
	
	int n, cnt = 0;
	
	printf("Enter a size of array: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	for(int i = 0; i < n; i++){
		if(a[i] == a[n - (i + 1)]) cnt++;
	}
	
	if(cnt == n) printf("Tegsh hemtei husnegt.");
	else printf("Tegsh hemgui husnegt.");
	
	return 0;
}
