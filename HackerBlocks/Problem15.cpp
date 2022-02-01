#include<iostream>
using namespace std;

int main()
{
   int  i,j,k,space,n;
   cin>>n;
   n = (n/2)+1;
   space = n - 1;
   cout<<"\n";
   //printing the upper triangle
   for  (i = 1; i <= n; i++)
   {
      for  (j = 1; j<= space; j++)
         cout<<"\t";//printing spaces
      space--;
      for  (k = 1; k <= 2 * i - 1; k++)
         cout<<"*\t";
      cout<<"\n";
   }
   //printing the lower triangle
   space = 1;
   for  (i = 1; i<= n - 1; i++)
   {
      for  (j = 1; j <= space; j++)
         cout<<"\t";
      space++;
      for  (k = 1 ; k <= 2 * (n - i) - 1; k++)
         cout<<"*\t";
      cout<<"\n";
   }
   return 0;
}