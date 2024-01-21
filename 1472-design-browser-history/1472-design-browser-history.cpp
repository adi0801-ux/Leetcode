struct Node{
    Node* prev=NULL;
    Node* next=NULL;
    string url;
    Node(string url) : prev(nullptr), next(nullptr), url(url) {}
};
class BrowserHistory {
public:
    Node* curr=nullptr;
    BrowserHistory(string homepage) {
        curr = new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode = new Node(url);
        curr->next=newNode;
        newNode->prev=curr;
        curr=curr->next;
    }
    
    string back(int steps) {
        while(steps){
            if(curr->prev){
                curr=curr->prev;
            }else break;
            steps--;
        }
        return curr->url;
    }
    
    string forward(int steps) {
        while(steps){
            if(curr->next){
                curr=curr->next;
            }else break;
            steps--;
        }
        return curr->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */