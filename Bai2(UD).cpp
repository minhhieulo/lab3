#include<stdio.h>
void nhap(int a[],int n ){
	
	for(int i = 0 ; i<n  ;i++){
	 printf("nhap vao mang a[%d]= ", i);
	 scanf("%d",&a[i]);
	}
}
int max(int a[],int n ){
	int max= a[0];
	for(int i =1;i<n;i++){
		if(max <a[i])
		max = a[i];
	}
	return max;
}
int min(int a[],int n){
	
	int min = a[0];
	for(int i =0; i<=n;i++){
		
		if(min>a[i])
		min = a[i];
	}
	return min;
}
int main(){
	int a[0];
	int n ;
	int m ,c,vitri;
	printf("nhap vao so luong trong mang ");
	scanf("%d",&n);
	nhap(a,n);
		printf("Mang da nhap:");
		 for (c = 0; c < n; c++)
		 printf("%d ", a[c]);
    printf("\nNhap vi tri chen phan tu: \n");
   scanf("%d", &vitri);
	  printf("Nhap phan tu muon chen: \n");
   scanf("%d", &m);
   for (c = n - 1; c >= vitri - 1; c--)
      a[c+1] = a[c];
       a[vitri-1] = m;
 
   printf("Mang sau khi chen:\n");
   for (c = 0; c <= n; c++)
      printf("%d\n", a[c]);
	printf("gia tri lon nhat la : %d",max(a,n));
	return 0;		
}