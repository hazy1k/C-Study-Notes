// 冒泡法实现从小到大排序
#include <stdio.h>

// 冒泡排序函数
void bubbleSort(int arr[], int n) // 参数为数组和数组大小
{
    int i, j;
    for (i = 0; i < n - 1; i++) // 外层循环控制排序趟数
    {
        for (j = 0; j < n - i - 1; j++) // 内层循环控制每趟排序的次数
        {
            if (arr[j] > arr[j + 1]) // 交换相邻元素，使较大的元素沿数组移动到右边
            {
                // 交换元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 主函数
int main()
{
    int arr[] = {5, 2, 8, 3, 9, 1, 7, 4, 6}; // 待排序数组
    int n = sizeof(arr) / sizeof(arr[0]); // 数组大小
    bubbleSort(arr, n); // 调用冒泡排序函数
    for (int i = 0; i < n; i++) // 输出排序结果
        printf("%d ", arr[i]);
    return 0;
}
