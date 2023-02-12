#include <iostream>
#include "../headers/Methods.h"

int main() {
    Box box1 = Box(3, 3, 3, 3, 3);
    Box box2 = Box(1, 1000, 1, 1, 1);
    Box box3 = Box(4, 4, 4, 4, 4);
    Box box4 = Box(5, 5, 5, 5, 5);
    Box boxes[4] = {box1, box2, box3, box4};
     std::cout << PuttingIt(boxes, 4);
}

