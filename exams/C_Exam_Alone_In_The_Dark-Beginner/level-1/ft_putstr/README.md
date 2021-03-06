# ft_putstr
## Subject:
```
Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);
```

### Results:
```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z2r2p7.42.us.org
Darwin 17.2.0 x86_64
$> date
Fri Sep 21 09:23:33 PDT 2018
$> gcc --version
Configured with: --prefix=/Library/Developer/CommandLineTools/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 9.1.0 (clang-902.0.39.1)
Target: x86_64-apple-darwin17.2.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
$> clang --version
Apple LLVM version 9.1.0 (clang-902.0.39.1)
Target: x86_64-apple-darwin17.2.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin

= User files collection ========================================================
Collecting user files from Vogsphere
Repository URL: auto-exam/2018/c-exam-alone-in-the-dark-beginner/exam_20180921/dstolz

= Git history ==================================================================
$> git -C /var/folders/gp/dy07w8m53vzb74r3xdrtgcwc0000gp/T/tmpCz9vvs/user log --pretty='%H - %an, %ad : %s'
1a5037fa1f93984868c68b8805507a361607b0bb - Exam 42, Fri Sep 21 09:23:20 2018 -0700 : Finished level 1
cb0bba95777b1e9c6c7ea5e0c50a623c8ad1b61f - Exam 42, Fri Sep 21 09:13:59 2018 -0700 : Finished level 0

= Collected files ==========================================
$> ls -lAR /var/folders/gp/dy07w8m53vzb74r3xdrtgcwc0000gp/T/tmpCz9vvs/user
total 8
-rw-r--r--  1 deepthought  deepthought  518 Sep 21 09:23 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought  102 Sep 21 09:23 ft_putstr
drwxr-xr-x  4 deepthought  deepthought  136 Sep 21 09:23 maff_alpha

/var/folders/gp/dy07w8m53vzb74r3xdrtgcwc0000gp/T/tmpCz9vvs/user/ft_putstr:
total 8
-rw-r--r--  1 deepthought  deepthought  1045 Sep 21 09:23 ft_putstr.c

/var/folders/gp/dy07w8m53vzb74r3xdrtgcwc0000gp/T/tmpCz9vvs/user/maff_alpha:
total 32
-rwxr-xr-x  1 deepthought  deepthought  8564 Sep 21 09:23 a.out
-rw-r--r--  1 deepthought  deepthought  1008 Sep 21 09:23 maff_alpha.c

= ft_putstr ====================================================================
$> gcc -Wextra -Wall -Werror main.c ft_putstr.c -o user_exe

= Test 1 ===================================================
$> ./vzakojzlhd5l1m2sz5lqyqcy "eGEuFwyIp"
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./c6ae10h33exxov6s9n0t9hbd "J9Q8Lty5DCE"
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./kemjbxdsttrtdwdxxzlplcun "svKpzjCVqAF90R3P"
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./8p7um1qr0fze5vldgqiv2kqw "RUCMjG35 KCdoQkPmsxz vl8W FkN9Ucd"
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./pwfuwilk7fijac1nas2h9kc6 "evr xW3r1NYzkmiIVnUe 3PsT6 Vw6HBavTA9xtU 7hJnBC P6qo XMAdQwEqHh0IBzk vz6G2FBLs rthLVoH"
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
= Test 6 ===================================================
$> ./bmxfn7p5ysxftkox25zk0tdh "VnSa3z24vM7O MTQqKcdi73oU 2iN13Ls9QHGhablA qgpWEHNDYCrt zyqTS Fz7Zh rY50Kcij 4MsPYKNxX v8Exjadquw5Wc q06KpvbL3XPaZMOR 4yfbZs0t h20sGbCyJtAH5 HjRZKL"
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
= Test 7 ===================================================
$> ./sf0njyh2gzua4ozhxeo21lr9 "FDmCfvIUw ujdh0eQJz4fFWCN y5UOC4PIs70r E28k6hQAtjCe OoNHQ7aK5hC 7Ya WPQDB"
$> diff -U 3 user_output_test7 test7.output | cat -e

Diff OK :D
= Test 8 ===================================================
$> ./mwubfusowo23r4xmdvovtde3
$> diff -U 3 user_output_test8 test8.output | cat -e

Diff OK :D
Grade: 1

= Final grade: 1 ===============================================================
```
