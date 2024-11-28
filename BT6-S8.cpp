#include<stdio.h>

int main(){
		int a;
		int tong=0;
	int numbers[a][a];
	printf("moi ban nhap vao kich thuoc mang\n");
	scanf("%d",&a);

		for(int i=0;i<a;i++){
		  	for(int j=0;j<a;j++){
		  		printf("moi ban nhap gia tri cua ma tran\n");
		  		 scanf("%d",&numbers[i][j]);
			  }	
		}
		printf("cac gia tri duong cheo chinh la :");
	for(int i=0;i<a;i++){
		printf(" %d",numbers[i][i]);
		tong=tong+numbers[i][i];
	}
    printf("tong cua duong cheo chinh la %d \n",tong);
	return 0;
}
