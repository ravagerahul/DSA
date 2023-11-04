class LFUCache {
public:
    struct Node{
        int key,value,cnt;
        Node* next;
        Node* prev;
        Node(int key,int value)
        {
            this->key=key;
            this->value=value;
            cnt=1;
        }
    };
    struct List{
        int size;
        Node* head=new Node(0,0);
        Node* tail=new Node(0,0);
        List(){
            head->next=tail;
            tail->prev=head;
            size=0;
        }
        void addNode(Node* node)
        {
            Node* temp=head->next;
            head->next=node;
            node->next=temp;
            temp->prev=node;
            node->prev=head;
            size++;
        }
        void delNode(Node* node)
        {
            node->prev->next=node->next;
            node->next->prev=node->prev;
            size--;
        }
    };

    map<int,Node*> keyNode;
    map<int,List*>freqList;
    int maxSize,miniFreq,currSize;
    LFUCache(int capacity) {

        maxSize=capacity;
        miniFreq=0;
        currSize=0;

        
    }
    void updateNode(Node* node)
    {
        keyNode.erase(node->key);
        freqList[node->cnt]->delNode(node);
        if(node->cnt==miniFreq && freqList[node->cnt]->size==0)
        {
            miniFreq++;
        }

        List* nexthigherlist=new List();

        if(freqList.find(node->cnt+1)!=freqList.end())
        {
            nexthigherlist=freqList[node->cnt+1];
        }
        node->cnt+=1;
        nexthigherlist->addNode(node);
        freqList[node->cnt]=nexthigherlist;
        keyNode[node->key]=node;
    }
    int get(int key) {
        if(keyNode.find(key)!=keyNode.end())
        {
            Node* node=keyNode[key];
            
            int val=node->value;
            updateNode(node);
            return val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(maxSize==0)
        return;

        if(keyNode.find(key)!=keyNode.end())
        {
            Node* node=keyNode[key];
            node->value=value;
            updateNode(node);
        }
        else
        {
            if(currSize==maxSize)
            {
                List* miniFreqlist=freqList[miniFreq];
                keyNode.erase(miniFreqlist->tail->prev->key);
                freqList[miniFreq]->delNode(miniFreqlist->tail->prev);
                currSize--;
            }
            currSize++;
            miniFreq=1;
            List* minifreqlist=new List();

            if(freqList.find(miniFreq)!=freqList.end())
            {
                minifreqlist=freqList[miniFreq];
            }
            Node* node=new Node(key,value);
            minifreqlist->addNode(node);
            keyNode[key]=node;
            freqList[miniFreq]=minifreqlist;
        }
    }
};

