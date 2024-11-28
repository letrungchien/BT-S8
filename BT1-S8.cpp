#include<stdio.h>

int main(){
	
	int a;
	int b;
	int number[a][b];
	printf("moi ban nhap so dong\n");
	scanf("%d",&a);
	printf("moi ban nhap so cot\n");
	scanf("%d",&b);
	    for(int i=0;i<a;i++){
	    for(int j=0;j<b;j++){
		
	    	printf(" moi ban nhap number[a][b]\n");
			scanf("%d",&number[i][j]) ;
	    }
	    	 
		}
	for(int i=a-1;i>-1;i--){
	    for(int j=b-1;j>-1;j--){
		
	    	printf(" %d",number[i][j]);
	    }
	    printf("\n");	 
		}
	return 0;
}
