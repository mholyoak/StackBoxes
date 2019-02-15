#ifndef STACKBOXES_BOX_H
#define STACKBOXES_BOX_H

#include "IBox.h"

class Box : public IBox {

public:
    Box();
    Box(int height, int width, int depth);
    virtual ~Box();

    void SetDementions(int height, int width, int depth) override;
    int GetHeight() const override;
    int GetWidth() const override;
    int GetDepth() const override;
    void Rotate() override;
    int GetBaseArea() const override;
    bool operator>(const IBox& right) const override;

private:
    int _width;
    int _depth;
    int _height;
};


#endif //STACKBOXES_BOX_H
