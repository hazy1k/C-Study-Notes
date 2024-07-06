#include <stdio.h>

int main()
{
    float scores[20];
    float highest, lowest, average, sum = 0.0;

    for(int i = 0; i < 20; i++)
    {
        while(1)
        {
            printf("请输入第%d个学生的成绩：", i+1);
            if(scanf("%f", &scores[i]) == 1)
            {
                break;
            }
        }
    }

    highest = lowest = scores[0];

    for(int i = 0; i < 20; i++)
    {
        if(scores[i] > highest)
        {
            highest = scores[i];
        }
        if(scores[i] < lowest)
        {
            lowest = scores[i];
        }
        sum += scores[i];
    }

    average = sum / 20;

    printf("The highest score is: %.2f\n", highest);
    printf("The lowest score is: %.2f\n", lowest);
    printf("The average score is: %.2f\n", average);

    return 0;
}

