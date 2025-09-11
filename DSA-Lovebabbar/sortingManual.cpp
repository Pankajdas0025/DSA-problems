// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo


#include<iostream>
using namespace std ;
int main ()

{

    int Numbers[3] = { 10 , 25 , 15 };

    if(Numbers[0]>Numbers[1] && Numbers[0] >Numbers[2])

    {
        Numbers[2] =Numbers[0];
    }
    else if(Numbers[1]>Numbers[0] && Numbers[1] >Numbers[2])

    {
        Numbers[2] =Numbers[1];
    }
    else
    Numbers[2]= Numbers[2];

}