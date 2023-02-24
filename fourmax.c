#include<stdio.h>
int main(){
	int a,b,c,d;
	
	printf("Value of a; ");
	scanf("%d",&a);
	
	printf("Value of b; ");
	scanf("%d",&b);
	
	printf("Value of c; ");
	scanf("%d",&c);
	
	printf("Value of d; ");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("a max");
			}
			else{
				printf("d max");
			}
		}
		else{
			if(c>d){
				printf("c max");
			}
			else{
				printf("d max");
			}
		}
			
	}
	else{
		if(b>c){
			if(b>d){
				printf("b max");
			}
			else{
				printf("d max");
			}
		}
		else{
			if(c>d){
				printf("c max");
			}
			else{
				printf("d max");
			}
			
		}
	}
	return 0;
}
