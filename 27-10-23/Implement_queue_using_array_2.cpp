class Queue{

    int start=-1;
    int end=-1;
    int currsize=0;
    int maxsize;
    int *arr;

    Queue(int size)
    {
        arr=new int[size];
        maxsize=size;
    }

    void push(int num)
    {
        if(currsize==maxsize)
        {
            cout<<"queue is full";
            return;
        }

        if(end==-1)
        {
            start=0;
            end=0;
        }
        else
        {
            end=(end+1)%maxsize;
        }

        arr[end]=num;
        currsize++;
    }

    int pop()
    {
        if(currsize==0)
        {
            cout<<"queue is empty";
            return;
        }

        

        int popped=arr[start];
        if(currsize==1)
        {
            start=-1;
            end=-1;
        }
        start=(start+1)%maxsize;

        currsize--;
        return popped;

    }

    int top()
    {
        if(currsize==0)
        {
            return -1;
        }
        return arr[start];

    }
    int size()
    {
        return currsize;
    }

};