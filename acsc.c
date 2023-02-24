#include<stdio.h>
int main(){
	
	char  a; 
	

	
	printf("Enter value a: ");
	scanf("%c",&a);
	
	if((a>='a' && a<='z')||(a>='A' && a<='Z')){
		printf("This is character");
    }
    else if(a>='0' && a<='9'){
    	printf("This is number");
	}
	else{
		printf("This is special character");
	}
	
    
	return 0;
}
