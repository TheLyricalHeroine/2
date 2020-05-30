#include "class.hpp"
#include "class0.hpp"
#include "class1.hpp"
#include "func.hpp"


using namespace std;

int main()
{
	cout<<"Hello, do you want the pretest of coding?"<<endl;
	
	vector<CVector*> arr;
	//vector<CVector*> arr1;
	
	//cout<<"step_1"<<endl;
	
	//rr1=Create();
	
	arr = ReadFile();
	
	//cout<<"допустим, тут все норм"<<endl;
	
	for(vector<CVector*>::iterator it=arr.begin();it<arr.end();it++)
		(*it)->output();
	for(vector<CVector*>::iterator it=arr.begin();it<arr.end();it++)
		delete (*it);
	
	autotest1();
	autotest2();
	autotest3();
	autotest4();
	autotest5();
	
	//string FileName = "test.txt";
	
	
	return 0;
}