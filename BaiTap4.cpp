#include <stdio.h>
using namespace std;

 int main(){
 	int r=3,c=4; 
 	int arr[3][4]={
	 {1,2,3,4 },
	 {5,6,7,8,},
	 {9,0,1,2,}
	 };
	 int max=arr[0][0];
	 for(int i=0;i<r;i++){
	 	for(int j=0;j<c;j++){
	 		if(arr[i][j]>max){
	 			max=arr[i][j];
			 }
		 }
	 }
	 
  printf("Phan tu lon nhat trong mang la: %d\n", max);
 	return 0;
 }
