#include "math.hpp"
#include "shape.hpp"

// Tests
#include "vector_2_test.hpp"
#include "vector_3_test.hpp"
#include "vector_4_test.hpp"

// External
#include <iostream>
#include <SDL3/SDL.h>


// Testing

int HandleTest( bool testCase ){

	if ( testCase ){
		std::cout << "PASSED \n";
	}
	else{
		std::cout << "FAILED \n";
		throw std::logic_error("TEST FAILED");
	}

	return 0;
}

int TestVector2(){

	bool testAdd = testVector2Adding();
	std::cout << "test Vector2 Adding ";
	HandleTest( testAdd );

	bool testSub = testVector2Subbing();
	std::cout << "test Vector2 Subbing ";
	HandleTest( testSub );

	bool testMult = testVector2Multiplying();
	std::cout << "test Vector2 Multiplying ";
	HandleTest( testMult );

	bool testDiv = testVector2Dividing();
	std::cout << "test Vector2 Division ";
	HandleTest( testDiv );

	return 0;
}


int Testing(){

	std::cout << "Testing Started \n\n";

	TestVector2();

	std::cout << "Testing Ended \n";
	return 0;
}

int main() {

	std::cout << "Testing Loaded \n";
	std::cout << "CPP version: " << __cplusplus << "\n";

	Testing();

	std::getchar(); 
	return 0;
}