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
};
SLL::SLL()
{
    start=NULL;
}
void SLL::insertbegin(int data)
{
    node *ajay = new node();
    ajay->item = data;
    ajay->next = NULL; // start;
    start = ajay;
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
// Derive Program
int main(){
    SLL s1;
    s1.insertbegin(34);
    s1.insertbegin(46);
}
