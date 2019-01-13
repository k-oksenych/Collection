#pragma once
//test
class Collection
{
public:
	Collection();
	Collection(const int item, const int count);
	~Collection();

	void Add(const int item);
	int GetLength();
	void Print();
	bool Remove(const int item);

private:
	int* m_col;
	int m_size;
	int m_maxSize;
};