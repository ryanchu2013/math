#include <iostream>
float add(float a, float b,float c,float d,float e,float f);
int minus(int a, int b);    
int yay(int o, int z);
float go(float m, float x, float y);
int multiply(int one, int two);
float divide(float poop, float pee);
int speed(int distance,int time);
float hourhandspeedpermin();
int main()
{
    //int a = 0;
    std::cout << "mom sucks and pees laalalalala ni niaoniao" <<  add (5,4,7,8,6,10) << std::endl;
    std::cout << minus(4, 5) << std::endl;
    std::cout << yay(9, 7) << std::endl;
    std::cout << go(9, 8,999) << std::endl;
    std::cout << multiply(8, 7) << std::endl;
    std::cout << divide(99564645,65485) << std::endl;
    std::cout << speed(20,5) << " miles per minuite" << std::endl;
    std::cout << hourhandspeedpermin()<<" degree per min" << std::endl;
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
float divide(float poop, float pee)
{
    std::cout << " divide my poop and pee loser" << std::endl;
    return pee / poop;
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