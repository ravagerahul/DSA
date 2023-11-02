
class LRUCache {
public:
    class Node{
        public:
        int val,key;
        Node* prev;
        Node* next;
        Node(int key,int val)
        {
            this->key=key;
            this->val=val;
        }
    };
    Node* head=new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    map<int,Node*> m;
    int size=0;
    LRUCache(int capacity) {
        head->next=tail;
        tail->prev=head;
        size=capacity;
    }
    void addNode(Node* newnode)
    {
        Node* temp=head->next;
        head->next=newnode;
        newnode->next=temp;
        temp->prev=newnode;
        newnode->prev=head;
    }
    void deleteNode(Node* delNode)
    {
        delNode->prev->next=delNode->next;
        delNode->next->prev=delNode->prev;
    }
    int get(int key) {
        
        

        if(m.find(key)!=m.end())
        {
            Node* delnode=m[key];
            int val1=delnode->val;
            m.erase(key);
            

            deleteNode(delnode);
            addNode(delnode);
            m[key]=head->next;
            return val1;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end())
        {
            
                Node* temp=m[key];
                m.erase(key);
                deleteNode(temp);
                
            
        }

        
            if(size==m.size())
            {
                Node* temp= tail->prev;
                m.erase(tail->prev->key);
                deleteNode(temp);
                
                
            }
        
        Node* newnode= new Node(key,value);
        
        addNode(newnode);
        m[key]=head->next;
        

    }
};