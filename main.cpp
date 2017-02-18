#include <iostream>

long int multi(long int x, int y){
    long int z=x*y;
    return z;
}

void print(long int n){
    printf("a= %ld", n);
}

long int ost(long int n){
    long int x=n%3;
    return x;
}
int main() {
    long int a=5;
    a = multi(a,4);
    print(a);
    a = ost(a);
    return 0;
}