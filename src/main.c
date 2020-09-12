#include <stdio.h>
#include <math.h>

struct Vec{
	double x;
	double y;
} typedef Vec;

Vec add(Vec first, Vec second){
    Vec new;
    new.x = first.x + second.x; 
    new.y = first.y + second.y;
    return new;
}

Vec sub(Vec first, Vec second){
    Vec new;
    new.x = first.x - second.x; 
    new.y = first.y -  second.y;
    return new;
}

Vec mul(Vec first, double second){
    Vec new;
    new.x = first.x * second; 
    new.y = first.y *  second;
    return new;
}
Vec div(Vec first, double second){
    Vec new;
    new.x = first.x / second;
    new.y = first.y / second;
    return new;
}

double magnitude(Vec vec){
    return sqrt((vec.x * vec.x) + (vec.y * vec.y));
}

Vec unit_vec(Vec first){
    Vec new;

}
void print_vec(Vec vec){
    printf("x: %f, y %f\n", vec.x, vec.y);
}
int main(){
    Vec newVec;
    newVec.x = 5.0;
    newVec.y = 2.4;

    Vec z = add(mul(newVec, 2), newVec);
    double y = magnitude(z);
    print_vec(z);

    printf("magnitude: %f\n", y);

}
