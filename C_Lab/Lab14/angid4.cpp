#include <stdio.h>

int *find(int *begin, int *end, int x);
int main()
{	
	int n;
	printf("Husnegtiin hemjee: ");
	scanf("%d", &n);
	int a[n];
	printf("Husnegtiin utguudiig oruul:\n");
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int *p, x, y, cnt = 0;
	printf("xaix too: ");
	scanf("%d", &x);
	printf("utgiin solih too: ");
	scanf("%d", &y);
	p = find(a, a + n, x);
	while(p != NULL ){
		cnt++;
		a[p - a] = y;
		p = find(a, a + n, x);
	}
	if(cnt != 0){
		printf("x - iig y - eer solison bdal:\n");
		for(int i = 0; i < n; i++){
			printf("%d ", a[i]);
		}
	}else printf("%d too oldsongui \n", x);
	return 0;
}
int *find(int *begin, int *end, int x){
	int n = end - begin;
	for(int i = 0; i < n; i++){
		if(begin[i] == x) return &begin[i];
	}
	return NULL;
}

