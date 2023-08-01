#include <stdio.h>
#include <stdlib.h>

main(){
    int n;
    do{
       printf("
Nhap so tien can rut: ");scanf("%d",&n);
       }
    while (n<10000);
    if (n%10000!=0){
       printf("
So tien phai chia chet cho 10.000");
       return 1;
       }
    int motTram = n/100000;
    n = n % 100000;
    int namMuoi = n/50000;
    n = n % 50000;
    int haiMuoi = n/20000;
    n = n % 20000;
    int muoi = n/10000; 
    printf("Ket qua: 
");
    printf("%d x 100.000 
", &motTram);
    printf("%d x  50.000 
", &namMuoi);    
    printf("%d x  20.000 
", &haiMuoi);
    printf("%d x  10.000 
", &muoi);
    system("pause");
    return 0;
}
