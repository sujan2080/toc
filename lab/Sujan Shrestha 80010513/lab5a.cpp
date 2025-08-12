
//Test whether a word belongs to grammar
// S -> 0A
// A -> 1A | 2B
// B -> 0B | 1

//01120001
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 20
char M[N] = "";
int i, n, accept;
void B()
{
char c = M[i];
if (c == '0')
{
i++;
B();
}
else if (c == '1')

{
if (i == n-1)
accept = 1;
else
accept = 0;
}
else
accept = 0;
}
void A()
{
char c = M[i];
if (c == '1')
{
i++;
A();
}
else if (c == '2')
{
i++;
B();
}
else

{
accept = 0;
}
}
void S()
{
char c = M[i];
if (c == '0')
{
i++;
A();
}
else
{
accept = 0;
}
}
int main()
{
printf("This program tests whether a word belongs to the defined grammar as follows: \n\tS -> 0A \n\tA -> 1A | 2B \n\tB -> 0B | 1\n\n");
printf("Enter a word to test: \n");
scanf("%s", M);

n = strlen(M);
i = 0;
S();
if (accept == 1)
printf("This word belongs to the language.\n");
else
printf("This word does not belong to the language.\n");
}
