#include "smth.h"

int SumValue(box boxes[], int size) {
    int value = 0;
    for (int i = 0; i < size; i++) {
        value += boxes[i].value;
    }
    return value;
}

bool NotBiggerThanSize(box boxes[], int size, int max_value) {
    for (int i = 0; i < size; i++) {
        if (boxes[i].height * boxes[i].length * boxes[i].width > max_value)
            return false;
    }
    return true;
}

int MaxWeight(box boxes[], int size, int maxV) {
    int max_weight_box = 0;
    for (int i = 0; i < size; i++) {
        if (boxes[i].height * boxes[i].length * boxes[i].width < maxV) {
            if (boxes[i].weight > max_weight_box) {
                max_weight_box = boxes[i].weight;
            }
        }
        return max_weight_box;
    }
}

bool PuttingIt(box boxes[], int size) {

    Data tmp;
    Data data[size];
    for (int i = 0; i < size; i++) {
        data[i].Box = boxes[i];
        data[i].volume = boxes[i].height * boxes[i].length * boxes[i].width;
    }
    for (int i = 1; i < size; i++) {
        while (data[i - 1].volume > data[i].volume) {
            tmp = data[i];
            data[i] = data[i - 1];
            data[i - 1] = tmp;
        }
    }
    for (int i = 1; i < size; i++) {
        if (data[i].Box.height < data[i - 1].Box.height || data[i].Box.length < data[i - 1].Box.length ||
            data[i].Box.width < data[i - 1].Box.width)
            return false;
    }
    return true;
}
