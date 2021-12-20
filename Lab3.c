#include <stdio.h>
#include <ctype.h>

char capitalize(char symbol);
int main()
{
    //Array to know which element of array with letters to capitalize
    int i, NumArr[] = { 1, 2, 5, 100 }, NumOfElements;
    char LetterArr[] = { 'a', 'b', 'c', 'd', 'e','f' };

    for (i = 0; NumOfElements < 4; i++)
    {
        //Capitalizing elements which have the same number as number of element we take from NumArr
        LetterArr[NumArr[i]] = capitalize(LetterArr[k[i]]);
    }

    for (i = 0; i < sizeof(LetterArr); i++)
    {
        printf("%c", LetterArr[i]);
    }
    return 0;
}

char capitalize(char symbol)
{
    return( toupper(m));
}
