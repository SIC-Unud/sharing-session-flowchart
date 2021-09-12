#include<stdio.h>
int main(){
	int n,i,a=0,b=1,jumlah;
	printf("masukkan n bilangan fibonaci: ");
	scanf("%i",&n);
	for(i=1;i<=n;i++){
		printf("%i  ",a);
		
		jumlah=a+b;
		a=b;
		b=jumlah;
	}
}
