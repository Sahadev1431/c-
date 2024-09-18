#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeinfile(const string& filename)
{
    ofstream outfile(filename);
    if(outfile.is_open())
    {
        cout<<"enter content to add in file(type 'exit' in new line to finish ) :"<<endl;
        string line;
        while(true)
        {
            getline(cin,line);
            if(line == "exit")
            {
                break;
            }
            outfile<<line<<endl;
        }
        cout<<"content entered in file successfully"<<endl;
        outfile.close();
    }
    else
    {
        cerr<<"error while opening file"<<endl;
    }
}

void readfromfile(const string& filename)
{
    ifstream infile;
    if(infile.is_open())
    {
        string line;
        cout<<"content in file :\n";
        while(getline(infile,line))
        {
            cout<<line<<endl;
        }
        infile.close();
    }
    else
    {
        cerr<<"error while opening file "<<endl;
    }   
}

void count_line_word(const string& filename)
{
    ifstream infile(filename);
    if(infile.is_open())
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
        cerr<<"error while opening file "<<endl;
    }
}

void copyFile(const string& sourcefilename,const string& destinationfilename)
{
    ifstream sourcefile(sourcefilename);
    ofstream destinationfile(destinationfilename);
    if(sourcefile.is_open()&& destinationfile.is_open())
    {
        destinationfile<<sourcefile.rdbuf();
        cout<<"content of " <<sourcefilename<<" copied to "<<destinationfilename<<endl;
        sourcefile.close();
        destinationfile.close();
    }

    else
    {
        cerr<<"error while opening file "<<endl;
    }
    
}

int main()
{
    string filename1 = "pfile1.txt";
    string filename2 = "pfile2.txt";

    writeinfile(filename1);
    readfromfile(filename1);
    count_line_word(filename1);
    copyFile(filename1,filename2);
    readfromfile(filename2);
    return 0;
}

