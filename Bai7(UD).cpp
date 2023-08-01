#include <bits/stdc++.h>
int main()
{
    int n;
    int Tong = 0;
    printf("Nhap vao n : "); 
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            Tong = Tong + i;
        }
    }
    if(Tong == n){
        printf("So hoan hao\n");
    }else{
        printf("Khong phai so hoan hao\n");
    }
}
