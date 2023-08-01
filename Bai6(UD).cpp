#include <stdio.h>

void ChuViHCN(int a, int b){
  int P;
  P = (a + b) * 2;
  printf("\nChu vi hinh chu nhat la: %d",P);
}
void DienTichHCN(int a, int b){
  int S;
  S = a * b;
  printf("\nDien tich hinh chu nhat la: %d",S);
}
 
int main(){
  int a, b;
  printf("Nhap chieu dai a: ");
  scanf("%d", &a);
  printf("Nhap chieu rong b: ");
  scanf("%d", &b);
  ChuViHCN(a,b);
  DienTichHCN(a, b);
	for(int i = 1; i < ChuViHCN(a,b); i++)	{
		for(int k = 1 ; k <  DienTichHCN; k++){
			if(i == 1 || k == 1 || i == ChuViHCN || k == DienTichHCN(a,b)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
  return 0;
}
