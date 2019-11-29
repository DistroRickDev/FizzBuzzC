#include <stdio.h>

void FizzBuzz(int limit);

int main() {
    FizzBuzz(100);
    return 0;
}

void FizzBuzz(int limit)
{
    for(int i=0; i<limit+1; i++)
    {
        if(i%3==0 && i%5==0){
            printf("Fizz Buzz\n");
        }
        else if(i%3==0){
            printf("Fizz\n");
        }
        else if(i%5==0){
            printf("Buzz\n");
            }
        else
            {
                printf("%d\n", i);
            }
    }
}