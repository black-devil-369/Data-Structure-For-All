#include<iostream>
using namespace std;
template<typename T>
class Arrays{
    private:
    int capacity;
    int lastindex;
    T  *ptr;
    public:
    // this function is used to ready an arrays
    Arrays(int);
    // this function is used for to add element inside an arrays
    void append(T);
    // this is check an arrays is full;
    bool isFull();
    // this function is used for check is empty 
    bool isEmpty();
    // this function is used to find how many elment inside a arrays
    int count();
    // this function is used to return elment present at index;
    int get(int);
    // this function is usef for find data are present or not;
    int find(T);
    void printarray();
};
// this code is used for to ready an arrays
template<typename T>Arrays<T>::Arrays(int cap)
{
    capacity = cap;
    lastindex=-1;
    ptr = new int[capacity];
}
template<typename T>void Arrays<T>::append(T data)
{
    if(lastindex==capacity-1){
        cout<<endl<<"Arrays is full"<<endl;
    }
    else{
        lastindex++;
        ptr[lastindex]=data;
    }
}
template<typename T>bool Arrays<T>::isFull()
{
    return lastindex =capacity-1;
    cout<<endl<<"It is not Full"<<endl;
}
template<typename T>bool Arrays<T>::isEmpty()
{
    return lastindex ==-1;
}
template<typename T>int Arrays<T>::count()
{
    return lastindex+1;
}
template<typename T>int Arrays<T>::get(int index)
{
    if(index>=0 && index<=lastindex){
        return ptr[index];
    }
    else{
        cout<<endl<<"index are invalid"<<endl;
    }
    return -1;
}
template<typename T>int Arrays<T>::find(T data)
{
    int i;
    for(i=0;i<=lastindex;i++){
        if(ptr[i]==data){
            return i;
        }
    }
    return -1;
}
template<typename T>void Arrays<T>::printarray(){
    for(int i=0;i<count();++i){
        cout<<get(i)<<" ";
    }
    cout<<endl;
}
// Deriver Program
int main(){
    int i,n,b;
    cout<<"Ener the size for Arrays"<<endl;
    cin>>n;
    Arrays<int>a1(n);
    if(a1.isEmpty()){
        cout<<endl<<"Arrays is empty"<<endl;
    }
    for(i=0;i<n;i++){
        cin>>b;
        a1.append(b);
    }
    a1.printarray();
    return 0;
}