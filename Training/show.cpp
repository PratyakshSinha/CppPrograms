#include<iostream>
#include<conio.h>

void show()
{
    static int x = 5;
    x++;
    std::cout<<"X = "<<x<<std::endl;
}

 int main()
{
    //system("cls");
    show();
    show();
    show();
    return 0;
}