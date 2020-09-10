#include <stdio.h>
struct Vec{
    int x;
    int y;
} typedef Vec;
Vec add(Vec first, Vec right);
int main()
{
    Vec test;
    Vec test2;
    test.x = 5;
    test.y =10;
    test2.x = 5;
    test2.y =10;
    printf("The integer is: %d\n", test.x);
    Vec new;
    new = add(test, test2);
    printf("The integer is: %d\n", new.x);
    return 0;
}

Vec add(Vec first, Vec right){
    Vec new;
    new.x = first.x + right.x;
    new.y = first.x + right.x;
    return new;
    
}   
