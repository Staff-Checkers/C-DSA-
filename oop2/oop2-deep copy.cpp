#include<bits/stdc++.h>
using namespace std;
class students{
    int rollno;
    char* name;
public:
    students(int r,char* n)
    {
        rollno=r;
        name=new char[strlen(n)+1];  //deep copy
        strcpy(name,n);
    }
    void print()
    {
        cout<<rollno<<" "<<name<<endl;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    char name[20]="akashdeep";
    students s1(3,name);
    s1.print();
    name[0]='b';
    s1.print();
}