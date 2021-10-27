#include <stdio.h>
#include <ctype.h>
char capitalize(char m);
int main()
{
    int i, k[] = { 1, 2, 5, 100 };
    char arr[] = { 'a', 'b', 'c', 'd', 'e','f' };
    for (i = 0; i < 4; i++)
    {
        arr[k[i]] = capitalize(arr[k[i]]);
    }
    for (i = 0; i < sizeof(arr); i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}
char capitalize(char m)
{
    m = toupper(m);
    return(m);
}
