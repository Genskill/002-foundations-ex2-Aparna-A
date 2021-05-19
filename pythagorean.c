#include<stdio.h>
#include<cs50.h>
int main(){
	int side1 = get_int("Enter side1 value:");
	int side2 = get_int("Enter side2 value:");
	int side3 = get_int("Enter side3 value");
	if(side1*side1 == side2*side2+side3*side3 || side2*side2 == side1*side1+side3*side3 || side3*side3 == side1*side1+side2*side2)
	{
		printf("yes");
	}
	else{
		printf("No");
	}
	return 0;
}

