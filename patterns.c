#include<stdio.h>
#include<cs50.h>
int main(){
	int x = get_int("Enter type of pattern");
	if (x ==1){
		int n = get_int("Enter the number of rows: ");
		for(int i=n;i>=1;i--){
			for(int j=1;j<=1;j++){
				printf("#");
			}
			printf("\n");
		}
	
	}
	else if( x==2){
		int n,m=1;
		int n = get_int("Enter the number of rows");
		for(int i=n;i>=1;i++){
			for(int j=1;j<=1;j++){
				printf(" ");
			}
			for(int k=1;k<=m;k++){
				printf("#");
				
			}
			printf("\n");
			m++;
		}
	}
	return 0;
}

