#include <iostream>
#include <stdint.h>
#define bufSize 100

void writeIn(uint8_t len);

int main() {

	uint8_t circle[bufSize];
	memset(circle, 0, bufSize);

	uint8_t* head = circle;
	uint8_t* tail = circle;

	//uint8_t len = 10;

	for (uint8_t i = 0;i < 200;i++) {
		*head = i;
		if (head >= &circle[bufSize - 1]) {
			head = &circle[0];
		}
		else
			head++;

		if ((i % 13) == 0) {
			while (tail != head) {
				std::cout << (int)*tail << " ";
				if (tail >= &circle[bufSize-1])
				{ 
					tail = &circle[0];
					continue;
				}
				tail++;
			}
			//tail = head;
		}


	}
	return 0;
}

void writeIn(uint8_t* circleBuf,uint8_t len) {
	

	
}