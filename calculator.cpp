#include<iostream>
using namespace std;
int main()
{
    int i,a,b;
    float c;
    do
    {
    cout<<"provide choice for operation 1.Add 2.Sub 3.Mul 4.Div";
    cin>>i;
    switch(i)
    {

        case 1:
        {
            cout<<"Provide the number";
            cin>>a,b;
            cout<<"sum is"<<a+b;
        }break;

        case 2:
        {
            cout<<"Provide the number";
            cin>>a,b;
            cout<<"Sub is"<<a-b;
        }break;

        case 3:
        {
            cout<<"Provide the number";
            cin>>a,b;
            cout<<"Mul is"<<a*b;
        }break;

        case 4:
        {
            cout<<"Provide the number";
            cin>>a,b;
            cout<<"sum is"<<a/b;
        }break;
    }
    }while(i!=0);
    return 0;
}
