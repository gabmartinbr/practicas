/*Write a program that reads two natural numbers a and b, 
with b > 0, and prints the integer division d 
and the remainder r of a divided by b.*/
#include <iostream>

int main(){
    int a,b;
    b > 0;
    std::cin>>a>>b;
    int intdiv{a/b},reminder{a%b};
    std::cout<<intdiv<<" "<<reminder<<std::endl;

    return 0;
}