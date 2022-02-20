#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

int main(){
	char s1[N], s2[N], s3[N], s4[N], s5[N], s6[N];
	int nas;
	const int year = 2021;
	printf("Tanii owog?\n");
	scanf("%s", &s1);
	printf("Tanii ner?\n");
	scanf("%s", &s2);
	printf("Tanii tursun on.sar.udur?\n");
	scanf("%s", &s3);
	printf("Durtai ungu?\n");
	scanf("%s", &s4);
	printf("Tanii hobby?\n");
	scanf("%s", &s5);
	printf("Chuluut tsagaaraa hiideg zuil?\n");
	scanf("%s", &s6);
	
	char* s7 = strtok(s3, ".");
	nas = atoi(s7);
	
	nas = year - nas;
	printf("%s owogtoi %s ni %s udur tursun. Odoo %d nastai. Tuunii durtai ungu bol %s.\nTer chuluut tsagaaraa %s hiideg. Tuunii hobby bol %s.", s1, s2, s3, nas, s4, s6, s5);
	
	return 0;
}
