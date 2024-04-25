#pragma once
#include <iostream>



class DynArr
{
	int size;
	int* arr;
public:
	DynArr (int newSize) : size{ newSize }, arr{new int [newSize]} {	
		printf("array of size %i was created\n", size);
	}

	DynArr() :DynArr(10) {}
	
	DynArr(const DynArr& object) {
		size = object.size;								//	copy size
		delete[] arr;									//	delete old array
		arr = new int[size];							//	create new with new size
		for (int i = 0; i < size; i++) {				//	copy elemets
			arr[i] = object.arr[i];
		}
		printf("array of size %i was copied\n", size);
	}

	DynArr(const DynArr&& object) {
		size = object.size;								
		delete[] arr;									
		arr = new int[size];							
		for (int i = 0; i < size; i++) {				
			arr[i] = object.arr[i];
		}
		printf("array of size %i was mooved\n", size);
	}

	DynArr& operator= (const DynArr& object) {
		size = object.size;							
		  delete[] arr;								
		 arr = new int[size];						
		for (int i = 0; i < size; i++) {				
			   arr[i] = object.arr[i];
			 }
		 printf("array of size %i was copied\n", size);
		 return* this;
	}

	~DynArr() {
		printf("array of size %i was destroyed\n", size);
		delete[] arr;
	}

	int getElement(int index) const;
	void setElement(int index, int value);

	void print() const;
	void fillRand();

};

