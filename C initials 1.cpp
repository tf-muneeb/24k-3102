/*#include<stdio.h>
#include<math.h>
#include <stdio.h>
float myPow(float base, int exponent) {
    float result = 1.0;
    // If the exponent is positive, multiply result by base exponent times
    if (exponent > 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    }
    // If the exponent is negative, divide result by base exponent times
    else if (exponent < 0) {
        for (int i = 0; i < -exponent; i++) {
            result /= base;
        }
    }
    // If exponent is 0, result stays 1 (any number raised to 0 is 1)return result;
}
int main() {
    float base;
    int exponent;
    printf("Enter the base: ");
    scanf("%f", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    float power = myPow(base, exponent);
    printf("%.2f raised to the power of %d is %.5f\n", base, exponent, power);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    printf("\n\n\t\Studytonight - Best place to learn\n\n\n");      
    int num;
    printf("\nHello world!\nWelcome to Studytonight: Best place to learn\n");
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}*/

/*#include<stdio.h>
int main(){
	char c;
	printf("Enter a character: ");
	scanf("%c",&c);
	printf("The ASCII value of %c is %d\n",c,c);
	return 0;
}*/

/* #include<stdio.h>
#include<ctype.h> // to use system defined function islower & toupper

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    char alphabet;
    printf("Enter an alphabet : ");
    putchar('\n');  // to move to next Line

    alphabet=getchar();

    printf("\n\nReverse case of %c is :  ",alphabet);

    if(islower(alphabet))
        putchar(toupper(alphabet));

    else 
        // must be an uppercase character
        printf("%c",tolower(alphabet)) ;

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}*/


/*#include<stdio.h>
#include<conio.h>

void main()
{
    int x = 10, y = 15, temp;
    temp = x;
    x = y;
    y = temp;
    printf("x = %d and y = %d", x, y);
    getch();
}*/

