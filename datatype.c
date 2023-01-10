#include<stdio.h>

int main(){

	//int data type store 4bytes
	int a = 1337;
	printf("%d %d\n", a,sizeof(a));

	//unsigned int data type store 4bytes wihtout negatif number
	unsigned int b = 1337;
	printf("%d %d\n", b, sizeof(b));

	//short data type store 2bytes
	short c  = 1337;
	printf("%d %d\n", c, sizeof(c));

	//unsigned short data type store 2bytes without negatif number
	unsigned short d = 1337;
	printf("%d %d\n", d, sizeof(d));
	
	float e = 12.2;
	printf("%.2f %d\n", e , sizeof(e));	

	// short
	short t = 1337;
	printf("%hd %d\n",t,  sizeof(t));

	// unsigned short 
	unsigned short z = 33333;
	printf("%hd %d\n", z, sizeof(z));

	// char
	char test = 'z';
	printf("%c", test);

	
}
