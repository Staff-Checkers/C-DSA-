void merge(int input[],int si,int ei,int mid)
{
    int i=si;
    int j=mid+1;
    int k=0;
    int* arr=new int[ei-si+1];
    while(i<=mid&&j<=ei)
    {
        if(input[i]<=input[j])
        {
            arr[k]=input[i];
            ++i;
            ++k;
        }
        else
        {
            arr[k]=input[j];
            ++j;
            ++k;
        }
    }
    while(i<=mid)
    {
        arr[k]=input[i];
            ++i;
            ++k;
    }
    while(j<=ei)
    {
         arr[k]=input[j];
            ++j;
            ++k;
    }
    for(int i=0;i<k;++i)
    {
        input[si+i]=arr[i];
    }
}
void ms(int input[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    else
    {
        int mid=(si+ei)/2;
        ms(input,si,mid);
        ms(input,mid+1,ei);
        merge(input,si,ei,mid);
    }
}
void mergeSort(int input[], int size){
	// Write your code here
    int si=0;
    int ei=size-1;
    ms(input,si,ei);
}
