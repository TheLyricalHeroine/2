#include "class.hpp"
#include "class0.hpp"

CVector0::CVector0() = default;

CVector0::CVector0(array<double,256> v1, int len1, string FileName1):CVector(v1,len1,FileName1){}
CVector0::CVector0(int len2):CVector(len2){}
CVector0::CVector0(const CVector0& other):CVector(other){}

void CVector0::output()
{
	
	//cout<<"class0"<<endl;
	
	ofstream out(FileName, ios_base::app);
	if(!out) return;
	for ( int i = 0; i < len; i++)
	{
		out<<v[i]<<" ";
	}
	out<<endl<<endl;
	return;
}

