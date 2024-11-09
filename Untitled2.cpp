//POINTERS:
//1.
/*#include<stdio.h>
int main (){
	int a,b;
	int *ptr,*ptr2;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	ptr=&a;
	ptr2=&b;
	if (*ptr>*ptr2){
		printf("%d is maximum",*ptr);
	}else {
		printf("%d is maximum",*ptr2);
	}
	return 0;
}*/
//2.
/*#include <stdio.h>
int main() {
    char alphabet = 'A';
    char *ptr = &alphabet; 
	printf("Uppercase Alphabets:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c ", *ptr);
        (*ptr)++; 
    }
	printf("\n\nLowercase Alphabets:\n");
    alphabet = 'a';
    for (int i = 0; i < 26; i++) {
        printf("%c ", *ptr);
        (*ptr)++;
    }
    printf("\n");
    return 0;
}*/





// ARRAYS:
//1.
/*#include<stdio.h>
int main(){
	int numReq;
	int r = 0;
	printf("Enter the number of elements you want in your array: ");
	scanf("%d",&numReq);
	if (numReq <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
	int values[numReq];
    printf("Enter integers: ");
    for(int i = 0; i < numReq ; ++i) {
        scanf("%d", &values[i]);
    } 
    int duplicateFound = 0;
    for (int i = 0; i < numReq; ++i) {
        for (int j = i + 1; j < numReq; ++j) {
            if (values[i] == values[j]) {
                printf("%d is occurring more than once.\n", values[i]);
                duplicateFound = 1;
                break; 
            }
        }
        if (duplicateFound) break;
    }
    if (!duplicateFound) {
        printf("No duplicates found.\n");
    }
	return 0;
}*/
//2.
/*#include<stdio.h>
int main(){
	int numReq;
	int r = 0;
	printf("Enter the number of elements you want in your array: ");
	scanf("%d",&numReq);
	if (numReq <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
	int values[numReq];
    printf("Enter integers: ");
    for(int i = 0; i < numReq ; ++i) {
        scanf("%d", &values[i]);
    } 
    for(int i = 0; i < numReq ; ++i) {
	    if(values[i]>r){
	    	r=values[i];
		} 
    }
    printf("The Largest number is: %d\n",r);
    return 0;
}*/
//3.
/*#include<stdio.h>
int main(){
	int n,arr[50],element;
	printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter integers: ");
    for(int i = 0; i < n ; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the new element to insert it at the end: ");
    scanf("%d", &element);
    arr[n]=element;
    n++;
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}*/
//4.
/*#include <stdio.h>
int main() {
    char word[50];
    printf("Enter your word: ");
    scanf("%49s", word);
    int length = 0;
    while (word[length] != '\0') {
        length++;
    }
    int isPalindrome = 1;
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }
    return 0;
}*/
//5.
/*#include<stdio.h>
int main(){
	int numReq;
	printf("Enter the number of elements you want in your array: ");
	scanf("%d",&numReq);
	if (numReq <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
	int values[numReq];
	int values2[numReq];
    int values3[numReq*2];
    printf("Enter integers: ");
    for(int i = 0; i < numReq ; ++i) {
        scanf("%d", &values[i]);
        values2[i]=values[i];
    } 
    for(int i = 0; i < numReq ; ++i){
    	values3[i]=values[i];
	}
	for(int i = 0 ; i < numReq ; ++i){
		values3[numReq+i]=values2[i];
	}
	printf("Array 3: ");
    for (int i = 0; i < numReq*2 ; ++i) {
        printf("%d ", values3[i]);
    }
    return 0;
}*/
//6.
/*#include<stdio.h>
int main(){
	int numReq;
	printf("Enter the number of elements you want in your array: ");
	scanf("%d",&numReq);
	if (numReq <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
	int values[numReq];
	int values2[numReq];
    int values3[numReq*2];
    printf("Enter integers: ");
    for(int i = 0; i < numReq ; ++i) {
        scanf("%d", &values[i]);
    } 
    for(int i = 0; i < numReq ; ++i) {
        values2[i]=values[numReq-i-1];
    }
    for(int i = 0; i < numReq ; ++i){
    	values3[i]=values[i];
	}
	for(int i = 0 ; i < numReq ; ++i){
		values3[numReq+i]=values2[i];
	}
	printf("Array 3: ");
    for (int i = 0; i < numReq*2 ; ++i) {
        printf("%d ", values3[i]);
    }
    return 0;
}*/
//7.
/*#include<stdio.h>
int main(){
	int numReq;
	printf("Enter the number of elements you want in your array: ");
	scanf("%d",&numReq);
	if (numReq <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
	int values[numReq];
	int values2[numReq];
    int sameCount=0;
    printf("Enter integers: ");
    for(int i = 0; i < numReq ; ++i) {
        scanf("%d", &values[i]);
    } 
    for (int i = 0; i < numReq; ++i) {
        for (int j = i + 1; j < numReq; ++j) {
            if (values[i] == values[j]) {
                values2[sameCount++]=i;
                values[j]=-9999;
            }
        }
    }
    for (int i = 0; i < numReq; ++i) {
        if (values[i] == -9999) {
            continue;
        }
        for (int j = i + 1; j <numReq; ++j) {
            if (values[i] == values[j]) {
                values2[sameCount++] = j;
                values[j] = -9999;
            }
        }
    }
    if (sameCount > 0) {
        printf("Same integers: ");
        for (int i = 0; i < sameCount; ++i) {
            printf("%d ", values2[i]);
        }
    } else {
        printf("No same integers found.\n");
    }
	return 0;
}*/
/*#include<stdio.h>
int main(){
	int numReq;
	printf("Enter the number of elements you want in your array: ");
	scanf("%d",&numReq);
	if (numReq <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
	int values[numReq];
	int values2[numReq];
    int sameCount=0;
    printf("Enter integers: ");
    for(int i = 0; i < numReq ; ++i) {
        scanf("%d", &values[i]);
    } 
   
    for (int i = 0; i < numReq; ++i) {
        for (int j = i + 1; j < numReq; ++j) {
            if (values[i] == values[j]) {
                values2[sameCount++]=i;
                break;
            }
        }
    }
    
    if (sameCount > 0) {
        printf("same integers: ");
        for (int i = 0; i < sameCount; ++i) {
            printf("%d ", values2[i]);
        }
    } else {
        printf("No same integers found.\n");
    }
	return 0;
}*/






