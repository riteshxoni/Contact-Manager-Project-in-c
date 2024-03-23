#include<time.h>
void delay(float s)
{
    float ms = 1000 * s ;
    clock_t st = clock();
    while( clock() < st + ms );
}