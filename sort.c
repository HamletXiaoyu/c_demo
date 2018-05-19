/* bubble_sort.c --- 
 * Filename: bubble_sort.c
 * Author: 郑丁方
 * Created: Sat May 19 09:21:29 2018 (+0800)
 */

/* Copyright 郑丁方.
 * 
 * 允许免费使用，拷贝，修改，发布，但在所有的拷贝上必须保留上述
 * copyright部分和本使用声明部分，除非显示声明，copyright的持有者
 * 不得作为再发布软件的广告。copyright的持有者对使用本软件的适用范围不做任何声明，
 * 
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
 * EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE
 * OF THIS SOFTWARE.
 */

#include <stdio.h>

void bubble_sort(int arr[], int n)
{
    int i, j;
    int temp;
    for (i = 1; i < n; ++i)
        for (j = 0; j < n - i; ++j) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
}

void select_sort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; ++i) {
        int id = i;
        for (j = i + 1; j < n; ++j) {
            if (a[j] < a[id]) {
                id = j;
            }
        }
        int temp = a[i];
        a[i] = a[id];
        a[id] = temp;
    }
}

void insert_sort(int a[], int n)
{
    int i, j;
    int pre, cur;
    for (i = 1; i < n; ++i) {
        pre = i - 1;
        cur = a[i];
        while (pre >= 0 && a[pre] > cur) {
            a[pre+1] = a[pre];
            pre--;
        }
        a[pre + 1] = cur;
    }
}

void quick_sort(int a[], int low, int high)
{
    int left = low, right = high, key = a[low];
    if (left >= right)
        return;
    while (left != right) {
        while (left != right && a[right] > key)
            right--;
        a[left] = a[right];
        while (left != right && a[left] < key)
            left++;
        a[right] = a[left];
    }
    a[left] = key;
    quick_sort(a, low, left-1);
    quick_sort(a, left+1, high);
}


int main()
{
    int a[] = {3, 1, 5, 7, 2, 4, 9, 6, 10, 8};

    quick_sort(a, 0, 9);
    for(int i=0; i<10; ++i)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