//STRINGS:
//1.
/*#include <stdio.h>
#include<string.h>
void vowels(char str[]);
int main(){
	char str[]="Muneeb Mustafa";
	vowels(str);
	return 0;
}
void vowels(char str[]){
	for (int i=0; str[i]!='\0';i++){
		if (str[i]=='a'){
			str[i]='A';
		} else if (str[i]=='i'){
			str[i]='I';
		}else if (str[i]=='e'){
			str[i]='E';
		}else if (str[i]=='o'){
			str[i]='O';
		}else if (str[i]=='u'){
			str[i]='U';
		}
	} puts(str);
}*/
//2.
/*#include <stdio.h>
void letter(char str[]);
int main() {
    char str[] = "Muneeb Mustafa";
    letter(str);
    printf("New string: %s\n", str);
    return 0;
}
void letter(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A'; 
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a'; 
        }
    }
}*/
//3.
/*#include <stdio.h>
void find_highest_frequency(char str[]) {
    int frequency[26] = {0};  
    int max_freq = 0;
    char max_char; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            frequency[str[i] - 'a']++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            frequency[str[i] - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > max_freq) {
            max_freq = frequency[i];
            max_char = 'a' + i;
        }
    }
    printf("The highest frequency character is '%c' with a frequency of %d.\n", max_char, max_freq);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    find_highest_frequency(str);
    return 0;
}*/
//4.
/*#include <stdio.h>
void removeSpaces(char str[]) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    removeSpaces(str);
    printf("String after removing spaces: %s\n", str);
    return 0;
}*/





