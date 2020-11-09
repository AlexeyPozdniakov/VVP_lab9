#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int d,m;
    string date[20]{"first","second","third","fourth","fifth",
    "sixth","seventh","eighth","ninth","tenth",
    "eleventh","twelfth","thirteenth",
    "fourteenth","fifteenth","sixteenth","seventeeth", 
    "eighteenth","nineteenth","twentieth"};
    string month[12] {"of january","of february","of march","of april",
    "of may","of june","of july","of august","of semtember","of october","of november","of december"};
    cin>>d>>m;
    if (d<=20)
    {
        cout<<date[d-1]<<" "<<month[m-1]<<endl;
    }
    else if ((d<30)&&(d>20)) 
    {
        cout<<"twenty "<<date[d-1]<<" "<<month[m-1]<<endl;
    }
    else if (d==30)
    {
        cout<<"thirtieth "<<month[m-1]<<endl;
    }
    else
    {
        cout<<"thirty "<<date[d-1]<<month[m-1]<<endl;
    }
    return 0;
}
