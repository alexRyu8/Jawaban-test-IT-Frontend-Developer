#include<stdio.h>

int main(){
	
	int a;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	
	for(a = 0; a<=10; a++){
		if(a%4 == 0){
			b = b + a + c - e;
			printf("%d\n", b);
		}
		else{
			printf("Mod result is not 0\n");
		}
		if(a%3 == 0){
			c = c + a + b - d;
			printf("%d\n",c);
		}
		else{
			printf("Mod result is not 0\n");
		}
		if(a%2 == 0){
			d = d + a + b - c;
			printf("%d\n",d);
		}
		else{
			printf("Mod result is not 0\n");
		}
		if(a%1 == 0){
			e = a + b + c;
			printf("%d\n",e);
		}
		else{
			printf("Mod result is not 0\n");
		}
	}
	return 0;
}



