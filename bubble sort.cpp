#include <stdio.h>
#include <iostream>

using namespace std;

void bubbleSort(int array[],int iteration, char order){
    int temp,sort;

    if(order =='d'){
        sort = 1;
    }else{
        sort = 2;
    }

    if(sort == 1){
        for(int i=0;i<iteration;i++){
            if(array[i]<array[i+1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }else{
        for(int i=0;i<iteration;i++){
            if(array[i]>array[i+1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }

}

int main(){

    int array[10],iteration;
    char order;
    cout<<"Array Size: ";
    cin>>iteration;

    for(int i=0;i<iteration;i++){
        cin>>array[i];
    }

    cout<<"Sorting order: ";
    cin>>order;

    bubbleSort(array, iteration, order);
    return 0;
}