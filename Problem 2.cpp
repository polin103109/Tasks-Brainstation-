#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char a[5][25];
    float c[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"Enter name"<<i+1<<" : :";
        cin>>a;
        cout<<"Enter cgpa : ";
        cin>>c;
        cout<<endl;
    }
    cout<<"\n***** Your entered data ******\n\n";
    cout<<"\tname"<<"\t\t"<<"cgpa\n\n";
    for(i=0;i<5;i++)
    {
        cout<< "\t"<<a<<"\t\t"<c;
        cout<<endl;
    }
    for(i=0;i<5;i++)
    {
        for( int j=0;j<1;j++)
        {
            cout<<(int)a[i][j]<<endl;
        }
    }
    cout<<"\n\n*** Sorted data(w.r.t name)****\n\n";
    cout<<"\tName"<<"\t\t"<<"cgpa\n\n";
        for(i=0;i<5;i++)
        {
            cout<<"\t"<<a<<"\t\t"<<c;
            cout<<end;
        }
        cout<<endl;
        return 0;

}
