#include <vector>
#include "Box.h"

class Container {
private:
    std::vector<Box> boxes;
    int length;
    int width;
    int height;
    double weight;

    Container(int input_length, int input_width, int input_height, double input_weight) {
        length = input_length;
        width = input_width;
        height = input_height;
        weight = input_height;
    }
    
};