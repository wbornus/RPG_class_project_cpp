#pragma once

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Location
{
protected:
	string m_name;
	int m_x;
	int m_y;

public:

	Location()
	{
	}

	~Location()
	{
	}

	string getName() { return m_name; }
	int getX() { return m_x; }
	int getY() { return m_y; }

	virtual void destroy() = 0;
};

class Battlefield : public Location
{
protected:
	int m_area;

public:
	Battlefield(string name, int x, int y, int area)
	{
		m_name = name;
		m_x = x;
		m_y = y;
		m_area = area;
	}
	~Battlefield()
	{
	}
};

class Shop : public Location
{
	
};