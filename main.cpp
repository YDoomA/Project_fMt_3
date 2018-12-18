#include <iostream>
#include <cmath>
using namespace std;

void Bezier(int Px[3],int Py[3])
{
    double x=0.0,y = 0.0;
    string forIntX = "\n\nFor integer Х:\n";
    for(double t = 0.0; t <= 1.0; t+= 0.01)// Для более подробных координат, можно изменить t на 0.001
    {
        x = pow((1-t),2)*Px[0]+2*(1-t)*t*Px[1]+pow(t,2)*Px[2];
        cout << "t = " << t <<" Px =" << x << "\t";
        y = pow((1-t),2)*Py[0]+2*(1-t)*t*Py[1]+pow(t,2)*Py[2];
        cout <<  t <<" Py =" << y << endl;
        if((x) == static_cast<int>(x)){
        forIntX += "t = " + to_string(t) + " X: " + to_string(static_cast<int>(x)) + " Y:" + to_string(static_cast<int>(y)) +"\n";
        cout << static_cast<int>(pow((1-t),2)*Py[0]+2*(1-t)*t*Py[1]+pow(t,2)*Py[2])<<endl;
        }
    }
    cout << forIntX;
}

int main()
{
    int Px[3] = {0,0,0},Py[3] = {0,0,0};
    cout << "Hello,\nX1 ="<<Px[0]<<"\tX2 ="<<Px[1]<<"\tX3 ="<<Px[2]<< endl<<"Y1 ="<<Py[0]<<"\tY2 ="<<Py[1]<<"\tY3 ="<<Py[2]<<endl;
    for(int i = 0; i<=2;i++)
    {
        cout << "Input X"<< i << ":\n# ";
        cin >> Px[i] ;
        cout << "Input Y"<< i << ":\n# ";
        cin >> Py[i];
        system("clear");
        cout << "Hello, team\nX1 ="<<Px[0]<<"\tX2 ="<<Px[1]<<"\tX3 ="<<Px[2]<< endl<<"Y1 ="<<Py[0]<<"\tY2 ="<<Py[1]<<"\tY3 ="<<Py[2]<<endl;
    }
    Bezier(Px,Py);
    cout << "\nY.D.O.\n";
    return 0;
}
