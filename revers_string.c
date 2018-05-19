/* revers_string.c --- 
 * Filename: revers_string.c
 * Author: 郑丁方
 * Created: Sat May 19 08:48:22 2018 (+0800)
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
#include <string.h>

int main()
{
    char str[] = "hello, world";
    int len = strlen(str);
    char t;
    int i;

    for(i = 0; i < len / 2; ++i) {
        t = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = t;
    }
    printf("%s\n", str);
    return 0;
}
