#include "caicMatrix.h"

void addMatrix(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS]){
	
	int i;
	int j;
	
	for ( i=0; i < ROWS ; i++){
		for ( j=0;j<COLS;j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	return ;
}



void printMatrix (int A[ROWS][COLS]){
	int i;
	int j;
	
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLS;j++){
			printf("%d ",A[i][j]);
		}
		
		printf("\n");
	}
	
	return;
	
}
