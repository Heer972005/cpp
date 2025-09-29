#include<iostream>
using namespace std;

class Node{

    public:
        int id;
        string owner;
        Node *next;

    Node(int id, string owner)
    {
        this->id = id;
        this->owner = owner;
        next = NULL;
    }
};


class Queue{
    Node *front, *rear;
    public:
    Queue(){
        front = rear = NULL;
    }

    //destructor
    ~Queue(){
        while(front){
            if(front==rear){
                delete front;
                break;
            }
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }

    void enqueue(int id,string owner){
        Node *bag = new Node(id, owner);
        if (!rear)
            front = rear = bag;
        else
        {
            rear->next = bag;
            rear = bag;
        }
        rear->next = front;
    }

    void dequeue(){
        if (!front)
        {
            cout << "No bags";
            return;
        }
        cout << "Processed: " << front->id << " " << front->owner;

        if(front==rear){
            delete front;
            front = rear = NULL;
        }
        else
        {
            Node *temp = front;
            front = front->next;
            rear->next = front;
            delete temp;
        }
    }
};
int main(){
    Queue q;
    string st;
    cin >> st;
    while (st != "end")
    {
        if (st== "enqueue")
        {
            int id;
            string own;
            cin >> id >> own;
            q.enqueue(id, own);
        }
        else if (st== "dequeue")
        {
            q.dequeue();
        }
        cin >> st;
    }
    return 0;
}