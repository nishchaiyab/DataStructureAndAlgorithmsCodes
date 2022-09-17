// solution of lecture number no:249
#include <iostream>
#include <cstring>
using namespace std;

static char A[] = "+-*/^()";

class Node
{
public:
    char data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack();
    ~Stack();
    void push(char x);
    char pop();
    char peek(int index);
    int isEmpty();
    int isFull();
    char stackTop();
};

Stack::Stack()
{
    top = nullptr;
}

Stack::~Stack()
{
    Node *p = top;
    while (top)
    {
        top = top->next;
        delete p;
        p = top;
    }
}

void Stack::push(char x)
{
    Node *t = new Node;
    if (t == nullptr)
    {
        cout << "Stack Overflow!" << endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char Stack::pop()
{
    Node *p;
    char x = -1;
    if (top == nullptr)
    {
        cout << "Stack Underflow!" << endl;
    }
    else
    {
        p = top;
        x = p->data;
        top = top->next;
        delete p;
    }
    return x;
}

int Stack::isFull()
{
    Node *t = new Node;
    int r = t ? 1 : 0;
    delete t;
    return r;
}

int Stack::isEmpty()
{
    return top ? 0 : 1;
}

char Stack::stackTop()
{
    if (top)
    {
        return top->data;
    }
    return -1;
}

char Stack::peek(int index)
{
    if (isEmpty())
    {
        return -1;
    }
    else
    {
        Node *p = top;

        for (int i = 0; p != nullptr && i < index - 1; i++)
        {
            p = p->next;
        }

        if (p != nullptr)
        {
            return p->data;
        }
        else
        {
            return -1;
        }
    }
}

int isOperant(char x)
{
    int i = 0;
    while (A[i] != '\0')
    {
        if (A[i] == x)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int preOut(char x)
{
    if ((x == '+') || (x == '-'))
    {
        return 1;
    }
    if ((x == '*') || (x == '/'))
    {
        return 3;
    }
    if (x == '^')
    {
        return 6;
    }
    if (x == '(')
    {
        return 7;
    }
    if (x == ')')
    {
        return 0;
    }
    return -1;
}

int preIn(char x)
{
    if ((x == '+') || (x == '-'))
    {
        return 2;
    }
    if ((x == '*') || (x == '/'))
    {
        return 4;
    }
    if (x == '^')
    {
        return 5;
    }
    if (x == '(')
    {
        return 0;
    }

    return -1;
}

char *convert(char *infix)
{
    Stack stk;
    char *postfix = new char[strlen(infix) + 1];
    int i = 0, j = 0;
    while (infix[i] != '\0')
    {
        if (isOperant(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else

        {

            if (stk.isEmpty() || (preOut(infix[i]) > preIn(stk.stackTop())))

            {

                stk.push(infix[i++]);
            }

            else if (preOut(infix[i]) == preIn(stk.stackTop()))

            {

                stk.pop();

                i++;
            }

            else

            {

                postfix[j++] = stk.pop();
            }
        }
    }
    while (!stk.isEmpty())
    {
        postfix[j++] = stk.pop();
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char E[] = "((a+b)*c)-d^e^f";
    char *A = convert(E);
    cout << A;
    return 0;
}