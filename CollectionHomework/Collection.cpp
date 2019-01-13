#include "Collection.h"

#include <iostream>

using namespace std;

Collection::Collection()
{
	m_maxSize = 50;
	m_col = new int[m_maxSize];
	m_size = 0;
}
//test
Collection::Collection(const int item, const int count) : Collection()
{
	//m_maxSize = 50;
	//m_col = new int[m_maxSize];
	//m_size = 0;

	for (int i = 0; i < count; ++i)
	{
		m_col[i] = item;
		++m_size;
	}
}

Collection::~Collection()
{
	delete[] m_col;
}

void Collection::Add(const int item)
{
	if (m_size < m_maxSize)
	{
		m_col[m_size] = item;
		++m_size;
	}
	else
	{
		m_maxSize *= 2;

		int* new_col = new int[m_maxSize];

		for (int i = 0; i < m_size; ++i)
		{
			new_col[i] = m_col[i];
		}
		new_col[m_size] = item;
		++m_size;

		delete[] m_col;

		m_col = new_col;
	}
}

int Collection::GetLength()
{
	return m_size;
}

void Collection::Print()
{
	for (int i = 0; i < m_size; ++i)
	{
		cout << m_col[i] << ' ';
	}
}

bool Collection::Remove(const int item)
{
	for (int i = 0; i < m_size; ++i)
	{
		if (m_col[i] == item)
		{
			for (int j = i; j < m_size - 1; ++j)
			{
				m_col[j] = m_col[j + 1];
			}
			--m_size;
			return true;
		}
	}

	return false;
}