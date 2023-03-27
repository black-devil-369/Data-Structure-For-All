#include<iostream>
using namespace std;
class Arrays{
    private:
    int capacity;
    int lastindex;
    int *ptr;
    public:
    // this function is used to ready an arrays
    Arrays(int);
    // this function is used for to add element inside an arrays
    void append(int);
    // this is check an arrays is full;
    bool isFull();
    // this function is used for check is empty 
    bool isEmpty();
    // this function is used to find how many elment inside a arrays
    int count();
    // this function is used to return elment present at index;
    int get(int);
    // this function is usef for find data are present or not;
    int find(int);
};
// this code is used for to ready an arrays
Arrays::Arrays(int cap)
{
    capacity = cap;
    lastindex=-1;
    ptr = new int[capacity];
}
void Arrays::append(int data)
{
    if(lastindex==capacity-1){
        cout<<endl<<"Arrays is full"<<endl;
    }
    else{
        lastindex++;
        ptr[lastindex]=data;
    }
}
bool Arrays::isFull()
{
    return lastindex =capacity-1;
    cout<<endl<<"It is not Full"<<endl;
}
bool Arrays::isEmpty()
{
    return lastindex ==-1;
}
int Arrays::count()
{
    return lastindex+1;
}
int Arrays::get(int index)
{
    if(index>=0 && index<=lastindex){
        return ptr[index];
    }
    else{
        cout<<endl<<"index are invalid"<<endl;
    }
    return -1;
}
int Arrays::find(int data)
{
    int i;
    for(i=0;i<=lastindex;i++){
        if(ptr[i]==data){
            return i;
        }
    }
    return -1;
}
// Deriver Program
int main(){
    Arrays a1(5);
    if(a1.isEmpty()){
        cout<<endl<<"Arrays is empty"<<endl;
    }
    int b;
    for(int i=0;i<5;i++){
        cin>>b;
        a1.append(b);
    }
    for(int i=0;i<a1.count();i++){
        cout<<a1.get(i)<<" ";
    }
    cout<<endl;
    a1.find(34);
    cout<<endl;
}