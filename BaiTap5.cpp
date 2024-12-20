#include<stdio.h>

int main() {
    int a, b;
    
    printf("Nhap so dong cua ma tran: ");
    scanf("%d", &a);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &b);
    int array[a][b];
    
   
    printf("Nhap gia tri cho ma tran %d x %d:\n", a, b);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
  
    printf("Ma tran cua ban:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    

    int sum = 0;
    
  
    for (int i = 0; i < b; i++) {
        sum += array[0][i];  
        sum += array[a-1][i]; 
    }

  
    for (int i = 1; i < a-1; i++) {
        sum += array[i][0];   
        sum += array[i][b-1]; 
    }
    
   
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);
    
    return 0;
}

