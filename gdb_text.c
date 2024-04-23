#include<stdio.h>
#include<stdlib.h>

int factorial(int n){
  

	if(n<=1){
	return 1;
	}else{
	
	return n*factorial(n-1);
	}


}

int main(){
int x=5;
int y=10;
int z;
z=x+y+factorial(3);

printf("the result is:%d\n",z);
return 0;
}
