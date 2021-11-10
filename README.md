# \_printf

## Synopsis

The **\_printf** function prints an output according to the format. This function write its output to the stdout.
It returns the count of printed characters when the function is successful and -1 when the function fails.

**You can see a full diagram that explains how this function works <a href= "https://viewer.diagrams.net/?tags=%7B%7D&highlight=0000ff&edit=_blank&layers=1&nav=1&title=_printf%20flowchart#Uhttps%3A%2F%2Fdrive.google.com%2Fuc%3Fid%3D16rc1mEWhuoGpB6XuX6KsxFUTDE-gqNUf%26export%3Ddownload">here </a>**

## Usage

- All the files are to be compiled on Ubuntu 14.04 LTS.
- You must download all the files contained in this repository in order for this function to work.
- To use the \_printf function, create a file .c and you can use the following example to try:
<p> <b> _printf("This is a test"); </b> </p>
- Include the "main.h" header file on the functions using the \_printf.
- Compile your code with 'gcc -Wall -Werror -Wextra -pedantic \*.c'.

## Format

The **\_printf** function produces an output according to a format.

The available convertion specifiers are:

- %c: Prints a single character.
- %s: Prints a string of characters.
- %d: Prints base 10.
- %i: Prints integers.
- %%: Prints a single %.

## Example

    #include "main.h"
    #include <stdio.h>

    /**

- main- Prints anything
-
- Return: The number of arguments printed.
  \*/

  int main(void)
  {
  int a, b, c;
  char \*string;

  a = 10;
  b = 20;
  c = -50;
  string = "Hello world!";

  \_printf("This is my string: %s\n", string);
  \_printf("This is a [%d], and this is b [%d]\n", a, b);
  \_printf("This is c %d, and c is negative\n", c);
  \_printf("This is a single Character:[%c]\n", 'J');

  return(0);
  }

## Output

    This is my string: Hello world!
    This is a [10], and this is b [20]
    This is c -50, and c is negative
    This is a single Character:[J]

You can see more information consulting the **man_printf**, using this command:
**man ./man_printf**

### Authors 👨‍💻✒

- **<a href="https://www.linkedin.com/in/felipe-rivas-833863178/" target="_blank">Felipe Rivas</a>**

- **<a href="https://www.linkedin.com/in/ana-rocha-b98174216/" target="_blank">Ana Maria Rocha</a>**

#### This project was made for: <a href="https://www.holbertonschool.com/" target="_blank">Holberton School </a>

<a href="https://www.holbertonschool.com/">
<img src="https://thumbs.bfldr.com/at/x9m6pnbbn3cnnbr7kk4pr7mk/v/29396102?expiry=1637084372&fit=bounds&height=800&sig=OGMxNzBjYTgzMzE0YTNhY2YzNzIyYjgxMWJlNmQ5NjIxZjg2ZWI2Nw%3D%3D&width=1100" width=150" height="150" alt="Holberton School"  /></a>
