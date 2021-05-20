#include<stdio.h>
#include<cs50.h>

int main(void){
	int x = get_int(" ");
	int n = get_int(" ");
		if (x ==1){
			while(n != 0){
				for(int i=0; i<n; i++){
					printf("#");
				}
				printf("\n");
				n--;
			}
	
	}
	else if( x==2){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1; k<=i; k++){
			printf("#");
		}
		printf("\n");
		}
	}
	return 0;
}

