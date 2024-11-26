#include <stdio.h>
int main(){
	int n;
	int sum = 0;
	printf("nhap vao 1 so\n");
	scanf("%d",&n);
	
	if(n<=0){
		printf(" vui long nhap so nguyen duong\n");
		
	} else {
		for (int i = 1; i<=n; i++){
			sum = sum +i;
		}
		printf("tong tu 1 den %d la %d\n", n, sum);
	}
}
