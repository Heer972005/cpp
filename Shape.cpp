#include<iostream>
using namespace std;
class Shape{
    private:
        int side;
        int radius;
        int lenght;
        int breadth;

    public:
        void setSquare(int side)
        {
            this->side = side;
        }
        int getSquare()
        {
            cout << "Square:";
            return side;
        }
        void setCircle(int radius)
        {
            this->radius = radius;
        }
        int getCircle()
        {
            cout << "\n🔵Circle:";
            return radius;
        }

        void setRectangle(int lenght,int breadth)
        {
            this->lenght =lenght;
            this->breadth = breadth;
        }
        int getRectangle()
        {
            cout << "\nrectangle:";
            return lenght;
            return breadth;
        }
};
int main(){
    Shape s;
    s.setSquare(20);
    cout << s.getSquare();

    s.setCircle(2);
    cout << s.getCircle();

    s.setRectangle(4,5);
    cout << s.getRectangle();
}

/*#include <iostream>
using namespace std;
class Shape
{
private:
    int r;
    int l;
    int h;

public:
    void draw(int radius)
    {
        cout << "draw circle with radius" << radius;
        r = radius;
    }
    void draw(int l, int h)
    {
        if (l == h)
            cout << "draw square with side " << l;
        else
            cout << "draw rectangle with l " << l << " and h " << h;
        this->l = l;
        this->h = h;
    }
};
int main()
{
    Shape circle;
    Shape rectangle;
    Shape square;
    circle.draw(5);
    square.draw(5, 5);
    rectangle.draw(5, 10);
    return 0;
}*/