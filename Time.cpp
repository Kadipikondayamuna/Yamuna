// Time.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
#include <iostream>
#include<chrono>
#include<vector>

//int main()
//{
//	auto start = std::chrono::high_resolution_clock::now();
//	int y;
//   // std::cout << "Hello World!\n"; 
//	for (int i = 0; i <= 9; i++)
//	{
//		y = i;
//		y = y * i;
//	}
//	auto end = std::chrono::high_resolution_clock::now();
//	double x = std::chrono::duration<double, std::micro>(end - start).count();
//	std::cout << "time " << x << std::endl;
//	std::cin.get();
//	return 0;
//}

int main()
{
https://www.geeksforgeeks.org/writing-url-c-program/

	std::vector<int> v{ 1,2,3,4,5 };
	std::vector<int>::iterator it;
	for (auto& a : v)
	{
		std::cout << a << std::endl;
	}

	for ( it = v.begin();it != v.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << "This code is error free" << std::endl;

	//	// Uncommenting below goto statement causes  
	//	// infinite loop 
	//	// goto http; 
	//}

	return 0;
}
