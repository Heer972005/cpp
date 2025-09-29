#include<iostream>
using namespace std;

int main(){
    int n;
    input:
        cout << "Enter the number of products:";
        cin >> n;
    if(n>=20||n<=1)
    {
        cout << "Out of range please enter again\n";
        goto input;
    }

        string proName;
        double proRat;
        if (proName.length() > 25)
            cout << "Out of range";
        cout << "Enter the product name and rating:\n";
        for (int i = 0; i <n;i++){
            cin >> proName >> proRat;
        }
        return 0;
}

/*

/*#include <iostream>
        using namespace std;

        int main()
        {
            string names[10];
            char attendance[10][5];
            int count[10] = {0};

            for (int i = 0; i < 10; i++)
            {
                cin >> names[i];
                for (int j = 0; j < 5; j++)
                {
                    cin >> attendance[i][j];
                    if (attendance[i][j] == 'P')
                        count[i]++;
                }
            }
            for (int i = 0; i < 10; i++)
            {
                cout << names[i] << ": " << count[i] << endl;
            }
            return 0;
        }*/

/*#include <iostream>
#include <string>
        using namespace std;

        string stackArr[10];
        int top = -1;

        void printStack(int i)
        {
            if (i < 0)
                return;
            printStack(i - 1);
            cout << stackArr[i] << " ";
        }

        int main()
        {
            string cmd;
            while (cin >> cmd && cmd != "end")
            {
                if (cmd == "call")
                {
                    string fn;
                    cin >> fn;
                    if (top < 9)
                        stackArr[++top] = fn;
                }
                else if (cmd == "return")
                {
                    if (top >= 0)
                        cout << "Returning from: " << stackArr[top--] << endl;
                    else
                        cout << "No function" << endl;
                }
            }
            cout << "Stack: ";
            printStack(top);
            return 0;
        }

#include <iostream>
        using namespace std;

        struct Node
        {
            int id;
            string owner;
            Node *next;
        };

        class Queue
        {
            Node *front, *rear;

        public:
            Queue() { front = rear = NULL; }
            void enqueue(int id, string owner)
            {
                Node *temp = new Node{id, owner, NULL};
                if (!rear)
                    front = rear = temp;
                else
                {
                    rear->next = temp;
                    rear = temp;
                }
                rear->next = front; // circular
            }
            void dequeue()
            {
                if (!front)
                {
                    cout << "No bags" << endl;
                    return;
                }
                cout << "Processed: " << front->id << " " << front->owner << endl;
                if (front == rear)
                {
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

        int main()
        {
            Queue q;
            string cmd;
            while (cin >> cmd && cmd != "end")
            {
                if (cmd == "enqueue")
                {
                    int id;
                    string owner;
                    cin >> id >> owner;
                    q.enqueue(id, owner);
                }
                else if (cmd == "dequeue")
                {
                    q.dequeue();
                }
            }
            return 0;
        }

#include <iostream>
        using namespace std;

        string history[10];
        int top = -1;

        void printHistory(int i)
        {
            if (i < 0)
                return;
            cout << history[i] << " ";
            printHistory(i - 1);
        }

        int main()
        {
            string cmd;
            while (cin >> cmd && cmd != "exit")
            {
                if (cmd == "visit")
                {
                    string url;
                    cin >> url;
                    if (top < 9)
                        history[++top] = url;
                }
                else if (cmd == "back")
                {
                    if (top >= 0)
                        cout << "Back to: " << history[top--] << endl;
                    else
                        cout << "No history" << endl;
                }
            }
            cout << "History: ";
            printHistory(top);
            return 0;
        }

#include <iostream>
#include <iomanip>
        using namespace std;

        class BankAccount
        {
            int acc_num;
            double balance;

        public:
            BankAccount(int acc, double bal) : acc_num(acc), balance(bal) {}
            virtual ~BankAccount() { cout << "Account Closed" << endl; }
            void deposit(double amt) { balance += amt; }
            void withdraw(double amt)
            {
                if (amt <= balance)
                    balance -= amt;
                else
                    cout << "Insufficient balance" << endl;
            }
            double getBalance() { return balance; }
        };

        class SavingsAccount : public BankAccount
        {
            double rate;

        public:
            SavingsAccount(int acc, double bal, double r) : BankAccount(acc, bal), rate(r) {}
            void applyInterest()
            {
                deposit(getBalance() * (rate / 100));
            }
        };

        int main()
        {
            int acc;
            double bal, rate;
            cin >> acc >> bal >> rate;
            SavingsAccount sa(acc, bal, rate);
            string cmd;
            while (cin >> cmd && cmd != "end")
            {
                if (cmd == "deposit")
                {
                    double amt;
                    cin >> amt;
                    sa.deposit(amt);
                }
                else if (cmd == "withdraw")
                {
                    double amt;
                    cin >> amt;
                    sa.withdraw(amt);
                }
            }
            sa.applyInterest();
            cout << fixed << setprecision(2);
            cout << "Final Balance: " << sa.getBalance() << endl;
            return 0;
        }



}*/ */