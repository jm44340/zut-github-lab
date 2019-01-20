#include <stdio.h>


int foo(){
	puts("foo");
	return 1;
}

int main(int argc, char** argv){
	printf("Przyklad\n");
	for(int i = 0 ; i < 100; i++){
		printf("Test!\n");
	}
	return 0;
}