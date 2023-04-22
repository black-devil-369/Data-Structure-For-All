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
        void del(int);
        int find(int);
        void printarray();
        ~Arrays();
        
};
void Arrays::printarray(){
    int i;
    for(i=0;i<count();i++){
        cout<<get(i)<<" ";
    }
    cout<<endl;
}
int Arrays::find(int data){
    int i;
    for(i=0;i<=lastindex;i++){
        if(ptr[i]==data){
            return i;
        }
        cout<<"Arrays is Empty"<<endl;
    }
    return -1;
}
Arrays::~Arrays(){
    delete[]ptr;
}
Arrays::Arrays(int cap)
{
    capacity=cap;
    lastindex=-1;
    ptr= new int[capacity];
}
void Arrays::del(int index){
    int i;
    if(lastindex==-1){
        cout<<"Arrays is Empty"<<endl;
    }
    else if(index<0 || index>lastindex){
        cout<<"Invalid index"<<endl;
    }
    else{
        for(i=index;i<lastindex;i++){
            ptr[i]=ptr[i+1];
        }
        lastindex--;
    }
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
void Arrays::insert(int index,int data){
    int i;
    if(lastindex==capacity-1){
        cout<<"Arrays is FuLL"<<endl;
    }
    else if(index<0 || index>lastindex+1){
        cout<<"Invalid index"<<endl;
    }
    else{
        for(i=lastindex;i>=index;i--){
            ptr[i+1]=ptr[i];
        }
        ptr[index]=data;
        lastindex++;
    }
}
// Deriver program;
int main(){
    Arrays a(5);
    a.append(25);
    a.printarray();
    return 0;
}