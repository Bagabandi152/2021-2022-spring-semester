#include <stdio.h>

int main(){
	int n;
	
	printf("Enter a number /<=100000/: ");
	scanf("%d", &n);
	
	if(n%2 == 0){
		if((n%100)%4 == 0) printf("4-t huwaagdana.");
		else printf("4-t huwaagdahgui.");
	}else{
		int a, b, c, d, e, f;
		a = n/100000;
		b = n/10000%10;
		c = n/1000%10;
		d = n/100%10;
		e = n/10%10;
		f = n%10;
		if((a + b + c + d + e + f)%3 == 0) printf("3-t huwaagdana.");
		else printf("3-t huwaagdahgui.");
	}
	
	return 0;
}
