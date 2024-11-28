#include<stdio.h>

int main(){
	int a;
	int numbers[a][a];
	printf("moi ban nhap vao so nguyen\n");
	scanf("%d",&a);
	if(a>1){
		for(int i=0;i<a;i++){
		  	for(int j=0;j<a;j++){
		  		printf("moi ban nhap gia tri cua ma tran\n");
		  		 scanf("%d",&numbers[i][j]);
			  }	
		}
	}
	else{
		printf("nhap khong hop le\n");
	}
	for(int i=0;i<a;i++){
		  	for(int j=0;j<a;j++){
		  		printf("  %d",numbers[i][j]);
			  }	
			  printf("\n");
		}
	return 0;
}
