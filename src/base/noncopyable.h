/*************************************************************************
    > File Name: noncopyable.h
    > Author: markjenny
    > Mail: lijianlin0819@163.com 
 ************************************************************************/
#ifndef DUCK_BASE_NONCOPYABLE_H_
#define DUCK_BASE_NONCOPYABLE_H_

namespace duck
{

namespace base
{
	
class noncopyable
{
protected:
	noncopyable() {}
	~noncopyable() {}
private:
	noncopyable(const noncopyable&) {}
	const noncopyable& operator=(const noncopyable&) {}
};

};

};


#endif // DUCK_BASE_NONCOPYABLE_H_
