#include <iostream>

#include "Box.h"
#include <memory>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    {
        shared_ptr<IBox> box1 = make_shared<Box>();
        shared_ptr<IBox> box2 = make_shared<Box>(2, 2, 3);
        shared_ptr<IBox> box3 = make_shared<Box>(1, 1, 4);

        box1->SetDementions(1, 2, 3);

        cout << "Base Area " << to_string(box1->GetBaseArea()) << endl;
        cout << "Box2 > Box1 " << to_string(*box2 > *box1) << endl;
        cout << "Box3 > Box1 " << to_string(*box3 > *box1) << endl;

        box1->Rotate();
        cout << "Base Area " << to_string(box1->GetBaseArea()) << endl;
        cout << "Box2 > Box1 " << to_string(*box2 > *box1) << endl;
        cout << "Box3 > Box1 " << to_string(*box3 > *box1) << endl;

        box1->Rotate();
        cout << "Base Area " << to_string(box1->GetBaseArea()) << endl;
        cout << "Box2 > Box1 " << to_string(*box2 > *box1) << endl;
        cout << "Box3 > Box1 " << to_string(*box3 > *box1) << endl;
    }

    cout << "End of World!" << endl;
    return 0;
}