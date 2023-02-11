#include "box.h"
int SumValue(box boxes[],int size){
int value=0;
for(int i=0;i<size;i++){
    value+=boxes[i].value;
}
return value;
}
bool NotBiggerThanSize(box boxes[],int size,int max_value){
for(int i=0;i<size;i++){
    if (boxes[i].height*boxes[i].length*boxes[i].width > max_value)
    return false;
}
return true;
}
int MaxWeight(box boxes[],int size,int maxV){
    int max_weight_box=0;
    for(int i=0;i<size;i++){
    if(boxes[i].height*boxes[i].length*boxes[i].width<maxV){
        if(boxes[i].weight>max_weight_box){
            max_weight_box=boxes[i].weight;
        }
    }
    return max_weight_box; 
}
}
bool PuttingIt(box boxes[],int size){
    struct Data
    {
       box box;
        int volume;
    };
    Data tmp;
    Data data[size];
    for (int i=0;i<size;i++){
        data[i].box=boxes[i];
        data[i].volume=boxes[i].height*boxes[i].length*boxes[i].width;
    }
    for (int i=1;i<size;i++){
        for (int j=0;j<i;j++) {
            if(data[j].volume>data[i].volume)
            tmp=data[i];
            data[i]=data[j];
            data[j]=tmp;
        }
    }
    for(int i=0;i<size;i++){
        if(data[i].box.height<data[i+1].box.height && data[i].box.length<data[i+1].box.length && data[i].box.weight<data[i+1].box.weight)
        return false;
    }
    return true;
}

