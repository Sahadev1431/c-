#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

class CTMR
{
	string name;
	int age;
	string city;
	string track;
public:
	CTMR(){}
	CTMR(string name, int age, string city, string track): name(name), age(age), city(city), track(track){cout<<"Constructor Called\n";}
	void output();	
};
void CTMR::output()
{
	cout<<left;
	cout<<setw(6)<<"\nName"<<" : "<<name
		<<setw(6)<<"\nAge"<<" : "<<age
		<<setw(6)<<"\nCity"<<" : "<<city
		<<setw(6)<<"\nTrack"<<" : "<<track;
}

int main()
{
	vector<CTMR> ctmr;
	
	ctmr.push_back(CTMR("Sahadev", 22, "Godhra", "Railway"));
	ctmr.push_back(CTMR("Jatin", 22, "Gandhinagar", "Local Train"));
	
	// Write into file
	ofstream out_file("file.txt", ios::out | ios::binary | ios::trunc);
	if (!out_file.is_open())
	{
		cout<<"Failed to open file.\n";
	}
	
	vector<CTMR>::iterator i;
	for(i = ctmr.begin(); i<ctmr.end(); i++)
	{
		out_file.write((char*)&*i, sizeof(*i));
		if(out_file.fail())
		{
			cout<<"Failed to write into file.\n";
			exit(1);
		}
	}
	out_file.close();
	
	
	// read from file
	vector<CTMR> ctmr_read;
	CTMR temp;
	
	ifstream infile("file.txt", ios::in | ios::binary);
	if (!infile.is_open())
	{
		cout<<"Failed to open input file.\n";
		exit(1);
	}
	
	while(infile.good())
	{
		infile.read((char*)&temp, sizeof(temp));
		if(infile.fail())
		{
			break;
		}
		ctmr_read.push_back(temp);
	}
	infile.close();
	
	for(i = ctmr_read.begin(); i<ctmr_read.end(); i++)
	{
		i->output();
		cout<<"\n";
	}
//	ctmr[0].output();
//	cout<<"\n";
//	ctmr[1].output();
	
	return 0;
}