#include "class.hpp"

class Factory 
{
public:
	virtual CVector* Create()=0;
	virtual ~Factory(){}
};