#include <stdio.h>

int hermite(int n,int x);

void main(void){
	int n,x,ans;
	scanf("%i %i",&n,&x);
	ans=hermite(n,x);
	printf("ans=%d\n", ans);
}

int hermite(int n,int x){
	if(n<=0) return 1;
	else if(n==1) return 2*x;
	else return (2*x*hermite(n-1,x)-2*(n-1)*hermite(n-2,x));
}