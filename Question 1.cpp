#include<stdio.h>
int main(){
	int n1,n2;
	printf("Enter n1: \n");
	scanf("%d",&n1);
	printf("Enter n2: \n");
	scanf("%d",&n2);
	printf("\n");
	for( int i=n1;i<=n2;i++){
	int isprime=1;
		 if (i <= 1) {
            continue;
        }
		for (int j=2;j*j<=i;j++){
			if(i%j==0){
				isprime=0;
				break;
			}
		}
		if(isprime){
				printf("%d\n",i);
	    }
	}
	return 0;
}
