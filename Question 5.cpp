#include <stdio.h>
int main(){
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	for (int j=1;j<=n;j++){
		for (int i = 1; i <= n - j; i++) {
            printf(" "); 
        }
		for (int i=1;i<=2*j-1;i++){
			printf("*");
	}
	printf("\n");
	}
	for (int j=n-1;j>=1;j--){
		for (int i = 1; i <= n - j; i++) {
            printf(" "); 
        }
		for (int i=1;i<=2*j-1;i++){
			printf("*");
	}
	printf("\n");
    }
	return 0;
}


