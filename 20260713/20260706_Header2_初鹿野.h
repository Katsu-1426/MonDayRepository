#pragma once
const int INPUT_MIN = 0;
const int INPUT_MAX = 2;
const int HAND_NUMBER = 3;
const int EXPERIENCE_POINT_MIN = 1;
const int EXPERIENCE_POINT_MAX = 15;
const int THERSHOLD = 20;

enum Hand
{
	ROCK,
	SCISSORS,
	PAPER

};

int InputCheck(int min, int max);

int Judgement(int player,int cpu);

void LevelUp(int& exp, int& lv);

void ShowHand(int hand);

void Game(int& exp, int& level);