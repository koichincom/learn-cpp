#include <iostream>

int main(){
    int a;          // no initializer (defalut initialization)
    int b = 5;      // copy initialization
    int c( 6 );     // direct initialization
    
    // list initialization methods (C++11)
    int d { 7 };    // initial value in braces (direct list initialization)
    int e = { 8 };  // initial value in braces after equals sign (copy list initialization)
    int f {};       // initializer is empty braces (value initialization)
    
    return 0;
}