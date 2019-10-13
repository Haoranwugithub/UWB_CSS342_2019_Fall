the second delete at test.cpp:15 fails

```bash
pdu:~/teaching/UWB_2019_Fall_CSS342/repo/UWB_CSS342_2019_Fall/class4/default_copy_constructor$ valgrind --tool=memcheck --leak-check=yes --show-leak-kinds=definite ./test.x
==60001== Memcheck, a memory error detector
==60001== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==60001== Using Valgrind-3.16.0.GIT and LibVEX; rerun with -h for copyright info
==60001== Command: ./test.x
==60001==
==60001== Invalid free() / delete / delete[] / realloc()
==60001==    at 0x1000B4463: free (in /usr/local/Cellar/valgrind/HEAD-fe7ec1e/lib/valgrind/vgpreload_memcheck-amd64-darwin.so)
==60001==    by 0x100006ACB: MyArray<int>::~MyArray() (myArray.h:53)
==60001==    by 0x100001674: MyArray<int>::~MyArray() (myArray.h:52)
==60001==    by 0x100001698: MyArray<int>::~MyArray() (myArray.h:52)
==60001==    by 0x10000105C: main (test.cpp:15)
==60001==  Address 0x100df2920 is 0 bytes inside a block of size 20 free'd
==60001==    at 0x1000B4463: free (in /usr/local/Cellar/valgrind/HEAD-fe7ec1e/lib/valgrind/vgpreload_memcheck-amd64-darwin.so)
==60001==    by 0x100006ACB: MyArray<int>::~MyArray() (myArray.h:53)
==60001==    by 0x100001674: MyArray<int>::~MyArray() (myArray.h:52)
==60001==    by 0x100001698: MyArray<int>::~MyArray() (myArray.h:52)
==60001==    by 0x10000103D: main (test.cpp:13)
==60001==  Block was alloc'd at
==60001==    at 0x1000B4086: malloc (in /usr/local/Cellar/valgrind/HEAD-fe7ec1e/lib/valgrind/vgpreload_memcheck-amd64-darwin.so)
==60001==    by 0x100181627: operator new(unsigned long) (in /usr/lib/libc++abi.dylib)
==60001==    by 0x100006B54: MyArray<int>::MyArray(int) (myArray.h:48)
==60001==    by 0x1000010AA: MyArray<int>::MyArray(int) (myArray.h:47)
==60001==    by 0x100000FB5: main (test.cpp:7)
==60001==
```
