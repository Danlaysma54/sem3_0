#include "../headers/structures_classes.h"

int SumValue(box boxes[], int size) {
    int value = 0;
    for (int i = 0; i < size; i++) {
        value += boxes[i].GetValue();
    }
    return value;
}

bool NotBiggerThanSize(box boxes[], int size, int max_value) {
    for (int i = 0; i < size; i++) {
        if (boxes[i].GetHeight() * boxes[i].GetLength() * boxes[i].GetWidth() > max_value)
            return false;
    }
    return true;
}

int MaxWeight(box boxes[], int size, int maxV) {
    int max_weight_box = 0;
    for (int i = 0; i < size; i++) {
        if (boxes[i].GetHeight() * boxes[i].GetLength() * boxes[i].GetWidth() < maxV) {
            if (boxes[i].GetWeight() > max_weight_box) {
                max_weight_box = boxes[i].GetWeight();
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
        data[i].volume = boxes[i].GetHeight() * boxes[i].GetLength() * boxes[i].GetWidth();
    }
    for (int i = 1; i < size; i++) {
        while (data[i - 1].volume > data[i].volume) {
            tmp = data[i];
            data[i] = data[i - 1];
            data[i - 1] = tmp;
        }
    }
    for (int i = 1; i < size; i++) {
        if (data[i].Box.GetHeight() < data[i - 1].Box.GetHeight() ||
            data[i].Box.GetLength() < data[i - 1].Box.GetLength() ||
            data[i].Box.GetWidth() < data[i - 1].Box.GetWidth())
            return false;
    }
    return true;
}

bool equals(box box1, box box2) {
    return (box1.GetWidth() == box2.GetWidth() && box1.GetHeight() == box2.GetHeight() &&
            box1.GetLength() == box2.GetLength() &&
            box1.GetValue() == box2.GetValue() && (box1.GetWeight() - box2.GetWeight()) < 0.000005);
}
