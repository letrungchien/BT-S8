#include<stdio.h>
 
 int main(){
 	  int numbers[3][3];
 	 int tongfull =0;
 	 int tongbien;
 	for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
		
	    	printf(" moi ban nhap numbers[3][3]\n");
			scanf("%d",&numbers[i][j]) ;
	    }
	    	 
		}
 	for(int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
		  tongfull=tongfull+numbers[i][j];	
	    }
	    	 
		}
 	tongbien=tongfull-numbers[1][1];
 	printf("tong gia tri bien ma tran la %d\n",tongbien);
 	return 0;
 }
