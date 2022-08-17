#include<bits/stdc++.h>
using namespace std;
int sumOfArray(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int ans=sumOfArray(arr+1,n-1)+arr[0];
        return ans;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter "<<n<<" elements of the array\n";
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int x=sumOfArray(arr,n);
    cout<<"The sum of the array is "<<x;
}
