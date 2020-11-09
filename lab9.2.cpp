#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian" );
    int k;
    char n;
    cout<<"Input direction"<<endl;
    cin>>n;
    cout<<"Input command"<<endl;
    cin>>k;
    switch(k)
    {
        case -1: switch(n)
        {
            case 'N': cout<<"E"<<endl; break;
            case 'E': cout<<"S"<<endl; break;
            case 'S': cout<<"W"<<endl; break;
            case 'W': cout<<"N"<<endl; break;
        }
        break;
        case 1: switch(n)
        {
            case 'N': cout<<"W"<<endl; break;
            case 'W': cout<<"S"<<endl; break;
            case 'S': cout<<"E"<<endl; break;
            case 'E': cout<<"N"<<endl; break;
        }
        break;
        case 0: switch(n)
        {
            case 'N': cout<<"N"<<endl; break;
            case 'W': cout<<"W"<<endl; break;
            case 'S': cout<<"S"<<endl; break;
            case 'E': cout<<"E"<<endl; break;
        }
        break;
    }
    return 0;
}
