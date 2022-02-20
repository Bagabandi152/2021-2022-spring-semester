#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define LEN 150

int main(){
	int y, m, d;
	char fname[50], lname[50];
	printf("Ner: ");
	scanf("%s", fname);
	for(int i = 0; i < strlen(fname); i++)
		if(!isalpha(fname[i])){
			printf("Ner latin usgeer bichigdsen bh ystoi.\n");
			break;	
		}
	printf("Ovog: ");
	scanf("%s", lname);
	for(int i = 0; i < strlen(lname); i++)
		if(!isalpha(lname[i])){
			printf("Ner latin usgeer bichigdsen bh ystoi.\n");
			break;
		}
	char buf[LEN];
    time_t curtime;
    struct tm *loc_time;
    curtime = time (NULL);
    loc_time = localtime (&curtime);
	printf("%s ovogtoi %s hereglegch ni ", lname, fname); 
    printf("'%s'", asctime (loc_time));
    strftime (buf, LEN, " buyu '%A, %b %d' udriin ", loc_time);
    fputs (buf, stdout);
    strftime (buf, LEN, "'%I:%M %p' ene tsagt handsan bn.\n", loc_time);
    fputs (buf, stdout);
    
	return 0;
}
