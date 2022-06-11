/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void printarray(int input[],int n)
{
    for(int i=0;i<6;i++)
    {
        cout<<input[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int input [], int n)
{
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-1-j;i++)
        {
            if(input[i]>input[i+1])
            {
            int temp=input[i];
            input[i]=input[i+1];
            input[i+1]=temp;
            }
        }
    }
}

int main()
{
    int input[6]={6,5,4,3,2,1};

    bubblesort(input,6);
    
    printarray(input,6);
    
}


