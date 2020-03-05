#include "class.h"

void  name_price::add_vec(std::string st)
{
	for (std::vector<std::string>::iterator it = v_st.begin(); it != v_st.end(); ++it)
	{
		if (st == *it)
		{
			return;
		}
	}
	v_st.push_back(st);
}


void name_price::add_map(std::string name, int price)
{
	std::map<std::string, int>::iterator it = m_product.find(name);
	if (it == m_product.end())
	{
		m_product.insert(std::pair<std::string, int>(name, price));
	}
	else if (it != m_product.end())
	{
		m_product[name] = m_product[name] + price;
	}
}


void name_price::name_and_price(std::string st)
{
	int price;
	int index = st.rfind(" ");
	std::string str_price;
	std::string str_name;

	for (int i = index + 1; i < st.size(); ++i)
	{
		str_price.push_back(st[i]);
	}

	price = std::stoi(str_price);

	for (int i = 0; i < index; ++i)
	{
		str_name.push_back(st[i]);
	}
	add_vec(str_name);
	add_map(str_name, price);
}



void  name_price::print()
{
	for (std::vector<std::string>::iterator it = v_st.begin(); it != v_st.end(); ++it)
	{
		std::cout << *it << " " << m_product[*it] << std::endl;

	}
}


