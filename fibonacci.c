/* A simple C program that a fibonacci sequence to a user defined value */
#include <stdio.h>

int main()
{
/* define your variabes */
    int i = 0;
    long a = 0;
/* printf prints to standard output (your console) and scanf gets a number from the user */
    printf("Fibonnaci Squence for the console\n");
    printf("How many numbers do you want in the sequence? ");
    scanf("%d", &a);
/*define your array of numbers and provide the first 2 numbers */
    long fibseq[a];
    fibseq[0] = 1;
    fibseq[1] = 1;
    printf("%d %d", fibseq[0], fibseq[1]);
/* loop. first condition sets i = 2; the second condition checks to see if i is less than the inputted # and the last
    increases i by 1 through each iteration of the loop */
    for(i = 2; i < a; i++)
    {
            fibseq[i] = fibseq[i-2] + fibseq[i-1];
/* depending on your machine and the # you inputted, the long variable can only hold such a high number */
/* assignment: how can you improve this to increase how much output you can get? (Hint = exponents? */
            if (fibseq[i] > 0) {
                printf(" %d ", fibseq[i]);
            }
    }
    printf("Press any key to exit");
    exit: scanf("%d",&a);

    return 0;
}
