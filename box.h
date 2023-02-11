struct box
{
    int length;
    int width;
    int height;
    double weight;
    int value;
    box(int length_input,int width_input,int height_input,double weight_input,int value_input){
        length=length_input;
        width=width_input;
        height=height_input;
        weight = weight_input;
        value =value_input;
    }
};