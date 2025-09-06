// Bubble sort---------------------------------------------------------------


#include<iostream>
using namespace std;
int main()

{

int A[5] = {10 , 50 , 40 , 30 , 20};
cout<<"Array : ";
for(int i=0; i<5; i++)
{
cout<<A[i]<<" ";
}


// bubble sort logic

for(int i=5; i>0;i--)
{
   for(int j=0; j<5-1;j++)

   {

    if(A[j]>A[j+1])
    {
        int temp = A[j];
        A[j]=A[j+1];
        A[j+1]=temp;
    }
   }
}

//print
cout<<endl<<"Sorted Array : ";
for(int i=0; i<5; i++)
{
cout<<A[i]<<" ";
}
}