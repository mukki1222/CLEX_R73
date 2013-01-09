#include<stdio.h>

void main(void){
	int a=15,b=5,c=-5;
	printf("aとbの論理積:a&b=%d\n",a&b);
	printf("aとbの論理和:a|b=%d\n",a|b);
	printf("aとbの排他的論理和=:a^b=%d\n",a^b);
	printf("aのビット反転:~a=%d\n",~a);
	printf("bのビット反転:~b=%d\n",~b);
	printf("cのビット反転:~c=%d\n",~c);
	printf("aを左に1ビットシフト:a<<1=%d\n",a<<1);
	printf("bを左に1ビットシフト:b<<1=%d\n",b<<1);
	printf("cを左に1ビットシフト:c<<1=%d\n",c<<1);
	printf("aを右に1ビットシフト:a>>1=%d\n",a>>1);
	printf("bを右に1ビットシフト:b>>1=%d\n",b>>1);
	printf("cを右に1ビットシフト:c>>1=%d\n",c>>1);
}