#include <iostream>
#include <math.h>
float add(float a, float b,float c,float d,float e,float f);
int minus(int a, int b);    
int yay(int o, int z);
float go(float m, float x, float y);
int multiply(int one, int two);
float divide(float a, float b);
int speed(int distance,int time);
float hourhandspeedpermin();
float minuitehandspeedpermin();
float clockangles(float minuite, float hour);
int main(int argc, char** argv)
{
    std::cout << argc<< " " << argv[0] << " " << argv[1]<< std::endl;
    std::cout << " hi " <<  add (5,4,7,8,6,10) << std::endl;
    std::cout << minus(4, 5) << std::endl;
    std::cout << yay(9, 7) << std::endl;
    std::cout << go(9, 8,999) << std::endl;
    std::cout << multiply(8, 7) << std::endl;
    std::cout << divide(99564645,65485) << std::endl;
    std::cout << speed(20,5) << " miles per minuite" << std::endl;
    std::cout << hourhandspeedpermin()<<" degree per min" << std::endl;
    std::cout << minuitehandspeedpermin() << " degree per min" << std::endl;
    std::cout << clockangles(1, 5) << " angle at 01:5" << std::endl;
}
float add(float a, float b, float c, float d, float e, float f)
{
    return a + b + c + d + e + f ;
}

int minus(int a,int b)
{
    std::cout << "calling function minus" <<std::endl;
    return a - b;
}
int yay(int o, int z)
{
    std::cout << "minus yay" << std::endl;
    return o - z;
}
float go(float m,float x,float y)
{
    std::cout << "go somewhere" << std::endl;
    return m / x - y;
}
int multiply(int one,int two)
{
    std::cout << " multiply" << std::endl;
    return one * two;
}
float divide(float a, float b)
{
    std::cout << " divide" << std::endl;
    return a / b;
}


int speed(int distance,int time)
{

    std::cout << "train speed" << std::endl;
    return distance / time;
}
float hourhandspeedpermin()
{
    return (float) 360 / 720;
}
float minuitehandspeedpermin()
{
    return (float)360 / 60;
}
float clockangles(float minuite, float hour)
{
    float hd = hourhandspeedpermin() * (hour * 60 + minuite);
    int md = minuitehandspeedpermin() * (hour * 60 + minuite);
    md = md % 360;
    return fabs(md - hd);
}