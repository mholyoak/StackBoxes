#ifndef STACKBOXES_IBOX_H
#define STACKBOXES_IBOX_H

class IBox
{
public:
    virtual ~IBox() {};
    virtual void SetDementions(int height, int width, int depth) = 0;
    virtual int GetHeight() const = 0;
    virtual int GetWidth() const = 0;
    virtual int GetDepth() const = 0;
    virtual void Rotate() = 0;
    virtual int GetBaseArea() const = 0;
    virtual bool operator>(const IBox& right) const = 0;
};

#endif //STACKBOXES_IBOX_H
