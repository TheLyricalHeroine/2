#include "class.hpp"

CVector::CVector() = default;
CVector::~CVector() = default;

CVector::CVector(int len2)
{
	
	for (int i=0; i < len2; i++)
	{
		this -> v[i]=0;
	}
	
	this -> len=len2;
	FileName = ""; 
}

CVector::CVector(array<double,256> v1, int len1, string FileName1)
{
	
	for (int i = 0; i < len1; i++)
	{
		v[i]=v1[i];
	}
	
	this -> len = len1;

	FileName = FileName1;
	//FileName.insert(0,FileName1);
}

CVector::CVector(const CVector& other)
{
	
	for (int i = 0; i < other.len; i++)
	{
		this -> v[i] = other.v[i];
	}
	
	this -> len = other.len;
	
	FileName = other.FileName;
}

double CVector::operator* (const CVector& other) //можно прописать здесь
{
	double result = 0;
	if (len != other.len)
	{
		cout<<"векторы разной длины"<<endl;
	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			result += v[i]*other.v[i];
		}
	}
	
	return result;
}

CVector& CVector::operator= (const CVector& other)
{
	this -> len=other.len;
	FileName = other.FileName;
	
	for (int i = 0; i < len; i++)
	{
		this -> v[i]=other.v[i];
	}
	
	return *this;
}

void CVector::Show()
{
	cout<<"(";
	for (int i = 0; i < len; i++)
	{
		cout<<v[i];
		if (i!=len-1) {cout<<",";}
	}
	cout<<")"<<endl;
}
		

//CVector& operator+ (const CVector& other);
//CVector& operator- (const CVector& other);