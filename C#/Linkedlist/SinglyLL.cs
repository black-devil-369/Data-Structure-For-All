using System;
namespace SinglyLinkedList{
    class Node{
        public int item;
        public Node next;
    }
    class SLL{
        private Node start;
        public SLL(){
            start=null;
        }
        public void insertAtstart(int data){
            Node n = new Node();
            n.item=data;
            n.next=start;
            start=n;
        }
        public void insertAtLast(int data){
            Node n = new Node();
            Node t;
            n.item=data;
            n.next=null;
            t=start;
            while(t.next!=null){
                t=t.next;
            }
            t.next=n;
        }
        public Node search(int data){
            Node t;
            if(start!=null){
                t=start;
                while(t.next!=null){
                    if(t.item==data){
                        return t;
                    }
                    else{
                        return null;
                    }
                    t=t.next;
                }
            }
            else{
                Console.WriteLine("Empty List");
            }
        }
        public void insertAtNode(Node t,int data){
            Node K;
            Node n = new Node();
            if(t!=null){
                n.item=data;
                K=start;
                while(K.next!=null){
                    K=K.next;
                    if(K==t){
                        n.next=K.next;
                        K.next=n;
                    }
                }
            }
        }
        public void deleteFirstNode(){
            Node t;
            if(start!=null){
                t=start;
                start=start.next;
                t.next=null;
                t=null;
            }
        }
        public void printlist(){
            Node t;
            t=start;
            while(t.next!=null){
                Console.Write(t.item+" ");
                t=t.next;
            }
        }
    }
}
class List{
    public static void Main(String[] args){
        SinglyLinkedList.SLL s= SinglyLinkedList.SLL();
        s.insertAtstart(25);
        s.printlist();
    }
}