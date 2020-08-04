// to count the number of repetitive characters in the given string, one can either try the bruteforce approach for comparing each letter in string. Another approach could be to use a hash table.
// The first approach has higher complexity whereas the second one has additional space complexity.
// the following approach basically maintains a binary number and set bits if the letter is found.

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
