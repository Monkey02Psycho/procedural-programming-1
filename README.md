# procedural programming

### What is procedural programming?
Procedural works on data types and edits that data type. logic and data types are seperate. this is different from Object oriented where Logic and data go hand in hand. if you seperate the data and the logic it is easier to test to see if the logic works and you can separately test if the data is valid.

##### Is my code procedural programming?
yes
##### Prove it.
I guess I will if i want the credits
```C
struct Vec{
	double x;
	double y;
} typedef Vec;
```
in the above example we have a struct. you cant preform oporations using any form of . meathod syntax like in java or python you must pass it to functions. so instead we have to pass the struct or a referance directly to the function. no data hiding that would be to close to OOP (Object oriented programming) for our likings.

```c
Vec add(Vec first, Vec second){
    Vec new;
    new.x = first.x + second.x; 
    new.y = first.y + second.y;
    return new;
}
```
this function is in procedural style. we have two inputs variables for vectors and then the logic is all contained in the function and then we return a new vec with the added vector. data in new data out. exactly what procdural style ask

with this code we can do things like this:
```c
Vec z = add(mul(newVec, 2), newVec);
```
we can put the functions inside functions inside functions and then out a new one. Its almost like magic but not really.
