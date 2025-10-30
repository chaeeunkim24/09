#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, char *argv[])
int main(void)
{
    int grade[5];
    int i;
    int i, average, sum;
    int grade[SIZE];

    grade[0] = 10;
    grade[1] = 20;
    grade[2] = 30;
    grade[3] = 40;
    grade[4] = 50;
    sum = 0;

    for (i=0 ; i<SIZE ; i++)
    {
        printf("학생 성적을 입력하세요: ");
        scanf("%d", &grade[i]);
        sum += grade[i];
    }

    for (i = 0 ; i < 5 ; i++)
        printf("grade[%d] = %d\n", i, grade[i]);
    average = sum / SIZE;
    printf("성적 평균: %d\n", average);

    return 0;
}
}