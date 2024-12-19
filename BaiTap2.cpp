#include <stdio.h>
using namespace std;

 int main(){
 	int n;
 	scanf("%d",&n);
 	int arr[5]={1,2,3,4,5};
 	for(int i=0;i<5;i++)
 	
	  if (arr[i]==n){
	  
 	printf("Vi tri phan tu trong mang la: %d ",i);
 	break;
	 }
 
 else {
 	printf("Phan tu khong ton tai trong mang");
 	break;
 }

 	return 0;
 }
