#include <stdio.h>
 
struct Vec{
	float x;
	float y;
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
 
Vec mul(Vec first, float second){
    Vec new;
    new.x = first.x * second; 
    new.y = first.y *  second;
    return new;
}
Vec div(Vec first, float second){
    Vec new;
    new.x = first.x / second;
    new.y = first.y / second;
    return new;
}
void print_vec(Vec vec){
    printf("x: %f, y %f\n", vec.x, vec.y);
}
int main(){
    Vec newVec;
    newVec.x = 5.0;
    newVec.y = 2.4;
 
    Vec z = mul(newVec, 2);
    print_vec(z);
}
