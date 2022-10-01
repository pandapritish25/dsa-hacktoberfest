#include <bits/stdc++.h>
using namespace std;
// Stack is a linear data structure, we store elements linearly.
// We Can Only add or remove element from one end of the stack.
// LIFO Mechanism -> Last in First out
// Example Could Be : Pile of Coins or Pile of Plates.
// top = -1 // No Elements in the Stack
// top = lastValueIndex // Stack is Full
//  Array Implementation of stack
//  push(val);
//  pop();
//  top();
//  empty();
//  Time Complexity O(1)
#include <bits/stdc++.h>

using namespace std;

#define MAX 10000

class Stack {
	int top;

public:
	int a[MAX];
	Stack()
    { 
        top = -1;
    }
	bool push
    (
        int x
    );
	int pop();
	int peek();
	bool isEmpty();
};

bool Stack::push(int x)
{
	if (top >= (MAX - 1)) {
		cout << "Stack Overflow";
		return false;
	}
	else {
		a[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}

int Stack::pop()
{
	if (top < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}
int Stack::peek()
{
	if (top < 0) {
		cout << "Stack is Empty";
		return 0;
	}
	else {
		int x = a[top];
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}

int main()
{
	class Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout << s.pop() << " Popped from stack\n";
	cout<<"Elements present in stack : ";
	while(!s.isEmpty())
	{
		cout<<s.peek()<<" ";
		s.pop();
	}
	return 0;
}
