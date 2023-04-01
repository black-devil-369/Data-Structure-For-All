#include<iostream>
using namespace std;
struct node
{
    int item;
    node *next;
};
class SLL{
    private:
    node *start;
    public:
    // creating a constructor
    SLL();
    // function for inserting at begin
    void insertbegin(int);
    // function for inserting at the end
    void insertEnd(int);
    void printlist();
};
SLL::SLL()
{
    start=NULL;
}
void SLL::insertbegin(int data)
{
    node *ajay = new node();
    if(start==NULL){
        ajay->item = data;
        ajay->next = start;
        start=ajay;
    }
    else{
        ajay->item = data;
        ajay->next = start->next;
        start=ajay;
    }
}
void SLL::insertEnd(int data)
{
    node *t;
    node *n = new node();
    n->item = data;
    n->next = NULL;
    if(start==NULL){
        start=n; // insertbegin(data);
    }
    else{
        while(t->next!=NULL)
        {
            t =t->next;

        }
        t->next = n;
    }
}
void SLL::printlist(){
    node *t;
    t=start;
    while(t!=NULL){
        cout<<t->item<<" ";
        t=t->next;
    }
    cout<<endl;
}
// Derive Program
int main(){
    SLL s1;
    s1.insertbegin(46);
    s1.insertbegin(90);
    s1.insertbegin(45);
    s1.insertbegin(34);
    s1.printlist();
}
