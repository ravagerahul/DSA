class Stack {
    
public:
    int size=0;
    int *arr;
    int i=-1;
    Stack(int capacity) {
        // Write your code here.
        arr=new int[capacity];
        size=capacity;
    }

    void push(int num) {
        // Write your code here.
        if(!isFull())
        {
        i++;
        arr[i]=num;
       }
    }

    int pop() {
        // Write your code here.
        if(i==-1)
        {
            return -1;
        }
        else
        {
            int x=arr[i];
            i--;
            
            return x;
        }
    }
    
    int top() {
        // Write your code here.
        if(i==-1)
        {
            return -1;
        }
        else
        {
            return arr[i];
        }
    }
    
    int isEmpty() {
        // Write your code here.
        if(size==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
    int isFull() {
        // Write your code here.
        if(size==i)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
};