// // #include <iostream>
// // #include <fstream>
// // #include <string>
// // using namespace std;

// // class person
// // {
// // 	string name;
// // 	int age,rollno;
// // public:
// // 	void setdata()
// // 	{
// // 		cout<<"enter name :";
// // 		getline(cin>>ws,name);
// // 		cout<<"enter age :";
// // 		cin>>age;
// // 		cout<<"enter roll no :";
// // 		cin>>rollno;
// // 	}
// // 	void display_data()
// // 	{
// // 		cout<<"name   :"<<name  <<endl
// // 			<<"age    :"<<age   <<endl
// // 			<<"roll no:"<<rollno<<endl;
// // 	}
// // };

// // int main()
// // {
// // 	// person p1;
// // 	// p1.setdata();
// //     int numstu;
// //     cout<<"Enter numbe:";
// //     cin>>numstu;
// // 	ofstream file;
// // 	file.open("dev.txt",ios::out|ios::binary);
	
// // 	if(!file.is_open())
// // 	{
// // 		cerr<<"error while creating file ."<<endl;
// // 		return -1;
// // 	}
// //     for(int i = 0;i<numstu;i++)
// //     {
// //         person p1;
// //         p1.setdata();
// // 	    file.write((char *)&p1,sizeof(p1));
// // 	    cout<<"data written file successfully ."<<endl;
// // 	    file.close();
// //     }

    
// // 	ifstream file1;
// // 	file1.open("dev.txt",ios::in|ios::binary);
	
// // 	if(!file1.is_open())
// // 	{
// // 		cerr<<"error while opening file ."<<endl;
// // 		return -1;
// // 	}
// // 	// if(file1.read((char *)&p2,sizeof(p2)))
// // 	// {
// // 	// 	cout<<"data received from file :"<<endl;
// // 	// 	p2.display_data();
// // 	// }
// //     person p2;
// //     while(file1.read((char*)&p2,sizeof(p2)))
// //     {
// //         p2.display_data();
// //         cout<<endl;
// //     }
// //     file1.close();
// // 	// else
// // 	// {
// // 	// 	cerr<<"error while reading from file ."<<endl;
// // 	// }
// // 	// file1.close();
// // 	return 0;
// // }


// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// class person
// {
//     string name;
//     int age, rollno;

// public:
//     void setdata()
//     {
//         cout << "Enter name: ";
//         cin.ignore(); // Ignore any newline characters left in the buffer
//         getline(cin, name);
//         cout << "Enter age: ";
//         cin >> age;
//         cout << "Enter roll no: ";
//         cin >> rollno;
//     }

//     void display_data()
//     {
//         cout << "Name: " << name << endl
//              << "Age: " << age << endl
//              << "Roll no: " << rollno << endl;
//     }
// };

// int main()
// {
//     int numPersons;
//     cout << "Enter the number of persons: ";
//     cin >> numPersons;

//     ofstream file;
//     file.open("dev.txt", ios::out | ios::binary);

//     if (!file.is_open())
//     {
//         cerr << "Error while creating file." << endl;
//         return -1;
//     }

//     for (int i = 0; i < numPersons; ++i)
//     {
//         person p;
//         p.setdata();
//         file.write((char *)&p, sizeof(p));
//     }

//     file.close();

//     ifstream file1;
//     file1.open("dev.txt", ios::in | ios::binary);

//     if (!file1.is_open())
//     {
//         cerr << "Error while opening file." << endl;
//         return -1;
//     }

//     person p2;
//     while (file1.read((char *)&p2, sizeof(p2)))
//     {
//         cout << "Data received from file:" << endl;
//         p2.display_data();
//         cout << endl;
//     }

//     file1.close();

//     return 0;
// }













