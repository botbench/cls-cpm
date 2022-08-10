/* 
 * # Copyright 2020 Xander Soldaat <xander@botbench.com>
 */
#include <stdio.h>

int main(void)
{
    // Clear the screen and go home
    putchar ('\33');
    putchar ('[');
    putchar ('2');
    putchar ('J');
    putchar ('\33');
    putchar ('[');
    putchar ('H');
    return 0;
}
