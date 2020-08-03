#include <stdio.h>
#include <string.h>

int main()
{
    char string_[100];
    int val;
    int checker = 0;
    scanf("%s", string_);
    
    for(int i = 0; string_[i]!= '\0';i++)
    {
        val = string_[i] - 'a';
        if( (checker & (1<<val)) > 0)
        {
            printf("%c ", string_[i]);
        }
        else
        {
            checker |= 1<<val;
        }
    }

    return 0;
}
