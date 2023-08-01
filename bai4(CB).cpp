#include<stdio.h>
#include<Math.h>
int main(){
	int X ,n; 
	printf("Nhap Vao so nguyen X ");
	scanf("%d",&X);
	printf("Nhap vao so nguyen n : ");
	scanf("%d",&n);
		int Tich =1 ;
	for(int i =1; i<=n ;i++ ){
    Tich =X^n;}
	printf("Tich la : %d",n,X,Tich);
	return 0;
	} 