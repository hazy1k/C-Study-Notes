// ð�ݷ�ʵ�ִ�С��������
#include <stdio.h>

// ð��������
void bubbleSort(int arr[], int n) // ����Ϊ����������С
{
    int i, j;
    for (i = 0; i < n - 1; i++) // ���ѭ��������������
    {
        for (j = 0; j < n - i - 1; j++) // �ڲ�ѭ������ÿ������Ĵ���
        {
            if (arr[j] > arr[j + 1]) // ��������Ԫ�أ�ʹ�ϴ��Ԫ���������ƶ����ұ�
            {
                // ����Ԫ��
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// ������
int main()
{
    int arr[] = {5, 2, 8, 3, 9, 1, 7, 4, 6}; // ����������
    int n = sizeof(arr) / sizeof(arr[0]); // �����С
    bubbleSort(arr, n); // ����ð��������
    for (int i = 0; i < n; i++) // ���������
        printf("%d ", arr[i]);
    return 0;
}
