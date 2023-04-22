class Array{
    private int capacity;
    private int lastindex;
    private int[]ptr;
    Array(int cap){
        capacity=cap;
        lastindex=-1;
        ptr=new int[capacity];
    }
    public void append(int data){
        if(lastindex==capacity-1){
            System.out.println("Arrays is Full");
        }
        else{
            lastindex++;
            ptr[lastindex]=data;
        }
    }
    public void insert(int index,int data){
        int i;
        if(lastindex==capacity-1){
            System.out.println("Arrays is FuLL");
        }
        else if(index<0 || index>lastindex){
            System.out.println("Invalid index");
        }
        else{
            for(i=lastindex;i>=index;i--){
                ptr[i+1]=ptr[i];
            }
            ptr[index]=data;
            lastindex++;
        }
    }
    public void edit(int index,int data){
        if(index>=0 && index<=lastindex){
            ptr[index]=data;
        }
    }
    public void del(int index){
        int i;
        if(lastindex==-1){
            System.out.println("Arrays is Empty");
        }
        else if(index<0 || index>lastindex){
            System.out.println("Invalid index");
        }
        else{
            for(i=index;i<lastindex;i++){
                ptr[i]=ptr[i+1];
            }
            lastindex--;
        }
    }
    public boolean isEmpty(){
        return lastindex==-1;
    }
    public boolean isFull(){
        return lastindex==capacity-1;
    }
    public int count(){
        return lastindex+1;
    }
    public int get(int index){
        if(index>=0 || index<=lastindex){
            return ptr[index];
        }
        return -1;
    }
    public int find(int data){
        int i;
        if(lastindex==-1){
            System.out.println("Arrays is Empty");
        }
        else{
            for(i=0;i<=lastindex;i++){
                if(ptr[i]==data){
                    return i;
                }
            }
        }
        return -1;
    }
    public void printarray(){
        for(int i=0;i<count();i++){
            System.out.print(get(i)+" ");
        }
        System.out.println(" ");
    }
}
// Deriver Program
class Program{
    public static void main(String[] args){
        Array a =new Array(5);
        a.append(25);
        a.append(21);
        a.append(78);
        a.append(29);
        a.insert(1,40);
        a.printarray();
        System.out.println(a.find(78));
        System.out.println("Done");
    }
}