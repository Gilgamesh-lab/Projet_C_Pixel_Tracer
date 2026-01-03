# include "Area.h"
# include "Line.h"
# include "Circle.h"
#include "Rectangle.h"
#include "Square.h"


int main(){
    Area drawZone(12, 14);
    auto shape1 = std::make_shared<Line>(5, 5, 10, 10);
    auto shape2 = std::make_shared<Circle>(4, 4, 3);
    auto shape3 = std::make_shared<Square>(10, 5, 3);
    auto shape4 = std::make_shared<Rectangle>(8, 0, 3, 1);
    drawZone.addShape(shape1);
    drawZone.addShape(shape2);
    drawZone.addShape(shape3);
    drawZone.addShape(shape4);
    drawZone.draw();
    drawZone.print();
    /*drawZone.erase();
    drawZone.draw();
    drawZone.print();*/
}
