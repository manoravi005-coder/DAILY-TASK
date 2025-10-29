#include <stdio.h>

int main(){
	
	int a,l,b;
	
	scanf("%d%d%d", &a, &l, &b);
	
	int square, rectangle;
	
	square = a*a;
	
	rectangle = l*b;
	
	printf("%d %d", square, rectangle);
	
	return 0;
}
