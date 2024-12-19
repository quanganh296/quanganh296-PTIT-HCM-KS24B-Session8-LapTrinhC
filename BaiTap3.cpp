#include <stdio.h>
using namespace std;

 int main(){
 	int n;
 	printf("Nhap kich thuoc cua ma tran vuong : ");
 	scanf("%d",&n);
 	int arr[n][n];
 	printf("Nhap cac gia tri cua ma tran (%d x %d):\n", n, n);
 	for(int i=0;i<n;i++){
	 for(int j=0;j<n;j++){
	 	 printf("arr[%d][%d] = ", i, j);
	 	scanf("%d",&arr[i][j]);
	 }	  
 }
 printf("Ma tran vuong vua nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %d", arr[i][j]); 
        }
        printf("\n"); 
    }

 	return 0;
 }
