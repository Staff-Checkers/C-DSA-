/*
	To apply the method explained in the hint video, we have to add two more parameters in the function call. This can be done by calling a helper function from given function. The helper function can have three parameters: array, start index, end index.  
	
	Skeleton code to achieve this:
	#include <iostream>
	using namespace std;
	
	void quickSort(int input[], int start, int end)
	{
    		// your code goes here 
	}
	void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}
		
*/
#include<bits/stdc++.h>
using namespace std;
int qsort(int input[],int si,int ei)
{
    int curr=input[si];
    int count=0;
    for(int i=si+1;i<=ei;++i)
    {
        if(input[i]<=curr)
        {
            ++count;
        }
    }
    int index=si+count;
    swap(input[si],input[index]);
    int i=si;
    int j=ei;
    while(i<index&&j>index)
    {
        if(input[i]<=curr)
        {
            ++i;
        }
        if(input[j]>curr)
        {
            --j;
        }
        else
        {
            swap(input[i],input[j]);
        }
    }
    return index;
}
void qs(int input[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    else
    {
        int x=qsort(input,si,ei);
        qs(input,si,x-1);
        qs(input,x+1,ei);
    }
}
void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    
    int si=0;
    int ei=size-1;
    qs(input,si,ei);
}