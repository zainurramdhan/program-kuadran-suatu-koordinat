#include <iostream>

using namespace std;

class kuadran
{
public:
    int x;
    int y;

    void input()
    {
        cout << "Program Kuadran suatu Koordinat \n" << endl;
        cout << "Masukkan koordinat (X) = ";cin>>x;
        cout << "Masukkan koordinat (Y) = ";cin>>y;
        cout <<"Koordinat titik (X,Y) = "<<"("<<x<<","<<y<<")"<<endl;
    }

void Output()
{
    if (x>0 && y>0)
    {
        cout << "Kuadran 1"<<endl;
    }
    else if (x<0 && y>0)
    {
        cout << "Kuadran 2"<<endl;
    }

    else if (x<0 && y<0)
    {
        cout << "Kuadran 3"<<endl;
    }
    else
    {
        cout << "Kuadran 4" << endl;
    }
}

};
int main ()
{
    kuadran a;
    a.input();
    a.Output();
}
