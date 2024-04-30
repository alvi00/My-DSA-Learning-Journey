#include"header.h"
stack_alvi::stack_alvi(){
    top=-1;
}

bool stack_alvi::isfull(){
    if(top==(max_item-1)){
        return true;
    }
    else{
        return false;
    }
}

bool stack_alvi::isempty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
}

int stack_alvi::push(int a){
    if(isfull()==true){
        throw fullstack();
    }
    else{
        top++;
        arr[top]=a;
    }
}

void stack_alvi::pop(){
    if(isempty()==true){
        throw emptystack();
    }
    else{
        top--;
    }
}

int stack_alvi::top_val(){
    return arr[top];
}

int stack_alvi::length(){
    return top+1;
}

void stack_alvi::print(){
    if(isempty()==true){
        throw fullstack();
    }
    else{

        for(int i=0;i<=top;i++){
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }
}
