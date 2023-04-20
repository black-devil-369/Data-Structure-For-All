#include<iostream>
#include<stdio.h>
using namespace std;
class Arrays
{
    private:
        int capacity;
        int lastindex;
        int *ptr;
    public:
        Arrays(int);
        void append(int);
        bool isEmpty();
        bool isFull();
        int get(int);
        int count();
        void edit(int,int);
        void insert(int,int);
        
}
Arrays::Arrays(int cap)
{
    capacity=cap;
    lastindex=-1;
    ptr= new int[capacity];
}
void Arrays::append(int data)
{
    if(lastindex==capacity-1)
    {
        cout<<"Arrays is already Full"<<endl;
    }
    else{
        lastindex++;
        ptr[lastindex]=data;
    }
}
bool Arrays:: isEmpty()
{
    return lastindex==-1;
}
bool Arrays::isFull()
{
    return lastindex==capacity-1;
}
int Arrays::get(int index)
{
    if(index>=0 && index<=lastindex)
    {
        return ptr[index];
    }
    return -1;
}
int Arrays::count(){
    return lastindex+1;
}
void Arrays::edit(int index,int data)
{
    if(index>=0 && index<=lastindex)
    {
        ptr[index]=data;
    }

}
void Arrays::insert(int index,int data)
{
    if(index>=0 && index<=lastindex)
    {
        ptr[index]=data;
    }
    isFull();
}