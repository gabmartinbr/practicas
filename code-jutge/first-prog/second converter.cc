/*Write a program that converts to seconds a given 
amount of years, days, hours, minutes and seconds.*/
#include <iostream>

int main(){
    int years, days, hours, minutes, seconds;
    int totseconds;
    std::cin>>years>>days>>hours>>minutes>>seconds;
    seconds = seconds;
    minutes *= 60;
    hours *= 3600;
    days *= 24 * 3600;
    years *= 365 * 24 * 3600;
    totseconds = seconds + minutes + hours + days + years;
    std::cout<<totseconds<<std::endl;
    return 0;
}
