#include<stdio.h>
int main(){
	int arr[3][4]={
	{1,2,3,4},
	{5,6,1,8},
	{9,0,1,2}
	};
	int count=0;
	int temp=1;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++){
			if(arr[i][j]==temp){
				count++;
				
				
			}
		}
	}
      printf("so %d voi so lan xuat hien la %d lan",temp,count);
	return 0;
}
