// linear search ---------------------------------------------------------------------------------

// #include<iostream>
// using namespace std ;

// int main()

// {
// int n;
// cout<<"Enter length of array : ";
// cin>>n;
// int arr[n];

// cout<<"Enter array elements: ";
// for(int i = 0 ; i<n ; i++)

// {
// cin>>arr[i];
// }


// cout<<"Array Elements are :";
// for(int i = 0; i<n ; i++)

// {

//     cout<<arr[i]<<" ";
// }

// cout<<endl<<"Enter searching element are :";
// int S;
// bool Found=false;
// cin>>S;


// for(int i=0 ; i<n; i++)

// {
// if(arr[i]==S)
// {
// cout << "fount at index  "<<i;
// Found=true;
// break;
// }
// }

// if(!Found)
// {
//     cout <<"Not Found ! ";
// }
// }



// binary Search ------------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std ;

int main()

{
int n;
cout<<"Enter length of array : ";
cin>>n;
int arr[n];

cout<<"Enter array elements: ";
for(int i = 0 ; i<n ; i++)

{
cin>>arr[i];
}


cout<<"Array Elements are :";
for(int i = 0; i<n ; i++)

{

    cout<<arr[i]<<" ";
}

cout<<endl<<"Enter searching element are :";
int S;
bool Found=false;
cin>>S;
int LI = 0 ;
int RI  = n-1;

while(LI<RI)

{
int Mid = (LI+RI)/2;
if(arr[Mid]==S)

{
    cout<<"Element found at index  "<<Mid;
    Found=true;
    break;
}
else if (arr[Mid] >S)

{
RI= Mid+1;
}
else
LI=Mid+1;
}

if(!Found)

{
    cout<<"Not Found Element in any Index";
}
}
