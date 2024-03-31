#include<iostream>
using namespace std;
#include "node.h"
class LinkedList
{
	Node* start;
	public:
		LinkedList();
		void insertPos(Book,int);
		bool deletee(int);
		void display();
		void display2(Node*);
		Node* searchById(int);
		void searchByName(const char*);
		void searchByAuthor(const char*);
		void searchByCategory(const char*);
		bool update(int);
		void top3PriceBooks();
		void top3RatingBooks();
		~LinkedList();
};
