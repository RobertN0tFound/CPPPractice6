#include <iostream>
#include <stdio.h>
// В одномерном массиве найти минимальное, максимальное, поменять их местами. Посчитать кол-во положительных, отрицательных. Ввод массива с клавиатуры

int main()
{
    int a[30];
    int min, max;
    int n, i;
    int k = 0;
    int f = 0;

    setlocale(LC_ALL, "Russian");
    a1:printf("\nВведите длину массива >> ");
    scanf_s("%d", &n);
    if (n > 30 || n < 1)
    {
        printf("\nERROR"); goto a1;
    }
    for (i = 0; i < n; i++)
    {
        printf("\nВведите значение элемента a[%d] >> ", i);
        scanf_s("%d", &a[i]);
        if (a[i] > 0)
        {
            k = k + 1;
        }
        if (a[i] < 0)
        {
            f = f + 1;
        }
    }
    min = max = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i]) min = a[i];
        if (max < a[i]) max = a[i];
    }
    if (k > 0) printf("\nКол-во положительных: %d", k);
    else printf("\nПоложительных чисел нет");
    if (f > 0) printf("\nКол-во отрицательных: %d", f);
    else printf("\nОтрицательных чисел нет");
    printf("\nМаксимальное значение = %d Минимальное значение = %d", min, max);
}