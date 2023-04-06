// https://practice.geeksforgeeks.org/problems/set-bits0143/1

// COUNT SET BITS
#include <iostream>
using namespace std;

int setBits(int n)
{
    // Write Your Code here
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<setBits(x)<<endl;
    return 0;
}