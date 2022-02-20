#include <stdio.h>
#include <string.h>
#define N 100

int main() {
	char s1[N];
	char s2[N/5];
	
	
	printf("Enter a sentence: ");
	gets(s1);
	
	printf("Enter a word: ");
	scanf("%s", s2);

    int i = 0;
    int j = 0;
    int k = 0;
    int len = strlen(s2);

	printf("Ugiin uguulber deh bairlal: \n");
   	while(s1[i] != '\0') {
   	
       if(s1[i] == s2[j]) {

    		while(s1[i] == s2[j]  && s1[i] !='\0') {
            	i++;
				j++;
        	}

        	if(j == len && (s1[i] == ' ' || s1[i] == '\0')) {
        		printf("%d ", i - len);
        		k++;
    		}
    	}else{
        	while(s1[i] != ' ') {
        		i++;
        		if(s1[i] == '\0')
        		break;
        	}
    	}
		
    	i++;
    	j = 0;
	}

	if(k == 0) {
    	printf("%d ", -1);
    }

   return 0;
}
