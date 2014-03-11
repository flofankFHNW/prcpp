/*
 * MyString.h
 *
 *  Created on: 03.03.2014
 *      Author: Florian Fankhauser
 */

#include <cstddef>
#include <memory>

class MyString final {
	std::shared_ptr<char> m_contents;
	std::size_t m_len;
	int m_start;

	public:
		MyString();
		MyString(MyString *obj);
		MyString(char *obj);
		~MyString();
};
