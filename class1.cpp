#include "class.hpp"
#include "class1.hpp"

CVector1::CVector1() = default;

CVector1::CVector1(array<double,256> v1, int len1, string FileName1):CVector(v1,len1,FileName1){}
CVector1::CVector1(int len2):CVector(len2){}
CVector1::CVector1(const CVector1& other):CVector(other){}

void CVector1::output()
{
	ofstream out(FileName, ios_base::app);
	if(!out) return;
	for ( int i = 0; i < len; i++)
	{
		out<<v[i]<<endl;
	}
	out<<endl;
	return;
}
