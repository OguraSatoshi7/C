#pragma once
#include<stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include<time.h>



int rollDice(int seed) {



	srand(seed + (time(NULL)));

	int roll = 1 + (rand() % 20);

	return roll;
	
}
