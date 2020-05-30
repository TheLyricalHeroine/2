#include "factory.hpp"
#include "factory0.hpp"
#include "class0.hpp"

CVector* CVector0Factory::Create()
{
	//cout<<"hello, you are in factory0"<<endl;
	array<double,256> v1;
	for(int i = 0; i < 256; i++)
	{
		v1[i] = 0;
	}
	int len1 = 0;
	string FileName1 = "";
	return new CVector0(v1, len1, FileName1);
}