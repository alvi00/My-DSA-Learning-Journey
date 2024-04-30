#include"header.h"
alvi::alvi(){
count=0;
rear=0;
front=0;
}

bool alvi::isfull(){
    if(max_item==count){
        return true;
    }
    else{
        return false;
    }
}

bool alvi::isempty(){
    if(count==0){
        return true;
    }
    else{
        return false;
    }
}

void alvi::enqueue(int a){
    if(isfull()==true){
        throw fullqueue();
    }
    else{
        arr[rear%max_item]=a;
        rear++;
        count++;
    }
}

void alvi::dequeue(){
    if(isempty()==true){
        throw emptyqueue();
    }else{
        arr[front%max_item]=-1;
        front++;
        count--;
    }
}

int alvi::top(){
    if(isempty()==true){
        throw emptyqueue();
    }else{
        return arr[front%max_item];
    }
}

void alvi::print(){
 if(isempty()==true){
        throw emptyqueue();
    }
    else{

        for(int i=front;i<rear;i++){
            cout<<arr[i%max_item]<<"  ";
        }
        cout<<endl;
    }

}

