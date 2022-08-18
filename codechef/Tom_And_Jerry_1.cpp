#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        pair<int,int>p1;
        pair<int,int>p2;
        int k;
        cin>>p1.first>>p1.second>>p2.first>>p2.second>>k;
        int distance=abs(p2.first-p1.first)+abs(p2.second-p1.second);
        if(distance>k)
        {
            cout<<"NO"<<endl;
        }
        else if(distance==k)
        {
            cout<<"YES"<<endl;
        }
        else if(distance%2==k%2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
}