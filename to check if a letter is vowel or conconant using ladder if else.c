//is vowel or consonant
#include<stdio.h>
int main() {
    char ch = 'A';
    printf("Enter if chacacter ch is vowel or not");
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'A' || ch == 'e'|| ch == 'E'
       || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
       || ch == 'u' || ch == 'U')
       {
             printf(" The character %c is a vowel.\n", ch);
       }
       else
       {
           printf("The character %c is  a consonant. \n", ch);
       }
       return 0;
}
     
    
