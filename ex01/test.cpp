#include<iostream>
int main ()
{
    double valeurDouble = 3.14;
    int valeurInt = static_cast<int>(valeurDouble);
    std::cout << "Double : " << valeurDouble << ", Int : " << valeurInt << std::endl;

}