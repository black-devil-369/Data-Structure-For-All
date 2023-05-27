using System;
namespace Arrays{
    class ADT{
        private int capacity;
        private int lastindex;
        private int[] ptr;
        public ADT(int cap){
            capacity=cap;
            lastindex=-1;
            ptr=new int[capacity];
        }
        public void append(int data){
            if(lastindex==capacity-1){
                Console.WriteLine("Arrays is Full");
            }
            else{
                lastindex++;
                ptr[lastindex]=data;
            }
        }
        public bool isEmpty(){
            return lastindex==-1;
        }
        public bool isFull(){
            return lastindex==capacity-1;
        }
        public int count(){
            return lastindex+1;
        }
        public int get(int index){
            if(index>=0 && index<=lastindex){
                return ptr[index];
            }
            return -1;
        }
        public void insert(int index,int data){
            int i;
            if(lastindex==capacity-1){
                Console.WriteLine("Arrays is Full");
            }
            else if(index<0 || index>lastindex){
                Console.WriteLine("Invalid index");
            }
            else{
                for(i=lastindex;i>=index;i--){
                    ptr[i+1]=ptr[i];
                }
                ptr[index]=data;
                lastindex++;
            }
        }
        public int find(int data){
            int i;
            for(i=0;i<=lastindex;i++){
                if(ptr[i]==data){
                    return i;
                }
            }
            return -1;
        }
        public void del(int index){
            int i;
            if(lastindex==-1){
                Console.WriteLine("Arrays is empty");
            }
            else if(index<0 || index>lastindex){
                Console.WriteLine("Invalid index");
            }
            else{
                for(i=index;i<lastindex;i++){
                    ptr[i]=ptr[i+1];
                }
                lastindex--;
            }
        }
        public void edit(int index,int data){
            if(index>=0 && index<=lastindex){
                ptr[index]=data;
            }
        }
        ~ADT(){
            ptr=null;
        }
    }
}
// Deriver Program;
class Arrays{
    public static void Main(String[] args){
        Arrays.ADT a = new Arrays.ADT(5);
        a.isFull();
    }
}