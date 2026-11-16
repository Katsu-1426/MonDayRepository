#include "Prac_Enemy.h"
Prac_Enemy::Prac_Enemy(const std::string& name) :name(name)
{
	std::cout << name << "が出現した。\n";
}

Prac_Enemy::~Prac_Enemy()
{
	std::cout << name << "は破棄されました。\n";
}

void Prac_Enemy::Draw()const
{
	std::cout << "名前:" << name << "\n";
}