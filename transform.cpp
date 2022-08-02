#include <iostream>
#include <stdlib.h>

int* transform(int a)
{
    int b = 1;
    int count = 0;
    while (a >= b){
        b = b*2;
        count++;
    }
    int A[count] = {0};
    b = b/2;
    for (int i = 0; i < count; i++){
        if (a >= b) {
            
            A[i]=1;
            a=a-b;
        }
        else {
            A[i]=0;
        }
       b = b/2;
    }
return A;
}

int main(void)
{
    int deci = 0;
    std::cout << "Enter a number you would like to transform to decimal: ";
    std::cin >> deci;
    std::cout << "Your number in binary is: " << transform(deci);

    return 0;
}