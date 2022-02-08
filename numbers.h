/*************************************************************************
	A little class that holds a dynamic array of numbers.
	I have provided a start here, you need to write the function
		implementations. DO NOT remove the byte_count lines that are
		already in a few of the functions.


    John Dolan			Spring 2013		CS2401 Lab Assignment 4
	Patricia Lindner	Fall 2021
*************************************************************************/

#include <iostream>

size_t byte_count = 0;
class Numbers{
    public:
		Numbers();
		void add(unsigned long item);
		void resize();
		void remove_last();
		void display(std::ostream& outs);
		unsigned long* reveal_address()const;

    private:
		unsigned long* data;   // the array for all the numbers
        std::size_t used;      // the amount of numbers stored
        std::size_t capacity;  // the maximum amount of numbers the array could store
};

Numbers::Numbers(){
	capacity = 5;
	used = 0;
	data = new unsigned long[capacity];

	byte_count += 5*sizeof(unsigned long);
}

void Numbers::add(unsigned long item){

}

void Numbers::resize(){
    capacity += 5;

    unsigned long* tmp;
    tmp = new unsigned long[capacity];
    
    for (size_t i = 0; i < used; i++) {
        tmp[i] = data[i];
    }

    delete data;
    data = tmp;

	byte_count += 5*sizeof(unsigned long);
}

void Numbers::remove_last(){
	if (used > 0) {
		used--;
	}
}

void Numbers::display(std::ostream& outs){

}

// You can leave this function alone
unsigned long *Numbers::reveal_address()const{
	return data;
}