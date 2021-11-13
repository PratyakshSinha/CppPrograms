#include<iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout<<"Enter number of rows and coluumns: ";
    cin>>rows>>cols;

    int** table=new int*[rows];
    for(int i = 0;i<rows;i++)
        {
            table[i] = new int[cols];
        }

    for(int i = 0;i<rows;i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin>>table[i][j];
            }

        }
    for(int i = 0;i<rows;i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout<<table[i][j]<<" ";
            }
            cout<<endl;
        }

    for(int i = 0;i<rows;i++)
        {
            delete[] table[i];
        }

    delete[] table;
    table = NULL;

    system("pause>0");
    return 0;
}