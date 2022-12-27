<h1 align="center">✋ BEWARE ✋</h1>

## If you are a 42 Student, do not copy/paste this project, it will be considered cheating and you will be grated -42.

# 42 Wolfsburg Piscine 
## C00

The first coding language you learn: C

# Contents

1. [Exercise 00 : ft_putchar](#ex00)
2. [Exercise 01 : ft_print_alphabet](#ex01)
3. [Exercise 02 : ft_print_reverse_alphabet](#ex02)
4. [Exercise 03 : ft_print_numbers](#ex03)
5. [Exercise 04 : ft_is_negative](#ex04)
6. [Exercise 05 : ft_print_comb](#ex05)
7. [Exercise 06 : ft_print_comb2](#ex06)
8. [Exercise 07 : ft_putnbr](#ex07)
9. [Exercise 08 : ft_print_combn](#ex08)

# <a name="ex00">Exercise 00 : ft_putchar</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 00 |
|-------------------------------------------------------|--------------------------------------------------|
| | ft_putchar.c |
| Turn-in directory: | ex00/ |
| Files to turn in: | ft_putchar.c |
| Allowed functions: | write |

* Write a function that displays the character passed as a parameter.

* It will be prototyped as follows:

```C
void ft_putchar(char c)
```

To display the character, you must use the texttt write function as follows:


```C
write(1, &c, 1);
```

<p align="right">
 <a href="https://github.com/Cerberus2290/C00/blob/main/README.md#-beware-">back to top</a>
</p>

# <a name="ex01">Exercise 01 : ft_print_alphabet</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 01 |
|-------------------------------------------------------|--------------------------------------------------|
| | ft_print_alphabet.c |
| Turn-in directory: | ex01/ |
| Files to turn in: | ft_print_alphabet.c |
| Allowed functions: | write |

* Create a function that displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter ’a’.

* Here’s how it should be prototyped:

```C
void ft_print_alphabet(void)
```

<p align="right">
 <a href="https://github.com/Cerberus2290/C00/blob/main/README.md#-beware-">back to top</a>
</p>

# <a name="ex02">Exercise 02 : ft_print_reverse_alphabet</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 02 |
|-------------------------------------------------------|--------------------------------------------------|
| | ft_print_reverse_alphabet.c |
| Turn-in directory: | ex02/ |
| Files to turn in: | ft_print_reverse_alphabet.c |
| Allowed functions: | write |

* Create a function that displays the alphabet in lowercase, on a single line, by descending order, starting from the letter ’z’.

* Here’s how it should be prototyped:

```C
void ft_print_reverse_alphabet(void)
```

<p align="right">
 <a href="https://github.com/Cerberus2290/C00/blob/main/README.md#-beware-">back to top</a>
</p>

# <a name="ex03">Exercise 03 : ft_print_numbers</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 03 |
|-------------------------------------------------------|--------------------------------------------------|
| | ft_print_numbers.c |
| Turn-in directory: | ex03/ |
| Files to turn in: | ft_print_numbers.c |
| Allowed functions: | write |

* Create a function that displays all digits, on a single line, by ascending order.

* Here’s how it should be prototyped:

```C
void ft_print_numbers(void)
```

<p align="right">
 <a href="https://github.com/Cerberus2290/C00/blob/main/README.md#-beware-">back to top</a>
</p>

# <a name="ex04">Exercise 04 : ft_is_negative</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 04 |
|-------------------------------------------------------|--------------------------------------------------|
| | ft_is_negative.c |
| Turn-in directory: | ex04/ |
| Files to turn in: | ft_is_negative.c |
| Allowed functions: | write |

* Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter. If n is negative, display ’N’. <br>If n is positive or null, display ’P’.

* Here’s how it should be prototyped:

```C
void ft_is_negative(int n)
```

<p align="right">
 <a href="https://github.com/Cerberus2290/C00/blob/main/README.md#-beware-">back to top</a>
</p>

# <a name="ex05">Exercise 05 : ft_print_comb</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 05 |
|-------------------------------------------------------|--------------------------------------------------|
| | ft_print_comb.c |
| Turn-in directory: | ex05/ |
| Files to turn in: | ft_print_comb.c |
| Allowed functions: | write |

* Create a function that displays all different combinations of three different digits in ascending order, listed by ascending order - yes, repetition is voluntary.

* Here’s the intended output:

```
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
```

* 987 isn’t there because 789 already is.

* 999 isn’t there because the digit 9 is present more than once.

* Here’s how it should be prototyped:

```C
void ft_print_comb(void)
```

<p align="right">
 <a href="https://github.com/Cerberus2290/C00/blob/main/README.md#-beware-">back to top</a>
</p>

# <a name="ex06">Exercise 06 : ft_print_comb2</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 06 |
|-------------------------------------------------------|--------------------------------------------------|
| | ft_print_comb2.c |
| Turn-in directory: | ex06/ |
| Files to turn in: | ft_print_comb2.c |
| Allowed functions: | write |

* Create a function that displays all different combination of two digits between 00 and 99, listed by ascending order.

* Here’s the expected output:

```
$>./a.out | cat -e
00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
```

* Here’s how it should be prototyped:

```C
void ft_print_comb2(void)
```

<p align="right">
 <a href="https://github.com/Cerberus2290/C00/blob/main/README.md#-beware-">back to top</a>
</p>

# <a name="ex07">Exercise 07 : ft_putnbr</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 07 |
|-------------------------------------------------------|--------------------------------------------------|
| | ft_putnbr.c |
| Turn-in directory: | ex07/ |
| Files to turn in: | ft_putnbr.c |
| Allowed functions: | write |

* Create a function that displays the number entered as a parameter. The function has to be able to display all possible values within an int type variable.

* Here’s how it should be prototyped:

```C
void ft_putnbr(int nb)
```

* For example:
  * ft_putnbr(42) displays "42"

<p align="right">
 <a href="https://github.com/Cerberus2290/C00/blob/main/README.md#-beware-">back to top</a>
</p>

# <a name="ex08">Exercise 08 : ft_print_combn</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 08 |
|-------------------------------------------------------|--------------------------------------------------|
| | ft_print_combn.c |
| Turn-in directory: | ex08/ |
| Files to turn in: | ft_print_combn.c |
| Allowed functions: | write |

* Create a function that displays all different combinations of n numbers by ascending order.

* n will be so that : 0 < n < 10

* If n = 2, here’s the expected output:

```
$>./a.out | cat -e
01, 02, 03, ..., 09, 12, ..., 79, 89$>
```

* Here’s how it should be prototyped:

```C
void ft_print_combn(int n)
```

<p align="right">
 <a href="https://github.com/Cerberus2290/C00/blob/main/README.md#-beware-">back to top</a>
</p>
