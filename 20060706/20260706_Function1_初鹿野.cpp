#include<iostream>
#include"20260706_Config_初鹿野.h"
#include"20260706_Header1_初鹿野.h"
using namespace std;
void Heal(int& hp)
{
	hp += 20;
	cout << "20回復しました。\n";
}

int InputCheck(int min, int max)
{
	int num;
	while (true)
	{
		cin >> num;
		if (min > num || max < num)
		{
			cout << "入力に誤りがあります。再度入力してください" << endl;
		}
		else
		{
			break;
		}
	}
	return num;
}

void Run()
{
	int playerhp = ConstNumber::Playre_HP;
	int select;

	cout << "HPを回復させますか?\n１なら回復\n２なら現状維持\n";
	select = InputCheck(ConstNumber::SELECT_MIN, ConstNumber::SELECT_MAX);
	if (select == 1)
	{
		Heal(playerhp);
		

	}
	else
	{
		cout << "回復しませんでした" << endl;
	}
	cout << "PlayerのHPは、" << playerhp << "です\n";
}