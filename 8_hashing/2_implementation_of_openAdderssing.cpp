#include <bits/stdc++.h>
using namespace std;

class myhash
{
    int size;
    int *arr;

public:
    myhash(int a)
    {
        size = a;
        arr = new int[size];

        for (int i = 0; i < size; i++)
        {
            arr[i] = -1;
        }
    }

    int hash(int x)
    {
        return x % size;
    }

    void insert(int x)
    {

        int k = hash(x);
        int start = k;
        if (arr[k] == -1 || arr[k] == -2)
        {
            arr[k] = x;
        }

        else
        {
              k=(k+1)%size;
            while (arr[k] != -1 && arr[k]!=-2)
            {

                if (k == start)
                {
                    cout << "element cannot be inserted as table size is full" << endl;
                    return;
                }

                k = (k + 1) % size;
            }

            arr[k] = x;
        }
    }

    void remove(int x)
    {
        int k = hash(x);
        int start = k;
        if (arr[k] == x)
        {
            arr[k] = -2;
        }
        else
        {
            while (arr[k] != x)
            {
                if (k == start || arr[k] == -1)
                {
                    cout << "element not present" << endl;
                    return;
                }
                k = (k + 1) % size;
            }
            arr[k] = -2;
        }
    }

    bool search(int x)
    {

        int k = hash(x);
        int start = k;

        if (arr[k] == x)
        {
            cout << "found" << endl;
            return true;
        }
        else
        {
             k=(k+1)%size;
            while (arr[k] != -1 && k != start)
            {

                if (arr[k] == x)
                {
                    cout << "found" << endl;
                    return true;
                }
                k = (k + 1) % size;
            }
            cout << "not found" << endl;
            return false;
        }
    }

    void display()
    {

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    myhash m(7);
    m.insert(49);
    m.display();
    m.insert(50);
    m.display();
    m.insert(51);
    m.display();
    m.insert(63);
    m.display();
    m.insert(69);
    m.display();
    m.search(63);

    m.remove(50);
    m.display();
    m.search(63);
    m.insert(24);
    m.display();
    m.insert(25);
    m.display();
    m.insert(35);
    m.display();
    m.insert(10);
    m.display();
    
}