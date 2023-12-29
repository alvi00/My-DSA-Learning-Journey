#include<bits/stdc++.h>
using namespace std;

//so in set what happens is every element is in sorted order
//and you can not have any double elements which are same
//like if you have 1 then you cant have 1 again in the set
//so every element is unique and sorted
void learn_set(){

    set<int>alvi;
    alvi.emplace(10);
    alvi.insert(20);
    alvi.insert(2);
    alvi.insert(33);
    alvi.insert(2);

    set<int>::iterator it=alvi.find(10);
    //so basically here if you use find function you can have the address using the itterator

    auto itt= alvi.find(200);
    //here 200 is not in the set so the itterator will have the position of alvi.end();

    alvi.erase(10);
    alvi.erase(it);
    //also can erase by the itterator

    auto it1=alvi.find(10);
    auto it2=alvi.find(20);

    alvi.erase(it1,it2);

    alvi.count(10);
    //so it will give how many times the number is
    //as we know that all the numbers are unique
    //so if the number is there it will reuturn 1
    //othetwise will return 0

    auto st=alvi.lower_bound(33);
    //so basically what lower_bound is that if i say right lower_bound(33) it will check
    //where is 33 and if finds then it will give the position to the itterator
    //if it cant find the number then the itterator will have the position of next greatest element 


    auto st1=alvi.upper_bound(10);
    //here what will happen is like here it is upper_bound(10);
    //so here where the 10 is the itterator will have the position of the next greatest element
    //so it will never point to that exact element
    //rather it will point to the next greatest element of the given number


}
int main(){

    learn_set();
    return 0;
}
