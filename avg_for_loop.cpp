#include <iostream>
using namespace std;
int main()
{
    int n,avg,sum=0;
    cout<<"total elements present";
    cin>>n;
    for(int i=0;i<n;i++)
        {
            sum+=i;
        }
    avg=sum/n;
    cout<<"\nsum is"<<sum;
    cout<<"\navg is"<<avg;
    return 0;
}
