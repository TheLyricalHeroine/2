#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <array>
#include <iterator>

using namespace std;

class CVector
{
	private:
	public:
	
	array<double,256> v;
	int len;
	string FileName;
	
	CVector();
	CVector(int len2);
	CVector(array<double,256> v1, int len1, string FileName1);
	CVector(const CVector& other);
	//~CVector();
	virtual ~CVector();
	void Show();
	
	double operator* (const CVector& other);
	CVector& operator= (const CVector& other);
	//CVector& operator+ (const CVector& other);
	//CVector& operator- (const CVector& other);
	
	virtual void output()=0;
};