#include <iostream>
#include "../headers/methods.h"

int main() {
    box box1 = box(3, 3, 3, 3, 3);
    box box2 = box(1, 1000, 1, 1, 1);
    box box3 = box(4, 4, 4, 4, 4);
    box box4 = box(5, 5, 5, 5, 5);
    box boxes[4] = {box1, box2, box3, box4};
    std::cout << PuttingIt(boxes, 4);
}

