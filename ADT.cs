using System;
class Arrays{
    public int capacity;
    public int lastindex;
    public int []ptr;
    public Arrays(int cap){
        capacity=cap;
        lastindex=-1;
        ptr = new int[capacity];
    }
    public void append(int data){
        if(lastindex==capacity-1){
            Console.WriteLine("Array is Already Full");
        }
        else{
            lastindex++;
            ptr[lastindex]=data;
        }
    }
    public void appendAtindex(int index,int data){
        
    }
    public void editAtindex(int index,int data){
        if(index>=0 && index<=lastindex){
            ptr[index]=data;
        }
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
    public void printarrays(){
        for(int i=0; i<count();++i){
            Console.Write(get(i)+" ");
        }
        Console.WriteLine(" ");
    }
    public bool isEmpty(){
        return lastindex==-1;
    }
    public bool isFull(){
        return lastindex==capacity-1;
    }
    ~Arrays(){
        ptr = null;
    }
}
// Deriver Program
class ADT{
    public static void Main(String[] args){
        Arrays  a = new Arrays(3);
        a.append(46);
        a.append(48);
        a.append(40);
        a.editAtindex(1,562);
        a.printarrays();
       // a.count();
    }
}