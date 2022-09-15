#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, k, p, rem, c=0,r,result=0,cn;

    cout<<endl<<"Enter the number to be checked: ";
    cin>>n;
    k=n;
    cn=n;

    while(n!=0)
    {
        n=n/10;
        c++;
    }
    
    p=c;
    while(k!=0)
    {
        rem=k%10;
        r=pow(rem,p);
        result=result+r;
        k=k/10;
    }
        
    if(result==cn)
    cout<<endl<<"It is an Armstrong number";
    else
    cout<<endl<<"It is not an Armstrong number";
    return 0;


}