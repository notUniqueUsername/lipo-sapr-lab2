#include "HeaderCountTest.h"

// Test constructor
void HeaderCountTest::constr()
{
	HeaderCount header_count_class;
	CPPUNIT_ASSERT_MESSAGE("Constructor must define regular expression", header_count_class.main_regular_expression != "");
}

// Test method for getting unique header count
void HeaderCountTest::getHeadersCount()
{
	HeaderCount header_count_class;
	int header_count = header_count_class.getHeadersCount();
	CPPUNIT_ASSERT_MESSAGE("Uniq-headers count has not been equal to count of real file", header_count == 3);
}