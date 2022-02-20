#include <stdio.h>

int main(){
	int n;
	
	printf("Ta doorh asuultuudad tiim gj hariulbal 1, ugui bol 0 gj oruulna.\n");
	
	printf("Shultei, ustai hool ideh uu?\n");
	scanf("%d", &n);
	if(n == 1){
		printf("Tsai bol tiim, ugui bol shultei bn.\n");
		scanf("%d", &n);
		if(n == 1){
			printf("Budaatai bol tiim, ugui bol banshtai bn.\n");
			scanf("%d", &n);
			if(n == 1) printf("Budaatai tsai\n");
			else printf("Banshtai tsai\n");
		}else{
			printf("Ta yutai shul idmeer bn.\n");
			printf("guraltai\n");
			scanf("%d", &n);
			if(n == 1) printf("lapsha\n");
			else{
				printf("pvntvvztei\n");
				scanf("%d", &n);
				if(n == 1){
					printf("huitsai\n");
				}else{
					printf("goimontoi\n");
					scanf("%d", &n);
					if(n == 1){
						printf("goimontoi shul\n");
					}else{
						printf("banshtai\n");
						scanf("%d", &n);
						if(n == 1) printf("banshtai shul\n");
						else{
							printf("maxtai\n");
							scanf("%d", &n);
							if(n == 1) printf("har shul\n");
							else{
								printf("nogootoi\n");
								scanf("%d", &n);
								if(n == 1) printf("nogootoi shul");
							}
						} 
					}
				}
			}
		}
	}else{
		printf("Mah ni tatsan uu?\n");
		scanf("%d", &n);
		if(n == 1){
			printf("Gurailand orooson uu?\n");
			scanf("%d", &n);
			if(n == 1){
				printf("Jignesen uu?\n");
				scanf("%d", &n);
				if(n == 1){
					printf("Huulguj jignesen?\n");
					scanf("%d", &n);
					if(n == 1) printf("Mantuun buuz\n");
					else{
						printf("shuud jignesen?\n");
						scanf("%d", &n);
						if(n == 1) printf("buuz\n");
					}
					printf("Sharsan uu?\n");
					scanf("%d", &n);
					if(n == 1){
						printf("Huulguj sharsan?\n");
						scanf("%d", &n);
						if(n == 1) printf("piroshki\n");
						else{
							printf("shuud sharsan\n");
							printf("huushuur\n");
							}
						}
				}else{
					printf("budaatai\n");
					printf("Undgund oroosan?\n");
					scanf("%d", &n);
					if(n == 1){
						printf("ungdugtei pifshteks\n");
					}else{
						printf("mahaa buurunhiilsen?\n");
						scanf("%d", &n);
						if(n == 1) printf("tefteli\n");
						}
					}
			}else{
				printf("Guraltai holih?\n");
				scanf("%d", &n);
				if(n == 1){
					printf("tsuiwan\n");
				}else{
					printf("undugtei holih?\n");
					scanf("%d", &n);
					if(n == 1) printf("undugtei huurga\n");
					else{
						printf("Budaatai?");
						scanf("%d", &n);
						if(n == 1){
							printf("Budaag ni holih uu?\n");
							scanf("%d", &n);
							if(n == 1) printf("budaatai huurga\n");
							else printf("guliash\n");
						}else{
							printf("Nogootoi?\n");
							scanf("%d", &n);
							if(n == 1) printf("nogootoi huurga\n");
						}
					}
				}
			}
		}
	}
	
	return 0;
}
