#include <vector>
#include "Box.h"

class Container {
private:
    std::vector<Box> boxes;
    int length;
    int width;
    int height;
    double weight;
public:
    Container(int input_length, int input_width, int input_height, double input_weight) {
        length = input_length;
        width = input_width;
        height = input_height;
        weight = input_height;
    }

    void AddBoxByIndex(Box box, int index) {
        boxes.insert(boxes.begin() + index, box);
    }

    void DeleteBoxByIndex(int index) {
        boxes.erase(boxes.begin() + index);
    }

    int NumbOfBoxes() {
        return boxes.size();
    }

    double AllBoxesWeight() {
        double all_weight = 0;
        for (int i = 0; i < boxes.size(); i++) {
            all_weight += boxes.at(i).GetWeight();
        }
        return all_weight;
    }

    int AllBoxesValue() {
        int all_value = 0;
        for (int i = 0; i < boxes.size(); i++) {
            all_value += boxes.at(i).GetValue();
        }
        return all_value;
    }

    Box GetBox(int index) {
        return boxes[index];
    }

    int AddLastBox(Box box) {
        if (AllBoxesWeight() + box.GetWeight() > weight) {
            return -1;
        }
        boxes.push_back(box);
        return boxes.size();
    }
};