//STRUCTURES:
//1.
/*#include <stdio.h>
struct address {
	int houseNo;
	int blockNo;
	char city[100];
	char state[100];
};
void printAdd(struct address add);
int main (){
	int num;
	printf("How much data entries you want? \n");
	scanf("%d",&num);
	printf("\n");
	struct address add[num];
	int i=0; 
	while (i<num) {
	printf("Enter your house number: \n");
	scanf("%d",&add[i].houseNo);
	printf("Enter your block number: \n");
	scanf("%d",&add[i].blockNo);
	printf("Enter your city: \n");
	scanf("%s",add[i].city);
	printf("Enter your state: \n");
	scanf("%s",add[i].state);
	printAdd(add[i]);
	i++;
    }
}
void printAdd(struct address add){
	printf("\n");
	printf("Hi! You live in house:%d in block:%d in city:%s in the state:%s\n",add.houseNo,add.blockNo,add.city,add.state);
    printf("\n");
}*/ //alternative:
/*#include <stdio.h>
#include<string.h>
struct address {
	char name[100];
	int houseNo;
	int blockNo;
	char city[100];
	char state[100];
};
void printAdd(struct address add);
int main (){
	int num;
	printf("How much data entries you want? \n");
	scanf("%d",&num);
	printf("\n");
	struct address add[num];
	int i=0; 
	while (i<num) {
	printf("New Record\n");	
	printf("Enter your name: \n");
	scanf("%s",add[i].name);
	printf("Enter your house number: \n");
	scanf("%d",&add[i].houseNo);
	printf("Enter your block number: \n");
	scanf("%d",&add[i].blockNo);
	printf("Enter your city: \n");
	scanf("%s",add[i].city);
	printf("Enter your state: \n");
	scanf("%s",add[i].state);
	printf("\n");
	i++;
    }
    getchar();
	char nameEntered [100];
    printf("Your name? \n");
    fgets(nameEntered,sizeof(nameEntered),stdin);
    nameEntered[strcspn(nameEntered, "\n")] = 0;
    int found=0;
    for (int j=0;j<num;j++){
    	if(strcmp(nameEntered, add[j].name) == 0){
    		printAdd(add[j]); 
    		found=1;
    		break;
		} 
	}
	if (!found){
			printf("No Record found!\n");
		}
    return 0;
}
void printAdd(struct address add){
	printf("\n");
	printf("Hi %s! You live in house:%d in block:%d in city:%s in the state:%s\n",add.name,add.houseNo,add.blockNo,add.city,add.state);
    printf("\n");
}*/





//FILING INPUT OUTPUT:
//1.
/*#include <stdio.h>
int main(){
	FILE *fptr; // same for integers but %d for them!
	/*
	fptr = fopen("text.txt","r");
	char n;
	n=fgetc(fptr);
	while (n!=EOF){      // END OF FILE!!
		printf("%c",n);
		n=fgetc(fptr);
	}
	printf("\n");
	*/
	/*
	fptr = fopen("text.txt","w");
	char n;
	fprintf(fptr,"m",n);
	fprintf(fptr,"u",n);
	fprintf(fptr,"s",n);
	fprintf(fptr,"t",n);
	fprintf(fptr,"a",n);
	fprintf(fptr,"f",n);
	fprintf(fptr,"a",n);
	*/
	/*
	fptr = fopen("text.txt","w");
	char n;
	fputc('m',fptr);
	*/
	/*fptr = fopen("text.txt","r");
	char n;
	printf("%c",fgetc(fptr));
	*/
	/*
	fptr = fopen("text.txt","r");
	char n;
	fscanf(fptr,"%c",&n);
	printf("%c",n);
	fscanf(fptr,"%c",&n);
	printf("%c",n);
	fscanf(fptr,"%c",&n);
	printf("%c",n);
	fscanf(fptr,"%c",&n);
	printf("%c",n);
	fscanf(fptr,"%c",&n);
	printf("%c",n);
    fscanf(fptr,"%c",&n);
	printf("%c",n);
	*/ /*
	fclose(fptr);
	return 0;
}*/
//2.
/*#include <stdio.h>
int main(){
	FILE *fptr; 
	fptr = fopen("student.txt","w");
	char name[100];
	int age;
	float cgpa;
	printf("Enter your name: ");
	scanf("%s",name);
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Enter your cgpa: ");
	scanf("%f",&cgpa);
	fprintf(fptr,"student name: %s\n",name);
	fprintf(fptr,"student age: %d\n",age);
	fprintf(fptr,"student cgpa: %.3f",cgpa);
	fclose(fptr);
	return 0;
}*/
//3.
/*#include<stdio.h>
int main(){
	FILE *fptr; 
	fptr = fopen("student.txt","r");
	char n[100];
	fscanf(fptr,"%s",n);
	printf("%s",n);
	fclose(fptr);
	return 0;
}*/
//4.
/*#include<stdio.h>
int main(){
	FILE *fptr; 
	fptr = fopen("text.txt","r");
	if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    char n[100];
    int x = 0;
    int i = 0;
    while ((n[i] = fgetc(fptr)) != EOF && i < 99) {
        i++;
    }
    n[i] = '\0';
    fclose(fptr); 
    for (i = 0; n[i] != '\0'; i++) {
        if (n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u' ||
            n[i] == 'A' || n[i] == 'E' || n[i] == 'I' || n[i] == 'O' || n[i] == 'U') {
            x++;
        }
    }
	fptr = fopen("text.txt","w");
	if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fprintf(fptr, "%d", x); 
    fclose(fptr);
    printf("Vowel count: %d\n", x);
	return 0;
}*/
//5.
/*#include <stdio.h>
int main(){
	FILE *fptr; 
	fptr = fopen("student.txt","w");
	char name[100];
	int age;
	float cgpa;
	for (int i=0;i<=4;i++){
	printf("Enter your name: ");
	scanf("%s",name);
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Enter your cgpa: ");
	scanf("%f",&cgpa);
	fprintf(fptr,"\n");
	fprintf(fptr,"student name: %s\n",name);
	fprintf(fptr,"student age: %d\n",age);
	fprintf(fptr,"student cgpa: %.3f\n\n",cgpa);
    }
	fclose(fptr);
	return 0;
}*/







