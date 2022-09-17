// sparse matrix using c++;
#include <bits/stdc++.h>
using namespace std;
class Element
{
public:
    int i;
    int j;
    int x;
};

class Sparse
{
private:
    int m;
    int n;
    int num;
    Element *e;

public:
    Sparse(int m,int n,int num)
    {
        this->m=m;
        this->n=n;
        this->num=num;
        e=new Element[this->num];
    }
    ~Sparse()
    {
        delete [] e;
    }
    void read()
    {
        cout<<"Enter non zero elements";
        for(int i=0;i<num;i++)
        {
            cin>>e[i].i>>e[i].j>>e[i].x;
        }
    }
    void display()
    {   
        int k=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(e[k].i==i&&e[k].j==j)
                    cout<<e[k++].x<<" ";
                else
                    cout<<"0 ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Sparse s(15,5,5);
    s.read();
    s.display();
    return 0;
}