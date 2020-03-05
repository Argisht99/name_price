#pragma once
#include<string>
#include<iostream>
#include <vector>
#include <map>

class name_price
{
public:

	void name_and_price(std::string);
	void print();

private:
	void add_map(std::string, int);
	void add_vec(std::string);
	std::map<std::string, int> m_product;
	std::vector<std::string> v_st;
};