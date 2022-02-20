#include <stdio.h>
int main () {
	int n, i = 0; //i cannot a parameter in loop due to has no initail value;
	scanf ("%d", &n);
	do{
	printf ("%d ", i);// i utgiig nemegduuleh ymar neg uildel heregtei. 
	//Tgej bj tuhain dawtaltaas i<n nuhtsul hudlaa bolsnoor garah ym.
	i++;
	}while (i <= n);//mun 0...n gsen tul end i <= n uguh heregtei.
	printf ("\n") ;
	return 0;
}
