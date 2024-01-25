#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);
    switch(c)
    {
    case 'a':
        printf("%c is vowel",c);
    break;
     case 'e':
        printf("%c is vowel",c);
    break;
     case 'i':
        printf("%c is vowel",c);
    break;
     case 'o':
        printf("%c is vowel",c);
    break;
     case 'u':
        printf("%c is vowel",c);
    break;
    default:
        printf("%c is not a vowel",c);
    break;
    }
    return 0;
}
/*output
Enter the character:s
s is not a vowel
---------------------------
Enter the character:u
u is vowel
*/
