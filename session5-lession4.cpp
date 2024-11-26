#include <stdio.h>
int main(){
	int n;
	printf("nhap 1 so\n");
	scanf("%d",&n);
	if (n<=0 || n>10){
		printf("nhap lai di\n");
	} else{
	printf("bang cuu chuong %d\n",n);
	for(int i = 1; i <= 10; i++){
		printf ("%d x %d = %d\n", n,i, n*i);
	}
}
return 0;
}
