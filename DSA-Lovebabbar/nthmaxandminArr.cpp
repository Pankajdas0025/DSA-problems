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

 cout<<endl<<"Sorted array Elemnts Are : "<<endl;
     for(int i=0; i<n;i++)
    {
        cout<<A[i]<<endl;
    }



cout<<" Enter nth possition : ";
   int nn;
   cin>>nn;
   cout<<" Maximun "<<nn<<"th element is "<<A[n-nn]<< " and minimum "<<nn<< " th element "<<A[nn-1];







}
