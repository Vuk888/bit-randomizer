// BitRandomizer Version 1.0
#include<iostream>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand (time(NULL));
    while (1) std::cout << rand() % 2;
    return 0;
}
