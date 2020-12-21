#include<iostream>
#include<math.h>
using namespace std;
class Polar; //source class
class Rectangular
{
    int x;
    int y;
    public:
       Rectangular()
       {
           x = y = 0;
       }
       Rectangular(int xco , int yco)
       {
           x = xco;
           y = yco;
       }
       void show_data()
       {
           cout << "\nx-coordinate = " << x;
           cout << "\ny-coordinate = " << y;
       }
};
class Polar
{
    int radius;
    int angle;
    public:
       Polar (int r , int a)
       {
           radius = r;
           angle = a;
       }
       operator Rectangular()
       {
           int xco = radius * cos(angle);
           int yco = radius * sin(angle);
           return Rectangular (xco , yco);
       }
};
int main()
{
    int x , y;
    cout << "Value of x coordinate: ";
    cin >> x;
    cout << "\nValue of y coordinate: ";
    cin >> y;
    Polar P (x,y);
    Rectangular R;
    R = P;
    R.show_data();
    return 0;
}