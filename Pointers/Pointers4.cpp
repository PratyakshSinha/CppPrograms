#include<iostream>
using namespace std;

int getMin(int A[], int n){
    int min = A[0];
    for (int i = 1; i < n; i++)
    {
        if(A[i]<min)
            min = A[i];
    }

    return min;
    
}

int getMax(int A[], int n){
    int max = A[0];
    for (int i = 1; i < n; i++)
    {
        if(A[i]>max)
            max = A[i];
    }

    return max;
    
}

void getMinAndMax(int A[], int n, int* min, int* max){
    for (int i = 0; i < n; i++)
    {
        if(A[i]>*max)
        {
            *max = A[i];
        }
        if(A[i]<*min)
        {
            *min = A[i];
        }
    }
    
}

int main()
    {
        int numbers[5]={5,4,-2,29,6};
        // cout<<"Min is "<<getMin(numbers, 5)<<endl;
        // cout<<"Max is "<<getMax(numbers, 5);

        int min = numbers[0];
        int max = numbers[0];
        getMinAndMax(numbers,5,&min,&max);
        cout<<"Min is "<<min<<"\nMax is "<<max;

        system("pause>0");
        return 0;
    }