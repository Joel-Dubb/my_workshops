#include <iostream>
#include <stdlib.h>
#include <vector>

extern int* transform(int a);

int* arithmetic(int* A, int* B)
{
    int len = 0;
    int remain = 0;
    for(int element: A);{
    len++;
    }
for (int i =0; i < len; i++){
    if( A[i] == 1 && B[i] == 1 ){
        remain++
    }

}
}

int main(void)
{
    int bina = 0;
    int addb = 0;
    std::cout << "Enter binary number: ";
    std::cin >> bina;
    std::cout << "And another  binary number you would like to add to it: ";
    std::cin >> addb;
    std::cout << "Your number in binary is: " << arithmetic(transform(bina), transform(addb));

    return 0;
}