#include <stdio.h>


int main(){
	char s[] = "hello";
	char s2[20] = "MUIS-iinhaan";
	
	for(int i = 0; i < 6; i++)// s[5] = '\0' bh tul s2[5] hoishih element null bolno. 
		s2[i] = s[i];
	printf("%s", s2);
	
	return 0;
}
