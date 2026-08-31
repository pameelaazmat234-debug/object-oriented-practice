#include <iostream>
using namespace std;

class Rectangle{
    private:
        int lenght;
        int width;
    public:
        Rectangle(int l, int w)
        {
            if(l <= 0)
            {
                lenght = 0;
            }
            else 
            {
                lenght = l;
             }

             if(w <= 0)
             {
                width = 0;
             }
             else 
             {
                width = w;
             }
        }
        int calculateArea()
        {
            int area = lenght * width;
            return  area;
        }
        void display()
        {
            cout << "Area OF rectangle:  " <<  calculateArea() << endl;
        }

};
int main()
{
    Rectangle r1(20, 10);
    r1.display();
}