#include<stdio.h>
#include<string.h>

#define MAX 100

int main(){

    int i , len;
    char s[MAX] , s1[MAX];
    printf("Enter the string\n");
    scanf("%s", s);
    printf(" -- Functions--- \n 1. Length \n 2. Concatenation\n 3. String Copy\n 4. String Reverse\n 5. Change String \n");
    while(1){
        printf("Enter your option. Press 6 to exit ");
        scanf("%d", &i);
        switch(i){
            case 1: len = strlen(s) ;
                    printf("Length of String = %d\n", len);
                    break ;
            case 2: printf("Enter the string to be concatenated ");
                    scanf("%s", s1) ; 
                    strcat(s1, s);
                    printf("Final String = %s\n", s1);
                    break ; 
            case 3: strcpy(s1, s) ;
                    printf("Second string = %s\n", s1);
                    break;
            case 4: strrev(s) ;
                    printf("Final String = %s\n", s);
                    break ;
            case 5: printf("Enter  the string \n");
                    scanf("%s", s);
                    break ; 
            case 6: return 0;
        }
    }
    return 0 ;
}
