#include<stdio.h>
#include<string.h>
int is_palindrome(const char *s)
{const char *i=s;
 const char*j=s+strlen(s)-1;
    while(i<j)
    {
              if (*i != *j) {
            return 0; 
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{char s[1001];
scanf("%s",s);
 
    if (is_palindrome(s)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}