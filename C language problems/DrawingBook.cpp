#include<stdio.h>
#include<stdlib.h>

int pageCount(int n, int p) {
    int turn_l = 0, turn_r = 0;
    if(n == p + 1 && p%2 == 0){
        return 0; 
    }else{
        for(int i = 0; i <= n; i++){
        if(i == p) break;
        if(i%2 == 1){
                turn_l++;
            }
     }
     for(int i=n; i>=0; i--){
         if(i == p) break;
         if(i%2 == 0){
                turn_r++;
            }
     }
     if(turn_l>turn_r) return turn_r;
     else return turn_l;     
    }
}
int main(){
	int n, p;
	printf("Enter number of page in book: ");
	scanf("%d", &n);
	printf("Enter number of page to turn: ");
	scanf("%d", &p);
	int turn = pageCount(n, p);
	printf("Number of turn: %d", turn);
	return 0;
}
