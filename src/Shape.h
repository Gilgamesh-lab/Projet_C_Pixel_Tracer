#ifndef SHAPE_H
#define SHAPE_H

#include <vector>
#include "Pixel.h"

// Déclaration anticipée
class Pixel;

class Shape {
protected:
    int id;
    static int nextId;

public:
    Shape();
    virtual ~Shape() = default;

    virtual void print() const = 0;
    virtual std::vector<Pixel> toPixels() const = 0;

    int getId() const { return id; }
};

#endif // SHAPE_H
