// 使用冒泡法将10个数按从小到大排序

#include <stdio.h>

int main()
{
    // 定义变量和数组
    int arr[10] = {};
    int i, j, temp;

    printf("Enter 10 numbers: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);

    // 使用冒泡排序
    // 具体是怎么实现的呢？
    /*
     我们可以先从第一个元素开始，和后面的元素比较，如果后面的元素比前面的元素小，就交换位置。
     然后再从第二个元素开始，和后面的元素比较，直到最后一个元素。
     这样，第一次排序后，第二个元素就在第一个位置，第三个元素就在第二个位置，以此类推。
    直到最后一个元素排序完成。
    */

    for (i = 0; i < 10; i++) // 外层循环控制排序趟数
    {
        for (j = 0; j < 10 - i - 1; j++) // 内层循环控制每趟排序的元素个数
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: \n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
