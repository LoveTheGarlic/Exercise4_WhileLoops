#include<iostream>
using namespace std;

int main()
{
    int n,rev=0,rem;

    cout<<endl<<"Enter a number: ";
    cin>>n;

    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }

    cout<<endl<<"The reverse of the number is: "<<rev;

    return 0;

}