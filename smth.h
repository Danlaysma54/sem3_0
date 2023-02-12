struct box {
    int length;
    int width;
    int height;
    double weight;
    int value;

    box(int length_input, int width_input, int height_input, double weight_input, int value_input) {
        length = length_input;
        width = width_input;
        height = height_input;
        weight = weight_input;
        value = value_input;
    }

    box() {
        length = 0;
        width = 0;
        height = 0;
        weight = 0;
        value = 0;
    }
};

struct Data {
    box Box;
    int volume;

    Data() {
        volume = 0;
    }
};

int SumValue(box[], int);

bool NotBiggerThanSize(box[], int, int);

int MaxWeight(box [], int, int);

bool PuttingIt(box[], int);
