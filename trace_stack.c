/* test.c --- 
 * Filename: test.c
 * Author: Hamlet zheng
 * Created: Thu May 10 23:52:25 2018 (+0800)
 */

/* Copyright Hamlet zheng.
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
#include <execinfo.h>
#include <stdlib.h>

void fun1();
void fun2();
void fun3();
void fun4();
void fun5();
void fun6();
void print_callstack();

int main()
{
	fun6();
	return 0;
}

void fun1()
{
	print_callstack();
}

void fun2()
{
	fun1();
}

void fun3()
{
	fun2();
}

void fun4()
{
	fun3();
}

void fun5()
{
	fun4();
}

void fun6()
{
	fun5();
}

void print_callstack()
{
	int size = 32;
	int i;
	void *array[32];
	int stack_num = backtrace(array, size);
	char **stacktrace = NULL;

	printf("%s begin\n", __func__);
	stacktrace = (char**)backtrace_symbols(array, stack_num);

	for (i = 0; i < stack_num; i++)
	{
            printf("%s\n", stacktrace[i]);
	}
	free(stacktrace);
	printf("%s end\n", __func__);
}
