# paramsum
- [ ] Corrected

## Subject:
```
Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>
```

## Results
```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z1r4p25.42.us.org
Darwin 17.4.0 x86_64
$> date
Fri Sep 21 10:57:07 PDT 2018
$> gcc --version
Configured with: --prefix=/Library/Developer/CommandLineTools/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 9.0.0 (clang-900.0.39.2)
Target: x86_64-apple-darwin17.4.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
$> clang --version
Apple LLVM version 9.0.0 (clang-900.0.39.2)
Target: x86_64-apple-darwin17.4.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin

= User files collection ========================================================
Collecting user files from Vogsphere
Repository URL: auto-exam/2018/c-exam-alone-in-the-dark-beginner/exam_20180921/dstolz

= Git history ==================================================================
$> git -C /var/folders/bj/z289pnxx6ys5wqswm9fg6j940000gp/T/tmp4wcJbI/user log --pretty='%H - %an, %ad : %s'
6150c855c4dadb9cb162f960e3a7c9f6ca5d4df2 - Exam 42, Fri Sep 21 10:56:48 2018 -0700 : Submitting level 3
8f200a0c3d03c1e6e9ca9d097f4d5a6e569b84da - Exam 42, Fri Sep 21 09:55:36 2018 -0700 : Submitting level 2
1a5037fa1f93984868c68b8805507a361607b0bb - Exam 42, Fri Sep 21 09:23:20 2018 -0700 : Finished level 1
cb0bba95777b1e9c6c7ea5e0c50a623c8ad1b61f - Exam 42, Fri Sep 21 09:13:59 2018 -0700 : Finished level 0

= Collected files ==========================================
$> ls -lAR /var/folders/bj/z289pnxx6ys5wqswm9fg6j940000gp/T/tmp4wcJbI/user
total 8
-rw-r--r--  1 deepthought  deepthought  1005 Sep 21 10:57 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought   102 Sep 21 10:57 ft_putstr
drwxr-xr-x  4 deepthought  deepthought   136 Sep 21 10:57 maff_alpha
drwxr-xr-x  3 deepthought  deepthought   102 Sep 21 10:57 max
drwxr-xr-x  3 deepthought  deepthought   102 Sep 21 10:57 paramsum

/var/folders/bj/z289pnxx6ys5wqswm9fg6j940000gp/T/tmp4wcJbI/user/ft_putstr:
total 8
-rw-r--r--  1 deepthought  deepthought  1045 Sep 21 10:57 ft_putstr.c

/var/folders/bj/z289pnxx6ys5wqswm9fg6j940000gp/T/tmp4wcJbI/user/maff_alpha:
total 32
-rwxr-xr-x  1 deepthought  deepthought  8564 Sep 21 10:57 a.out
-rw-r--r--  1 deepthought  deepthought  1008 Sep 21 10:57 maff_alpha.c

/var/folders/bj/z289pnxx6ys5wqswm9fg6j940000gp/T/tmp4wcJbI/user/max:
total 8
-rw-r--r--  1 deepthought  deepthought  1205 Sep 21 10:57 max.c

/var/folders/bj/z289pnxx6ys5wqswm9fg6j940000gp/T/tmp4wcJbI/user/paramsum:
total 8
-rw-r--r--  1 deepthought  deepthought  1246 Sep 21 10:57 paramsum.c

= paramsum =====================================================================
$> gcc -Wextra -Wall -Werror paramsum.c -o user_exe

= Test 1 ===================================================
$> ./3ziq6q9fh39w4sts16j0awjx
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./jx2nau6ntd671rm9367ie0pn "dfmAcJnjho9"
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./2ptp3jlqmeq2ethd5brgnq3d "hOP9ugYM"
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./jevd99aik61xlxn2fk0ynnpo "83mvX OL9GSW3j4QfCYlIBZ 4OGhe Ew9 A8c 7NyECLqTUAR8DFbJa 2kn5 glTAKP5 02uzSQ9tBcJ q2bu OjWSPktZiVAsorGY l0VAgyQZRHhN1XC q5jw"
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./bc9usjp2w05w50nudbsonbw7 "Dw3aHnIgezPju1B0o aXMwgQ lGzYwIyR4cU97L ZNnzuxYX RDlB4K uLF ipfnGvX3CMEj ij6hD4H7bK uitaIgS 0cRKr alt5QXh1o Y2NyqCSJp 1zBbCmnQD8KgPdZ a6j2UvfzxwJBIgyQ"
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
= Test 6 ===================================================
$> ./gmrzg0o1ss6r66mtjwi9zeqr "35jSN" "lkTzgs61t" "EwOQSL6BvHNUuR" "PACl" "X9j5up0CES"
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
= Test 7 ===================================================
$> ./na40s7tsjz0wx2f270rgmqbc "iT97Zq1oIKQuPG" "bT4oZ" "5KRhJz1" "hHugIy0m53STlPD6r" "Y7nGV1ZfykFuT3v" "Cg3FvWhm9" "5Jln" "tYFJcIuE" "CntPluSwpirbvj6Mc" "zH5md9ODGe7" "PVA0G" "J4sRBxg5U8"
$> diff -U 3 user_output_test7 test7.output | cat -e
--- user_output_test7	2018-09-21 10:57:10.000000000 -0700$
+++ test7.output	2018-09-21 10:57:10.000000000 -0700$
@@ -1 +1 @@$
-02$
+12$

Diff KO :(
Grade: 0

= Final grade: 0 ===============================================================
```
