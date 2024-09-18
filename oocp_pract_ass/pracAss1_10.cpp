#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Search
{
    int arr[100];
    int x;
    int size;

public:
    void input()
    {
        cout<<"Enter the size of an array :";
        cin>>size;

        cout<<"Enter "<<size<<" elements :";
        for (int i = 0;i<size;++i)
        {
            cin>>arr[i];
        }
    }
    void output()
    {
        for (int i = 0;i<size;++i)
        {
            cout<<arr[i]<<" ";
        }
    }
    void search()
    {
        cout<<"\nEnter value to search in array :";
        cin>>x;
        int pos = -1;
        for (int i = 0;i<size;i++)
        {
            if(arr[i]==x)
            {
                pos = i;
            }
        }
        if(pos != -1 )
        {
            cout<<"element found at position "<<pos+1<<endl;
        }
        else
        {
            cout<<"element not found"<<endl;
        }
    }
    void add(int val)
    {
        if(size<100)
        {
            arr[size] = val;
            size++;
            cout<<"element "<<val<<" added in array"<<endl;
        }
        else
        {
            cout<<"array full"<<endl;
        }
    }
};

int main()
{
    Search s1;

    int choice;

    do
    {
        cout<<"1.input\n2.output\n3.search\n4.add\n5.clear terminal\n0.exit\n\n";
        cout<<"Enter choice:";
        cin>>choice;

        switch (choice)
        {
            case 1:
                s1.input();
                break;
            case 2:
                s1.output();
                break;
            case 3:
                s1.search();
                break;
            case 4:
                int val;
                cout<<"Enter value to add :";
                cin>>val;
                s1.add(val);
                break;
            case 5:
                system("cls");
                break;
            case 0:
                break;
        }
    }while(choice!=0);
    // s1.input();
    // s1.output();
    // s1.search();
    // s1.add(45);
    // s1.output();
    return 0;
}
