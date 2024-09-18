// #include <iostream>
// #include <string>
// using namespace std;

// class book
// {
//     protected:
//         int id;
//         string name;
//     public:
//         book(){};
//         book(int bid,const string&  bname):id(bid),name(bname)
//         {
//             cout<<"base class book constructor called for id "<<id<<endl;
//         }
//         ~book()
//         {
//             cout<<"base class book distructor called for id "<<id<<endl;
//         }
//         void display()
//         {
//             cout<<"ID :"<<id<<endl;
//             cout<<"Name :"<<name<<endl;
//         }
// };

// class sales:public book
// {
//     public:
//         sales(){}\
//         static int sales_count;
//         sales(int bid,const string& bname):book(bid,bname)
//         {
//             sales_count++;
//             cout<<"derived class sales constructor called for id "<<id<<endl;
//         }
//         ~sales()
//         {
//             cout<<"total sales book are "<<sales_count<<endl;
//             cout<<"derived class sales distructor called for id "<<id<<endl;
//         }
//         void sales_display()
//         {
//             cout<<"book is from sales catagory"<<endl;
//             display();
//         }
// };
// int sales::sales_count;
// class acedemic:public book
// {
//     public:
//         acedemic(){}
//         static int acedemic_count;
//         acedemic(int bid,const string& bname):book(bid,bname)
//         {
//             acedemic_count++;
//             cout<<"derived class acedemic constructor called for id "<<id<<endl;
//         }
//         ~acedemic()
//         {
//             cout<<"total acedemic book are "<<acedemic_count<<endl;
//             cout<<"derived class acedemic distructor called for id "<<id<<endl;
//         }
//         void acedemic_display()
//         {
//             cout<<"book is from acedemic catagory"<<endl;
//             display();
//         }
// };
// int acedemic::acedemic_count;
// class thriller:public book
// {
//     public:
//         thriller(){}
//         static int thriller_count;
//         thriller(int bid,const string& bname):book(bid,bname)
//         {
//             thriller_count++;
//             cout<<"derived class thriller constructor called for id "<<id<<endl;
//         }
//         ~thriller()
//         {
//             cout<<"total thriller book are "<<thriller_count<<endl;
//             cout<<"derived class thriller distructor called for id "<<id<<endl;
//         }
//         void thriller_display()
//         {
//             cout<<"book is from thriller catagory"<<endl;
//             display();
//         }
// };
// int thriller::thriller_count;

// int main()
// {
//     sales s1(101,"sales 1");
//     s1.sales_display();
//     cout<<endl;
//     sales s2(102,"sales 2");
//     s2.sales_display();
//     cout<<endl;
//     acedemic a1(103,"ace 1");
//     a1.acedemic_display();
//     cout<<endl;    
//     thriller t1(104,"th 1");
//     t1.thriller_display();
//     return 0;
// }


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void writetofile(const string& filename)
{
    ofstream outfile(filename);

    if(outfile.is_open())
    {
        cout<<"enter content to write in file (write 'exit 'in new line to finish)"<<endl;
        string line;
        while(true)
        {
            getline(cin,line);
            if (line == "exit")
            {
                break;
            }
            outfile<<line<<endl;
        }
        
        cout<<"written in file succfully"<<endl;
        outfile.close();
    }
    else
    {
        cerr<<"error while opening file"<<endl;
    }
}

void readfrommfile(const string& filename)
{
    ifstream infile(filename);
    if (infile.is_open())
    {
        cout<<"content from file :\n";
        string line;
        while(getline(infile,line))
        {
            cout<<line<<endl;
        }
    }
    else
    {
        cerr<<"error while opening file"<<endl;
    }

}

void count_wl(const string& filename)
{
    ifstream infile(filename);
    if (infile.is_open())
    {
        int wordcount = 0;
        int linecount = 0;
        string word;

        while(infile>>word)
        {
            wordcount++;
        }
        infile.clear();
        infile.seekg(0,ios::beg);
        while(getline(infile,word))
        {
            linecount++;
        }
        cout<<"total words in file are :"<<wordcount<<endl;
        cout<<"total lines in file are :"<<linecount<<endl;
        infile.close();
    }
    else
    {
        cerr<<"error while opening file"<<endl;
    }

}

void copyFile(const string& sourcefilename,const string& destinationfilename)
{
    ifstream sourcefile(sourcefilename);
    ofstream destinationfile(destinationfilename);
    if(sourcefile.is_open()&&destinationfile.is_open())
    {
        destinationfile<<sourcefile.rdbuf();

        cout<<"content copied from "<<sourcefilename<<" to "<<destinationfilename<<endl;
        sourcefile.close();
        destinationfile.close();
    }
    else
    {
        cerr<<"error while opening file"<<endl;
    }
}

int main()
{
    string filename1 = "file1.txt";
    string filename2 = "file2.txt";

    writetofile(filename1);
    readfrommfile(filename1);
    count_wl(filename1);
    copyFile(filename1,filename2);
    readfrommfile(filename2);
}