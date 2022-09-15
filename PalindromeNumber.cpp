#include<iostream>
using namespace std;

int main()
{
    int n,rev=0,rem,c;

    cout<<endl<<"Enter a number: ";
    cin>>n;
    c=n;
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }

    cout<<endl<<"The reverse of the number is: "<<rev;

    if(c == rev)
    cout<<endl<<"It is a Palindrome number!";
    else
    cout<<endl<<"It is not a Palindrome number!";
    
    return 0;

}