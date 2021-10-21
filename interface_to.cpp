#include <iostream>
 
using namespace std;
 

class Shape 
{
public:

   virtual int getArea() = 0;
   void setWidth(int w)
   {
      width = w;
   }
   void setHeight(int h)
   {
      height = h;
   }
protected:
   int width;
   int height;
};
 
class Rectangulo: public Shape
{
public:
   int getArea()
   { 
      return (width * height); 
   }
};

class Triangulo: public Shape
{
public:
   int getArea()
   { 
      return (width * height)/2; 
   }
};
 
int main(void)
{
   Rectangulo Rect;
   Triangulo  Tri;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   cout << "area del rectangulo: " << Rect.getArea() << endl;

   Tri.setWidth(5);
   Tri.setHeight(7);
 
   cout << "area del triangulo: " << Tri.getArea() << endl; 

   return 0;
}
