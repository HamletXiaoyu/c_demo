# C 语言功能示例

## 打印栈信息

```shell
$ gcc test.c -o test

$ ls

test	test.c

$ ./test 

print_callstack begin

0   test                                0x0000000104b24e45 print_callstack + 53

1   test                                0x0000000104b24db9 fun1 + 9

2   test                                0x0000000104b24dc9 fun2 + 9

3   test                                0x0000000104b24dd9 fun3 + 9

4   test                                0x0000000104b24de9 fun4 + 9

5   test                                0x0000000104b24df9 fun5 + 9

6   test                                0x0000000104b24e09 fun6 + 9

7   test                                0x0000000104b24da4 main + 20

8   libdyld.dylib                       0x00007fffc4d7f235 start + 1

print_callstack end
```



## Sort

* bubble_sort

  ![bubble](./img/bubble.gif)

* insert_sort

  ![bubble](./img/insert.gif)

* select_sort

  ![bubble](./img/select.gif)

* quick_sort

  ![bubble](./img/quick.gif)

