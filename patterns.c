#include<stdio.h>
#include<cs50.h>
int main(){
	int side1,side2,side3;
	get_int("%d%d%d",&side1,&side2,&side3);
	if(side1*side1 == side2*side2+side3*side3 || side2*side2 = side1*side1+side3*side3 || side3*side3=side1*side1+side2*side2)
	{
		printf("yes");
	}
	else{
		printf("No")
	}
	return 0;
}

