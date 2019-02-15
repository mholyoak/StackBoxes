//
// Created by demo on 7/14/18.
//

#include "Box.h"
#include <iostream>

Box::Box() :
    _depth{0},
    _width{0},
    _height{0}
{
    std::cout << "Box Constructor" << std::endl;
}

Box::Box(int height, int width, int depth) :
        _height{height},
        _width{width},
        _depth{depth}
{
    std::cout << "Box Constructor" << std::endl;
}

Box::~Box()
{
    std::cout << "Box Destructor" << std::endl;
}

void Box::SetDementions(int height, int width, int depth)
{
    _height = height;
    _width = width;
    _depth = depth;
}

int Box::GetHeight() const
{
    return _height;
}

int Box::GetWidth() const
{
    return _width;
}

int Box::GetDepth() const
{
    return _depth;
}

void Box::Rotate()
{
    auto temp = _height;
    _height = _depth;
    _depth = _width;
    _width = temp;
}

int Box::GetBaseArea() const
{
    return _width * _depth;
}

bool Box::operator>(const IBox& right) const
{
    //std::cout << "Box operator >" << std::endl;

    auto myMaxDimention = std::max(_width, _depth);
    auto myMinDimention = std::min(_width, _depth);
    auto rightMaxDimention = std::max(right.GetWidth(), right.GetDepth());
    auto rightMinDimention = std::min(right.GetWidth(), right.GetDepth());

    //std::cout << "My Min " << myMinDimention << " Max " << myMaxDimention << std::endl;
    //std::cout << "Rt Min " << rightMinDimention << " Max " << rightMaxDimention << std::endl;

    return myMaxDimention >= rightMaxDimention &&
           myMinDimention >= rightMinDimention &&
            (myMaxDimention > rightMaxDimention ||
             myMinDimention > rightMinDimention);
}
