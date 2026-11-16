#include<iostream>
#include<memory>
#include"Enemy.h"

int main(void)
{
	std::shared_ptr<Enemy>enemy = std::make_shared<Enemy>("ƒhƒ‰ƒSƒ“");

	enemy->Draw();

	std::cout << "Š—LŽÒ‚Ì”:" << enemy.use_count() << "\n";

	return 0;
}