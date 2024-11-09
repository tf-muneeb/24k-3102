# include <stdio.h>
int main(){
	int result[3][3] =
	{
	{0,0,0},
	{0,0,0},
	{0,0,0}
	};
	int myarr1[3][3] = {{1,3,0},{2,4,1},{3,5,2}};
	int myarr2[3][3] = {{3,1,2},{2,0,1},{3,3,5}};
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			for (int k=0;k<3;k++){
				result[i][j] += myarr1[i][k] * myarr2[k][j];
			}
		}
	}
	for (int i=0;i<3;i++){
		printf("\n");
		for (int j=0;j<3;j++){
				printf("%d\t", result[i][j]);
			}
			printf("\n");
		}
	return 0;
}
