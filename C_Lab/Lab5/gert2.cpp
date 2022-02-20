#include <stdio.h>

int main(){
	
	int s;
	
	printf("If x*x + y*y = z*z then x, y, z\n");
	for(int z = 1; z <= 100; z++){
		for(int y = 1; y <= z; y++){
			for(int x = 1; x <= y; x++){
				s = x*x + y*y;
				if(s == z*z) printf("%d + %d = %d then %d, %d, %d\n", x*x, y*y, z*z, x, y, z);
			}
		}
	}
	
	return 0;
}
