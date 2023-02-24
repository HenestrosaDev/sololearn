#include <iostream>
using namespace std;

class Queue
{
private:
	int size;
	int maxSize;
	int *queue;

public:
	Queue()
	{
		size = 0;
		maxSize = 100;
		queue = new int[maxSize];
	}

	void remove()
	{
		if (size == 0)
		{
			cout << "Queue is empty" << endl;
			return;
		}
		else
		{
			for (int i = 0; i < size - 1; i++)
			{
				queue[i] = queue[i + 1];
			}
			size--;
		}
	}

	void print()
	{
		if (size == 0)
		{
			cout << "Queue is empty" << endl;
			return;
		}

		for (int i = 0; i < size; i++)
		{
			cout << queue[i] << " <- ";
		}

		cout << endl;
	}

	void add(int x)
	{
		if (size + 1 < maxSize)
		{
			queue[size] = x;
			size++;
		}
		else
		{
			cout << "The array is already full" << endl;
		}
	}
};

int main()
{
	Queue q;

	q.add(42);
	q.add(2);
	q.add(8);
	q.add(1);
	q.print();

	q.remove();
	q.add(128);
	q.print();

	q.remove();
	q.remove();
	q.print();

	return 0;
}