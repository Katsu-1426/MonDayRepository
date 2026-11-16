#pragma once
#include<iostream>
#include<string>
class Prac_Enemy
{
private:
	std::string name;
	
public:
	Prac_Enemy(const std::string& name);
	~Prac_Enemy();

	void Draw()const;
};

