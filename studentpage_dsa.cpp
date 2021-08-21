//Submitted By Ali Khan 
//DSA Project
// The Student Page
//
//
//#pragma once
//#include <iostream>
//#include <fstream>
//#include <string>
//#include<windows.h>
//
//using namespace std;
//
// 
//
//template <class T>
//class Node
//{
//public: T data;
//		Node<T>* next;
//};
//template <class T>
//class List
//
//{
//	Node<T>* head;
//	Node<T>* tail;
//
//
//public:
//
//	List()
//	{
//		head = nullptr;
//		tail = nullptr;
//	}
//	void insertAtEnd(T value) {
//		Node<T>* newNode = new Node<T>;
//		newNode->data = value;
//		newNode->next = nullptr;
//		if (head == nullptr)
//
//		{
//			head = tail = newNode;
//		}
//		else
//		{
//			tail->next = newNode;
//			tail = tail->next;
//		}
//	}
//	T RemoveAtEnd()
//	{
//		Node<T>* current = head;
//		T data_;
//		 Do nothing if list is already Empty 
//		if (current != nullptr) {
//			One element
//			if (head == tail)
//			{
//				data_ = current->data;
//				head = tail = nullptr;
//				delete current;
//			}
//			else
//			{
//				Find second last element
//				while (current->next != tail)
//				{
//					current = current->next;
//				}
//				tail = current;
//				current = current->next;
//				data_ = current->data;
//				tail->next = nullptr;
//				delete current;
//			}
//		}
//		return data_;
//	}
//	bool isEmpty()
//	{
//		return head == nullptr;
//	}
//	void print() const
//	{
//		Node<T>* curr = head;
//		while (curr != 0)
//		{
//			cout << curr->data << "  ";
//			curr = curr->next;
//		}
//
//	}
//	~List()
//	{
//		while (head != 0)
//		{
//			RemoveAtEnd();
//		}
//
//		 Write: Your Code here [1 mark]
//	}
//	friend class Stack<T>;
//};
//template <class T>
//class Stack
//{
//	Data Member:
//	List<T>collection;
//
//
//public:
//	Required Functions:
//
//	void Push(T val)
//	{
//		collection.insertAtEnd(val);
//
//	}
//
//	T Pop()
//	{
//		return collection.RemoveAtEnd();
//
//
//	}
//
//	bool isEmpty()
//	{
//		return collection.isEmpty();
//
//	}
//
//	bool isFull()
//	{
//		cout << "Linkedlist cannot be full" << endl;
//		return false;
//	} //Think about this
//
//	Stack()
//	{
//
//	}
//	default constructor: This will be empty
//
//	~Stack()
//	{
//
//	}
//};
//int i1 = 0;
//template <typename T>
//class student_page
//{
//private:
//
//	
//	Stack<string> record1;
//	
//
//	string password;
//	string name;
//	int roll_no;
//	string department;
//	string gmail;
//
//
//	int no_of_searches = 0;
//
//public:
//
//	student_page()
//	{
//	 password = "123456";
//	 name= "AliKhan";
//	 roll_no = 1199;
//	 department= "ComputerScience";
//	 gmail= "alikhan@gmail.com";
//	
//	}
//	student_page(const student_page& s1)
//	{
//		this->password = s1.password ;
//		this->name =s1.name;
//		this->roll_no =s1.roll_no;
//		this->department =s1.department ;
//		this->gmail =s1.gmail;
//	}
//	
//	void page();                                                //file_content
//	bool search(Stack <string>& obj, string gmail);             //Searching from  Stack
//	bool search_f(string filename, string gmail);
//	void display(string filename);                               //Display Method
//	string chr_to_string(char* a, int size);                  //We cannot write directly to string
//	string extension_maker(string s);                             //Function to add extension to given url
//	void drawRectangle(int x1, int y1, int x2, int y2, int R, int G, int B, int FR, int FG, int FB); // draws a rectangle using top-left and bottom-right x-y coordinates with separate border and fill colours
//
//	void portal();
//	void application(/*student_page<string> obj*/);
//	void timetable();
//	~student_page()
//	{
//		password = "";
//		name = "";
//		roll_no = 0;
//		department = "";
//		gmail = "";
//	}
//
//};
//
//student_page<string> obj[50];
//
//template<typename T>
//inline void student_page<T>::page()
//{
//	drawRectangle(0, 0, 10, 600, 155, 0, 155, 155, 0, 155);
//	drawRectangle(950, 0, 990, 600, 155, 0, 155, 155, 0, 155);
//	drawRectangle(0, 0, 1000, 11, 25, 0, 250, 25, 0, 250);
//	drawRectangle(0, 470, 1000, 800, 25, 0, 250, 25, 0, 250);
//	cout << endl;
//	cout << endl;
//	cout << "      _________________________Welcome To LGU Portal__________________________________________________";
//	cout << endl;
//	cout << endl;
//	int opt;
//	cout << " You are a student or Teacher :" << endl;
//	cout << "1. Teacher" << endl;
//	cout << "2. Student" << endl;
//	cin >> opt;
//	if (opt == 1)
//	{
//		system("cls");
//		drawRectangle(0, 0, 10, 600, 155, 0, 155, 155, 0, 155);
//		drawRectangle(950, 0, 990, 600, 155, 0, 155, 155, 0, 155);
//		drawRectangle(0, 0, 1000, 11, 25, 0, 250, 25, 0, 250);
//		drawRectangle(0, 470, 1000, 800, 25, 0, 250, 25, 0, 250);
//		cout << "      _________________________________Teacher Page__________________________________________________";
//		cout << endl;
//		cout << endl;
//		int a;
//		cout << "    Press 1 to see Admission Information" << endl;
//		cout << "    Press 2 to see all present students" << endl;
//		cout << "    Press 3 to see complete record" << endl;
//		cout << "    Press 4 to see the Time table" << endl;
//		cout << "    Press 5 to Exit" << endl;
//		cin >> a;
//		if (a == 1)
//		{
//			system("cls");
//			display("admission");
//		}
//		if (a == 2)
//		{
//			string temporaray ="record" ;
//			display(temporaray);
//
//		}
//		if (a == 3)
//		{
//			string temporaray = "student_rec";
//			display(temporaray);
//		}
//		if (a == 4)
//		{
//			timetable();
//		}
//		if (a == 5)
//		{
//			cout << "Thanks for Using LGU portal !" << endl;
//		}
//		cout << "Want to use portal Agin(Y/N)" << endl;
//		char b;
//		cin >> b;
//		if (b == 'y' || b == 'Y')
//		{
//			system("cls");
//			page();
//		}
//		else
//		{
//			cout << "Thanks for Using LGU portal !" << endl;
//		}
//
//	}
//	if (opt == 2)
//	{
//		system("cls");
//		drawRectangle(0, 0, 10, 600, 155, 0, 155, 155, 0, 155);
//		drawRectangle(950, 0, 990, 600, 155, 0, 155, 155, 0, 155);
//		drawRectangle(0, 0, 1000, 11, 25, 0, 250, 25, 0, 250);
//		drawRectangle(0, 470, 1000, 800, 25, 0, 250, 25, 0, 250);
//		cout << "      _________________________________Student Page__________________________________________________";
//		cout << endl;
//		cout << endl;
//		int a;
//		cout << "    Press 1 to see Admission Information" << endl;
//		cout << "    Press 2 to Log In" << endl;
//		cout << "    Press 3 to Apply for the admission" << endl;
//		cout << "    Press 4 to see the Time table" << endl;
//		cout << "    Press 5 to Exit" << endl;
//		cin >> a;
//		if (a == 1)
//		{
//			system("cls");
//			display("admission");
//		}
//		if (a == 2)
//		{
//			portal();
//		}
//		if (a == 3)
//		{
//			application();
//		}
//		if (a == 4)
//		{
//			timetable();
//		}
//		if (a == 5)
//		{
//			cout << "Thanks for Using LGU portal !" << endl;
//		}
//		cout << "Want to use portal Agin(Y/N)" << endl;
//		char b;
//		cin >> b;
//		if (b == 'y' || b == 'Y')
//		{
//			system("cls");
//			page();
//		}
//		else
//		{
//			cout << "Thanks for Using LGU portal !" << endl;
//		}
//	}
//}
//
//template<typename T>
//inline bool student_page<T>::search(Stack <string>& obj, string gmail)           //Searching From History
//{
//	Stack<string> temp;   //I used shallow copy method because we were prohibited to add anything in linkedlist
//	int cnt1 = 0;           //To not exceed or repeat stack cycle
//	while (!obj.isEmpty() /*|| cnt1 != this->no_of_searches*/)                              //This Function will not disturb the obj attributes
//	{
//		temp.Push(obj.Pop());
//		cnt1++;
//	}
//	string tmp;
//	string tmp2;
//	while (!temp.isEmpty() || cnt1 != 0)
//	{
//		tmp = temp.Pop();
//		tmp2 = tmp;
//		obj.Push(tmp);
//		cnt1--;
//		if (tmp2 == gmail)
//		{
//			return true;
//
//		}
//
//	}
//	return false;
//}
//
//template<typename T>
//bool student_page<T>::search_f(string filename, string gmail)
//{
//	ifstream file_C;
//	string input;
//	string tmp2;                                                         //To add extension
//	tmp2 = extension_maker(filename);
//	file_C.open(tmp2.c_str());                                 //you cannot use string in any opening mode
//	if (file_C.is_open())
//	{
//		while (getline(file_C, input))
//		{
//			if (input == gmail)
//			{
//				file_C.close();
//				return true;
//			}
//		}
//		
//	}
//	return false;
//}
//
//template<typename T>
//inline void student_page<T>::display(string filename)                          //Reusable Display Method
//{
//	drawRectangle(0, 0, 10, 600, 155, 0, 155, 155, 0, 155);
//	drawRectangle(0, 0, 1000, 11, 25, 0, 250, 25, 0, 250);
//	drawRectangle(0, 470, 1000, 800, 25, 0, 250, 25, 0, 250);
//
//	ifstream file_C;
//	string input;
//	string tmp2;                                                         //To add extension
//	tmp2 = extension_maker(filename);
//	file_C.open(tmp2.c_str());                                 //you cannot use string in any opening mode
//	if (file_C.is_open())
//	{
//		while (getline(file_C, input))
//		{
//			cout << input << endl;
//		}
//		file_C.close();
//	}
//}
//
//template<typename T>
//inline string student_page<T>::chr_to_string(char* array, int size)
//{
//	int i;
//	string s1 = "";
//	for (i = 0; i < size; i++) {
//		s1 = s1 + array[i];
//	}
//	return s1;
//}
//
//template<typename T>
//inline string student_page<T>::extension_maker(string s)
//{
//	 assigning value to string s
//	string str;
//	str = s;
//	 declaring character array : p
//	int a = str.length();
//	int b = a;
//	char* ptr = new char[str.length() + 4];
//	int size = b + 4;
//
//	int i;
//	for (i = 0; i < b; i++) {
//		ptr[i] = str[i];
//	}
//	ptr[b + 3] = 't';
//	ptr[b + 2] = 'x';
//	ptr[b + 1] = 't';
//	ptr[b] = '.';
//	string n_str = chr_to_string(ptr, size);
//
//	return n_str;
//}
//
//template<typename T>
//void student_page<T>::drawRectangle(int x1, int y1, int x2, int y2, int R, int G, int B, int FR, int FG, int FB)
//{
//	HWND consoleHandle = GetConsoleWindow();
//	HDC deviceContext = GetDC(consoleHandle);
//
//	change the colour by changing the values in RGB (from 0-255)
//	HPEN pen = CreatePen(PS_SOLID, 2, RGB(R, G, B));
//	SelectObject(deviceContext, pen);
//	HBRUSH brush = CreateSolidBrush(RGB(FR, FG, FB));
//	SelectObject(deviceContext, brush);
//	Rectangle(deviceContext, x1, y1, x2, y2);
//	DeleteObject(pen);
//	DeleteObject(brush);
//	ReleaseDC(consoleHandle, deviceContext);
//}
//
//template<typename T>
//void student_page<T>::portal()
//{
//	system("cls");
//		cout << "------------------------Welcome to LGU Portal-------------------------" << endl;
//		cout << endl;
//		cout << endl;
//		cout << endl;
//		string em;
//		cout << "Please Enter your Email:  " ;
//		cin >> em;
//		cout << endl;
//		string ps;
//		cout << "Please Enter your Password:  ";
//		cin >> ps;
//		if ((search(record1,em)==true && ps == this->password)||(em==this->gmail && ps==this->password))
//		{
//			cout << "Login Successfully !";
//				cout << endl;
//				cout << endl;
//				cout << endl;
//				cout << "Enter Your First name:";
//				string fname;
//				cin >> fname;
//				display(fname);
//				
//		}
//		else
//		{
//			cout << "Invalid Username or Password" << endl;
//			cout << "To add record please add his details" << endl;
//			char a;
//			cout << " To create Account press C: ";
//			cin >> a;
//			if (a == 'c' || a == 'C')
//			{
//				application();
//			}
//		}
//	
//}
//
//template<typename T>
//void student_page<T>::application()
//{
//	system("cls");
//		cout << "Welcome to LGU Student Portal" << endl;
//		cout << endl;
//		cout << endl;
//		cout << endl;
//		
//		char a;
//		cout << " To create Account press C: ";
//		cin >> a;
//		
//		if (a == 'c' || a == 'C')
//		{
//			
//			cout << endl;
//			student_page<string> tmp_obj;
//			ofstream file;                                               //Saving record  to file
//			file.open("student_rec.txt", std::ios_base::app);
//			cout << "Please Enter email address:";
//			string em;
//			cin >> em;
//			record1.Push(em);
//			tmp_obj.gmail = em;
//			cout << endl;
//			cout << "Please Enter Your Password:";
//			string ps;
//			cin >> ps;
//			tmp_obj.password = ps;
//			this->password = ps;
//
//			string first_n;                        //Storing Student Information to file
//			cout << "Enter Your first name:";
//			cin >> first_n;
//			first_n = extension_maker(first_n);
//			ofstream file_st_r;                                               //Saving record  to file
//			file_st_r.open(first_n, std::ios_base::app);
//
//
//			file_r is for records to search
//			file_st_r is for student information
//			file is for everyrecord
//
//
//			ofstream file_r;                                               //Saving record  to file
//			file_r.open("record.txt", std::ios_base::app);
//			if (file.is_open())
//			{
//
//
//				file << "The gmail of student is: " << tmp_obj.gmail << "\n";
//				file_st_r << "Your gmail is: " << tmp_obj.gmail << "\n";
//				if (file_r.is_open())
//				{
//					file_r << tmp_obj.gmail << "\n";                  //For Teachers & searching from file
//				}
//				file << "The password of student is: " << tmp_obj.password << "\n";
//				file_st_r << "Your password is: " << tmp_obj.password << "\n";
//
//				
//				file_r.close();
//
//			}
//			cout << endl;
//			cout << "Your Account Created Successfully!" << endl;
//			system("cls");
//			cout << "Welcome to University of QSSL Portal" << endl;
//			cout << endl;
//			cout << endl;
//			cout << "Enter Your Complete Name" << endl;
//			cin >> tmp_obj.name;
//
//					if (file.is_open())
//					{
//
//
//						file << "The name of student is: "<<tmp_obj.name << "\n";
//						file_st_r << "Your Complete Name is: " << tmp_obj.name << "\n";
//						
//
//					}
//			cout << "Enter Your Department Name" << endl;
//			cin >> tmp_obj.department;
//			if (file.is_open())
//			{
//
//
//				file << "The name of department is: " << tmp_obj.department << "\n";
//				file_st_r << "Your Department is: " << tmp_obj.department << "\n";
//				
//
//			}
//			cout << endl;
//			cout << "Enter Your Roll No" << endl;
//			cin >> tmp_obj.roll_no;
//			if (file.is_open())
//			{
//
//
//				file << "The Roll No of Student is: " << tmp_obj.roll_no << "\n";
//				file_st_r << "Your Roll No is: " << tmp_obj.roll_no << "\n";
//				file.close();
//				file_st_r.close();
//			}
//			cout << "Successfully Applied To Your Department" << endl;
//			obj[i1] = tmp_obj;
//			i1++;
//			cout << "The counter:" << i1 << endl;
//	
//		}
//		else
//		{
//			cout << "Thanks for Using LGU portal !" << endl;
//		}
//}
//
//template<typename T>
//void student_page<T>::timetable()
//{
//	system("cls");
//		cout << "Welcome to University of QSSL Portal" << endl;
//		cout << endl;
//		cout << endl;
//		cout << endl;
//		string em;
//		cout << "Please Enter your Email:  ";
//		cin >> em;
//		cout << endl;
//		string ps;
//		cout << "Please Enter your Password:  ";
//		cin >> ps;
//		string departments[4] = { "ComputerScience","ElectricalDepartment","CivilEngineering", "Managementsciences" };
//		string teacher[4] = { "Mr.MunirAhmad","Mr.SherazAhmad","Mr.MunirButt","Mr.ChangezKhan" };
//		string courses[4] = { "AppliedPhysics","Algebra", "OOP","Islamiyat"};
//		string timings[4] = { "2:00pm-3:00Pm","3:00pm-4:00Pm","1:00pm-2:00Pm","12:00pm-1:00Pm" };
//
//		string f = "record";
//	
//		if ((search_f(f,em)==true && ps == this->password) || (em == this->gmail && ps == this->password))
//		{
//			char res;
//			cout << "Press D to see time table Department Vise" << endl;
//			cout << "Press T to see time table Teacher Vise" << endl;
//			cout << "Press C to see time Table Course Vise" << endl;
//			cout << "Press F to see Full time Table " << endl;
//			cin >> res;
//			if (res == 'D')
//			{
//				cout << " Department Vise Time Table is:" << endl;
//				for (int i = 0; i < 4; i++)
//				{
//					cout << departments[i] << "  Timings are: " << timings[i] << endl;
//				}
//			}
//			else if (res == 'T')
//			{
//				cout << " Teacher Vise Time Table is:" << endl;
//				for (int i = 0; i < 4; i++)
//				{
//					cout << teacher[i] << "  Timings are: " << timings[i] << endl;
//				}
//			}
//			else if (res == 'C')
//			{
//				cout << " Subject Vise Vise Time Table is:" << endl;
//				for (int i = 0; i < 4; i++)
//				{
//					cout << courses[i] << "  Timings are: " << timings[i] << endl;
//				}
//			}
//			else if (res == 'F' )
//			{
//				ofstream file_t;                                               //Saving record  to file
//				file_t.open("time_table.txt", std::ios_base::app);
//
//				cout << " Full Time Table is:" << endl;
//				cout << endl;
//				cout << endl;
//				cout << endl;
//				cout << "Department " << "     Timings  " << "     Courses " << "       Teacher " << endl;
//				By Arrays Console output
//
//				/*for (int i = 0; i < 4; i++)
//				{
//						cout << department[i] << " " << timings[i] << " " << courses[i] << " " << teacher[i] << endl;	
//				}*/
//
//				By filing.
//				string f_n;
//				f_n = "time_table";
//				if (file_t.is_open())
//				{
//					display(f_n);
//				}
//				
//				file_t.close();
//			}
//			
//		}
//		else
//		{
//			cout << "You cannot Access time tables" << endl;
//		}
//	
//}
//
//int main()
//{
//	
//	HANDLE hConsole;
//	int k = 3;
//	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(hConsole, k);
//	student_page<string> t;
//	t.page();
//
//
//	return 0;
//}
//
//Finally Your Code is Done!