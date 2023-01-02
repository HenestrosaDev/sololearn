#include <iostream>

class Queue
{
protected:
	int size;
	int *queue;

public:
	Queue()
	{
		size = 0;
		queue = new int[100];
	}

	void add(int data)
	{
		queue[size] = data;
		size++;
	}

	void remove()
	{
		if (size == 0)
		{
			std::cout << "Queue is empty" << std::endl;
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
			std::cout << "Queue is empty" << std::endl;
			return;
		}
		for (int i = 0; i < size; i++)
		{
			std::cout << queue[i] << " <- ";
		}
		std::cout << std::endl;
	}

	Queue operator+(Queue &obj)
	{
		Queue res;

		for (int i = 0; i < this->size; i++)
		{
			res.add(this->queue[i]);
		}

		for (int i = 0; i < obj.size; i++)
		{
			res.add(obj.queue[i]);
		}

		return res;
	}
};

class Queue2 : public Queue
{
public:
	void print()
	{
		if (size == 0)
		{
			std::cout << "Queue is empty" << std::endl;
			return;
		}

		for (int i = 0; i < size; i++)
		{
			std::cout << queue[i] << std::endl;
		}

		std::cout << std::endl;
	}
};

int main()
{
	Queue q1;
	q1.add(42);
	q1.add(2);
	q1.add(8);
	q1.add(1);
	q1.print();

	Queue2 q2;
	q2.add(3);
	q2.add(66);
	q2.add(128);
	q2.add(5);
	q2.add(111);
	q2.add(77890);
	q2.print();

	return 0;
}
