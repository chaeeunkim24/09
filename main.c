#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 3, 4, 5};
    int flag_same = 1;

    for (i=0 ; i<SIZE ; i++)
    {
        if (a[i] != b[i])
        {
            flag_same = 0;
            printf("배열은 %d에서 다른 값을 가지며 flag가 %d입니다.\n", i, flag_same);
        }
        else
        {
            flag_same = 1;
            printf("배열은 %d에서 같은 값을 가지며 flag가 %d입니다.\n", i, flag_same);
        }

    }

    return 0;
}