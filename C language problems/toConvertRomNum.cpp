#include<stdio.h>
#include<string.h>
int main(){
	int n, a, b, c, m;
	char s[] = "", num[] = "";
	printf("Enter a number: ");
	scanf("%d", &n);
	m = n;
	if(n<10){
		switch(n){
			case 1: strcat(s, "I"); break;
			case 2: strcat(s, "II"); break;
			case 3: strcat(s, "III"); break;
			case 4: strcat(s, "IV"); break;
			case 5: strcat(s, "V"); break;
			case 6: strcat(s, "VI"); break;
			case 7: strcat(s, "VII"); break;
			case 8: strcat(s, "VIII"); break;
			case 9: strcat(s, "IX"); break;
		}
	}else if(n == 50){
		strcat(s, "L");
	}else if(n == 100){
		strcat(s, "C");
	}else if(n == 500){
		strcat(s, "D");
	}else if(n == 1000){
		strcat(s, "M");
	}else{
		a = m/100;
		switch(a){
			case 1: strcat(s, "C"); break;
			case 2: strcat(s, "CC"); break;
			case 3: strcat(s, "CCC"); break;
			case 4: strcat(s, "CCCC"); break;
			case 5: strcat(s, "D"); break;
			case 6: strcat(s, "DC"); break;
			case 7: strcat(s, "DCC"); break;
			case 8: strcat(s, "DCCC"); break;
			case 9: strcat(s, "DCCCC"); break;
		}
		b = m/10%10;
		switch(b){
			case 1: strcat(s, "X"); break;
			case 2: strcat(s, "XX"); break;
			case 3: strcat(s, "XXX"); break;
			case 4: strcat(s, "XXXX"); break;
			case 5: strcat(s, "L"); break;
			case 6: strcat(s, "LX"); break;
			case 7: strcat(s, "LXX"); break;
			case 8: strcat(s, "LXXX"); break;
			case 9: strcat(s, "LXXX"); break;
		}
		c = m%10;
		switch(c){
			case 1: strcat(s, "I"); break;
			case 2: strcat(s, "II"); break;
			case 3: strcat(s, "III"); break;
			case 4: strcat(s, "IV"); break;
			case 5: strcat(s, "V"); break;
			case 6: strcat(s, "VI"); break;
			case 7: strcat(s, "VII"); break;
			case 8: strcat(s, "VIII"); break;
			case 9: strcat(s, "IX"); break;
		}
	}
	printf("Roma number: %s\n", s);
	return 0;
}
