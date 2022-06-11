/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void selectionSort(int input[],int n)
{
   for(int i=0;i<n-1;i++)
   {
       int min=input[i], minindex=i;
       
       for(int j=i+1;j<n;j++)
       {
           if(input[j]<min)
           {
               min=input[j];
               minindex=j;
           }
       }
       
       int temp=input[i];
       input[i]=input[minindex];
       input[minindex]=temp;
   }
}
int main()
{
    int input[6]={6,5,4,3,2,1};
    
    selectionSort(input,6);
    
    for(int i=0;i<6;i++)
    {
        cout<<input[i]<<" ";
    }
    cout<<endl;
}
