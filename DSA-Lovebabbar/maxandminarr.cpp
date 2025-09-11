// Find the "Kth" max and min element of an array
#include<iostream>
using namespace std;
int main ()
{


    cout<<"Enter size Of Array : ";
    int n;
    cin>>n;
    int A[n];

    cout<<"Enter "<<n<<" Elemants: ";
    for(int i=0; i<n;i++)
    {
        cin>>A[i];
    }



    cout<<"Array Elemnts Are : "<<endl;
     for(int i=0; i<n;i++)
    {
        cout<<A[i]<<endl;
    }
 int max=A[0]; int min=A[1];
     for(int i=0; i<n;i++)
    {
       if(A[i]>max)
       {
        max=A[i];
       }
       else if(A[i]<min)
       {
        min=A[i];
       }
    }
     cout<<"Maxium element is :"<<max<<" and Minimium element is "<<min;

}