#include<stdio.h>
int main(){
	int a,sum=0;
	printf("moi nhap vao gia tri cua mang hai chieu: ");
	scanf("%d",&a);
	int b=a;
	int array[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
 printf("Mang hai chieu:\n");
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");  
    }
    for(int j=0, i=a-1;j<=b-1;j++,i-- ){
    	printf("array[%d][%d] = %d\n",i, j,array[i][j]);
    	sum+=array[i][j];
	}
	printf("tong cac phan tu tren duong cheo phu la: %d",sum);
	return 0;
}
