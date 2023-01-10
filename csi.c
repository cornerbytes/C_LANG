#include<stdio.h>
#include<string.h>
int main(){


	int b = -1;
	char c[16];


	gets(&c);

	if (b==0xdeadf00d){
		printf('youwinn\n');

	}else{
		printf("you lose b = %d\n", b);
	}

	return 0;

}