//DYNAMIC MEMORY ALLOCATION:
//1.
/*#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
float *ptr;
	ptr = (float*) malloc(5*sizeof(float));    // use of malloc!
	ptr[0]=1;
	ptr[1]=3;
	ptr[2]=5;
	ptr[3]=7;
	ptr[4]=9;
	for (int i=0;i<5;i++){
		printf("%f",ptr[i]);
	}
	return 0;*/
	/*
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	float *ptr;
	ptr = (float*) calloc(5,sizeof(float));    // use of calloc!
	for (int i=0;i<n;i++){
		printf("%f\n",ptr[i]);
	}
	return 0;*/
	/*
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	float *ptr;
	ptr = (float*) calloc(5,sizeof(float));    // use of calloc!
	for (int i=0;i<n;i++){
		printf("%f\n",ptr[i]);
	}
	free(ptr);
	ptr = (float*) calloc(2,sizeof(float)); 
	for (int i=0;i<2;i++){
		printf("%f\n",ptr[i]);
	} 
	return 0;
	*/
/*#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    ptr = calloc(5, sizeof(int)); 
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter number(5): ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]);
    }
    ptr = realloc(ptr, 8 * sizeof(int));  
    if (ptr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }
    printf("Enter 3 more numbers: ");
    for (int i = 5; i < 8; i++) {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 8; i++) {
        printf("Your number is %d\n", ptr[i]);
    }
    free(ptr);  
    return 0;
}*/
//2.
/*
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    int n = 500;
    ptr = (int*) calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;
}*/
/*
#include <stdio.h>
void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array: ");
    printArray(arr, n);
    sortArray(arr, n);
    printf("Sorted Array in Ascending Order: ");
    printArray(arr, n);
    return 0;
}*/
/*
#include <stdio.h>
int main(){
	int temp;
	int n;
	printf("Enter number of elements you want in your array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d the elements: \n",n); 
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("Orignal: ");
	for (int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for (int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("sorted: ");
	for (int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}*/
/*#include<stdio.h>
int main(){
	int length=0;
	char word[50];
	printf("Enter your word: ");
	scanf("%s",word);
	for(int i=0;i<'\0';i++){
		length ++;
	}
	int palindrome=1;
	for(int i=0;i<length/2;i++){
		for (int j=length-1;j=length-i-1;j++){
			if(word[j]==word[i]){
				palindrome=0;
				break;
			} 
		}
	} if (palindrome){
		printf("\nYour word is palindrome!");
	} else{
		printf("\nYour word is not palindrome!");
	}
	return 0;
}*/
