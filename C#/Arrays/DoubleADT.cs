using System;
class DoubleArray{
    private int capacity;
    private int lastindex;
    private int[] ptr;
    public DoubleArray(int cap){
        capacity=cap;
        lastindex=-1;
        ptr=new int[capacity];
    }
    public void doublearray(){
        int[] temp;
        temp = new int[2*capacity];
        int i;
        for(i=0;i<=lastindex+1;i++){
            temp[i]=ptr[i];
        }
        ptr=null;
        ptr=temp;
        capacity*=2;
    }
}