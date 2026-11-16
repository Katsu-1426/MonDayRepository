#include<iostream>
#include<memory>
#include"Prac_Enemy.h"


int main(void)
{
	std::shared_ptr<Prac_Enemy>prac_enemy = std::make_shared<Prac_Enemy>("ƒXƒ‰ƒCƒ€");
	prac_enemy->Draw();
	std::cout << "Š—LŽÒ‚Ì”:" << prac_enemy.use_count() << "\n";

	return 0;
}