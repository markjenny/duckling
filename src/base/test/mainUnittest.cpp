/*************************************************************************
    > File Name: mainUnittest.cpp
    > Author: markjenny
    > Mail: lijianlin0819@163.com 
 ************************************************************************/
#include <base/copyable.h>
#include <base/noncopyable.h>

#include <gtest/gtest.h>
#include <sys/types.h>

using namespace duck;
using namespace duck::base;

class test_case
{
public:
	static int32_t addNum(int32_t a, int32_t b)
	{
		return a + b;
	}

};

TEST(addTest, handleAddNoneZeroInput)
{
	EXPECT_EQ(6, test_case::addNum(1,5));
}

int32_t main(int32_t argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
