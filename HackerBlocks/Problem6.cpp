#include<iostream>

int main()
    {
        int n1, n2, counter=0, i=0;
        std::cin>>n1>>n2;
        while(counter!=n1)
            {
                i++;
                if(((3*i+2)%n2)!=0)
                {
                    std::cout<<3*i+2<<std::endl;
                    counter++;
                }
            }
        return 0;
    }