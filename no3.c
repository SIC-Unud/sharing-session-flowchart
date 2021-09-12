//Mencetak deret bilangan dari 1 sampai dengan 10
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int langkah = 1;
    for (langkah; langkah < 10; langkah++)
    {
        printf("%d, ", langkah);
    }
    printf("%d", langkah);
}