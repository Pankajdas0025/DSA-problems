
// Reverse of array using new Array ---------------------------------------------------------------------------

// #include<iostream>
// using namespace std;
// int main()

// {

//     int A[5] = {10,20,30,40,50};
//     cout<<"Before Reverse The Array is :"<<endl;
//     for(int i=0;i<5;i++)
//     {
// cout<<"A["<<i<<"] = "<<A[i]<<endl;
//     }
//     int R[5];
//      cout<<"After Reverse The Array is :"<<endl;

//     for(int i=0;i<5;i++)
//     {
// R[5-(i+1)]=A[i];

//     }
//      for(int i=0;i<5;i++)
//     {
// A[i]=R[i];


//     }
//      for(int i=0;i<5;i++)
//     {
// cout<<"A["<<i<<"] = "<<A[i]<<endl;
//     }

// }




// Using (XOR)  without new Array-------------------------------------------------------------------------------


// #include <iostream>
// using namespace std;

// int main() {
//     int A[5] = {10, 20, 30, 40, 50};

//     cout << "Before Reverse The Array is :" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << "A[" << i << "] = " << A[i] << endl;
//     }

//     // Reverse using XOR swap
//     int n = 5;
//     for (int i = 0; i < n / 2; i++)
//      {
//        A[i] = A[i]^A[n-i-1];
//        A[n-i-1]=A[i]^A[n-i-1];
//        A[i]=A[i]^A[n-i-1];
//     }

//     cout << "\nAfter Reverse The Array is :" << endl;
//     for (int i = 0; i < n; i++) {
//         cout << "A[" << i << "] = " << A[i] << endl;
//     }

//     return 0;
// }




// // Using temp var reverse  Array-------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     int A[5] = {10, 20, 30, 40, 50};

//     cout << "Before Reverse The Array is :" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << "A[" << i << "] = " << A[i] << endl;
//     }

//     // Reverse using XOR swap
//     int n = 5;
//     for (int i = 0; i < n / 2; i++)
//      {
//     int temp = A[i];
//     A[i] = A[n-i-1];
//     A[n-i-1]=A[i];
//     }

//     cout << "\nAfter Reverse The Array is :" << endl;
//     for (int i = 0; i < n; i++) {
//         cout << "A[" << i << "] = " << A[i] << endl;
//     }

//     return 0;
// }






// // Using airthmetic opration  reverse  Array-----------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int A[5] = {10, 20, 30, 40, 50};

    cout << "Before Reverse The Array is :" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "A[" << i << "] = " << A[i] << endl;
    }

    // Reverse using XOR swap
    int n = 5;
    for (int i = 0; i < n / 2; i++)
     {
    A[i]= A[i]+A[n-i-1];
    A[n-i-1] = A[i]-A[n-i-1];
    A[i]=A[i]-A[n-i-1];
    }

    cout << "\nAfter Reverse The Array is :" << endl;
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "] = " << A[i] << endl;
    }

    return 0;
}