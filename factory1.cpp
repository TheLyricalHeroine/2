#include "factory.hpp"
#include "factory1.hpp"
#include "class1.hpp"

CVector* CVector1Factory::Create()
{
	//cout<<"hello, you are in factory1"<<endl;
	array<double,256> v1;
	for(int i = 0; i < 256; i++)
	{
		v1[i] = 0;
	}
	int len1 = 0;
	string FileName1 = "";
	return new CVector1(v1, len1,FileName1);
}