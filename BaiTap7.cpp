#include<stdio.h>
int main(){
	int a;
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
    	printf("cac phan tu tren duong cheo phu la: \n");
    for(int i=0;i<a;i++ ){
    	printf("array[%d] = %d\n",i,array[i][i]);
    	
	
	}
	return 0;
}
