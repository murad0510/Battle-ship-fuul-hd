#pragma once


int** ArrayCreation(int size);/////////////////////////////////////////////////

int mySize = 10;
bool chekingIgnore = false;

int** playerBoard = ArrayCreation(mySize);/////////////////////////////////////////
int** enemyBoard = ArrayCreation(mySize);///////////////////////////////////////////////////////////


void mysetcolor(int fg, int bg) {

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, fg | (bg << 4));
}


int** ArrayCreation(int size) {//////////////////////////////////////////////////////////////////

	int** arr = new int* [size + 1];

	for (size_t i = 0; i < size + 1; i++)
		arr[i] = new int[size + 1]{};

	return arr;
}


void FillTheArray(int** arr, PackageMan pack, Simvol s, int count, int data, int size) {/////////////////////////////////////////

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (i == 0 || j == 0 || i == size - 1 || j == size - 1)
				arr[i][j] = 9;

			else
				arr[i][j] = 0;
		}
	}
}

void Myships(int** arr, int size) {//////////////////////////////////////////////////////////

	cout << "  " << endl << endl << endl;

	int counter = 0;

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			//USER'S PACMAN
			if (arr[i][j] == 1) {
				mysetcolor(1, 0);
				cout << char(30) << "  ";
				mysetcolor(1, 0);
			}

			else if (arr[i][j] == 9) {

				mysetcolor(6, 0);
				cout << char(38) << "  ";
			}
			//If the user's ship cannot be hit, that is, the bullet is thrown into the void
			else if (arr[i][j] == 2) {
				mysetcolor(5, 0);
				cout << char(1) << "  ";
				mysetcolor(5, 0);
			}
			//when the user's ship is hit
			else if (arr[i][j] == 7) {
				mysetcolor(4, 0);
				cout << 'X' << "  ";
				mysetcolor(4, 0);
				++counter;
			}
			//user's area
			else if (arr[i][j] == 0) {

				mysetcolor(8, 0);
				cout << char(178) << "  ";
			}
			//when the user's ship is hit
			else if (arr[i][j] == 5) {

				mysetcolor(2, 0);
				cout << char(3) << "  ";
				mysetcolor(2, 0);
			}
		}
		cout << endl << endl;
	}



	if (counter == 20) {
		system("cls");
		cout << "              **      **  **********  **       **" << endl;
		cout << "                **  **    **      **  **       **" << endl;
		cout << "                  **      **      **  **       **" << endl;
		cout << "                  **      **      **  **       **" << endl;
		cout << "                  **      **********  ***********" << endl;

		cout << endl;
		cout << endl;
		cout << endl;

		cout << "                                    **              ************           ******      ***********          __" << endl;
		cout << "                                    **              **        **          **           ***********          ||" << endl;
		cout << "                                    **              **        **            ****           * *              || " << endl;
		cout << "                                    **              **        **               **          * *              ||   " << endl;
		cout << "                                    **              **        **          ******           * *              ||    " << endl;
		cout << "                                    **********      ************                           * *              **   " << endl;
		cout << "                                                                                                            **" << endl;

		Sleep(10000000000000000000);
	}
}


void OpponentsShips(int** arr, int size) {/////////////////////////////////////////////////////

	cout << "  " << endl;

	int counter1 = 0;

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			//pacman of enemy
			if (arr[i][j] == 3) {
				mysetcolor(14, 0);
				cout << char(30) << "  ";
				mysetcolor(14, 0);
			}
			//enemy area
			else if (arr[i][j] == 0) {

				mysetcolor(8, 0);
				cout << char(178) << "  ";
				mysetcolor(8, 0);
			}
			//when an enemy ship is hit
			else if (arr[i][j] == 7) {
				mysetcolor(4, 0);
				cout << "X" << "  ";
				mysetcolor(4, 0);
				++counter1;
			}
			//failing to hit the enemy's ship
			else if (arr[i][j] == 2) {
				mysetcolor(5, 0);
				cout << char(1) << "  ";
				mysetcolor(5, 0);
			}
			//enemy ship
			else if (arr[i][j] == 6) {

				mysetcolor(4, 0);
				cout << char(178) << "  ";
			}

			else {
				mysetcolor(8, 0);
				cout << char(219) << "  ";
			}
		}
		cout << endl << endl;
	}
	if (counter1 == 20) {
		system("cls");
		cout << "                                     **      **  **********  **       **" << endl;
		cout << "                                       **  **    **      **  **       **" << endl;
		cout << "                                         **      **      **  **       **" << endl;
		cout << "                                         **      **      **  **       **" << endl;
		cout << "                                         **      **********  ***********" << endl;

		cout << endl;
		cout << endl;
		cout << endl;

		cout << "                                         ****        *****     ******   " << endl;
		cout << "                                        **  **       **   *    **       " << endl;
		cout << "                                       ********      *****     ***      " << endl;
		cout << "                                      **      **     **   *    **       " << endl;
		cout << "                                     **        **    **    *   ******   " << endl;

		cout << endl;
		cout << endl;
		cout << endl;

		cout << "                                                                                                              __" << endl;
		cout << "                                                                                                              ||" << endl;
		cout << "               **       ****        **     *******     ***     *       ***     *      *******     *****       || " << endl;
		cout << "                **      ****       **        * *       ** **   *       ** **   *      **          **   *      ||   " << endl;
		cout << "                 **    **  **     **         * *       **  **  *       **  **  *      ****        *****       ||    " << endl;
		cout << "                  **  **    **   **          * *       **   ** *       **   ** *      **          **   *      **   " << endl;
		cout << "                   ****      ****          *******     **    ***       **    ***      *******     **    *     **" << endl;

		cout << endl;
		cout << endl;
		cout << endl;

		Sleep(10000000000000000000);
	}
}


bool İsEmptyPlace(int** arr, int y, int x) {//////////////////////////////////////////////

	if (y == mySize || x == mySize)
		return false;

	if (y == -1 || x == -1)
		return false;

	if (arr[y][x] == 6) return true;

	if (arr[y][x] != 0 || y < 0 || y >= mySize || x < 0 || x >= mySize)
		return false;

	return true;
}


bool ToAccommodateShips(int** arr, int y, int x, Simvol s, int count) {/////////////////////////////////////////////////////////////

	bool hasSomething = false;
	int countCheck = 0;

	if (s == RIGHT) {

		for (size_t i = y; i < y + 1; i++)
		{
			for (size_t j = x; j < x + count; j++) {

				if (arr[i][j] != 0 || i < 0 || i >= mySize || j < 0 || j >= mySize || arr[i][j + 1] == 5
					|| arr[y + 1][x] == 5 || arr[y][x + 1] == 5 || arr[y][x - 1] == 5)
					countCheck++;

				if (y - 1 != -1) {

					if (arr[y - 1][x] == 5)
						++countCheck;
				}
			}
		}

		if (countCheck == 0) {

			for (size_t i = y; i < y + 1; i++)
			{
				for (size_t j = x; j < x + count; j++)
					arr[i][j] = 5;
			}

			hasSomething = false;
		}

		else
		{
			hasSomething = true;
			cout << "\a" << endl;
		}
	}

	else if (s == DOWN) {

		int i = 0, k = 0;

		for (i = y; i < y + count + 1; i++) {

			if (i > 10) {
				countCheck++;
				break;
			}

			for (k = x - 1; k < x + 2; k++) {

				if (k == -1) {
					k++;
				}
				if (arr[i][k] != 0 || k < 0 || k > mySize || i < 0 || i > mySize
					|| arr[y + 1][x] == 5 || arr[y][x + 1] == 5 || arr[y][x - 1] == 5)
					++countCheck;

			}

		}

		if (countCheck == 0) {

			for (size_t i = y; i < y + count; i++)
			{
				for (size_t j = x; j < x + 1; j++)
					arr[i][j] = 5;
			}

			hasSomething = false;
		}
		else
		{
			hasSomething = true;
			cout << "\a";
		}
	}
	return hasSomething;
}


void reversManual(int** arr, int y, int x, Simvol s, int count) {////////////////////////////

	ToAccommodateShips(arr, pack.y, pack.x, s, count);/////////////////////////////////////////////////
}


void clearShip(int** arr, int y, int x, Simvol s, int count) {

	if (s == RIGHT) {

		for (size_t i = y; i < y + 1; i++)
		{
			for (size_t k = x; k < x + count + 1; k++)
				arr[i][k] = 0;
		}
	}

	else if (s == DOWN) {

		for (size_t i = y; i < y + count; i++)
		{
			if (i >= 10) break;
			for (size_t k = x; k < x + 1; k++)
				arr[i][k] = 0;
		}
	}
}


bool CardinalShipping(int** arr, int y, int x, Simvol direction, int count) {////////////////////////////////////

	bool result = ToAccommodateShips(arr, pack.y, pack.x, direction, count);///////////////////////////////////////////////////
	char revers = ' ';

	do
	{
		system("cls");
		Myships(arr, mySize);/////////////////////////////////////////////////////////////////////////////

		int revers = 0;
		revers = _getch();

		if (revers == REVERS) {

			if (direction == RIGHT) {

				direction = DOWN;
				clearShip(arr, pack.y, pack.x, RIGHT, count);
				reversManual(arr, pack.y, pack.x, DOWN, count);
			}
			else
			{
				direction = RIGHT;
				clearShip(arr, pack.y, pack.x, DOWN, count);
				reversManual(arr, pack.y, pack.x, RIGHT, count);
			}
			Myships(arr, mySize);////////////////////////////////////////////////////////////
		}

		if (revers == ENTER) {
			pack.y = 0;
			pack.x = 0;
			break;
		}

	} while (revers != ENTER);

	return result;
}


void ShipManual(int** arr) {

	int counters[10] = { 4,3,3,2,2,2,1,1,1,1 };
	int index = 0;

	while (true) {

		system("cls");
		Myships(playerBoard, mySize);/////////////////////////////////////////////////////////////////////////////

		int direction = 0;
		direction = _getch();

		if (direction == 224) {

			direction = _getch();
			arr[pack.y][pack.x] = 0;

			if (direction == RIGHT) {

				if (İsEmptyPlace(arr, pack.y, pack.x + 1))////////////////////////////////////////
					pack.x++;
			}

			else if (direction == LEFT) {

				if (İsEmptyPlace(arr, pack.y, pack.x - 1))////////////////////////////////////////////////////
					pack.x--;
			}

			else if (direction == UP) {

				if (İsEmptyPlace(arr, pack.y - 1, pack.x))///////////////////////////////////////////////
					pack.y--;
			}

			else if (direction == DOWN) {

				if (İsEmptyPlace(arr, pack.y + 1, pack.x))///////////////////////////////////////////////////
					pack.y++;
			}

			arr[pack.y][pack.x] = 1;
		}

		else if (direction == ENTER) {

			arr[pack.y][pack.x] = 0;
			bool result = CardinalShipping(arr, pack.y, pack.x, RIGHT, counters[index]);/////////////////////////////////

			if (result == false)
				++index;

			pack.y = 0;
			pack.y = 0;
			arr[pack.y][pack.x] = 1;

			if (index == 10) {
				break;
			}
		}
	}

}


bool Random_loading_of_ships(int** arr, int y, int x, Simvol s, int count, int data) {


	bool hasSomething = false;
	int counterchecker = 0;

	if (s == RIGHT) {

		int i = 0, k = 0;

		for (int i = y - 1; i < y + 2; i++) {

			for (int k = x - 1; k < x + count + 1; k++) {

				if (arr[i][k] != 0)
					++counterchecker;
			}
			if (counterchecker > 0)
				break;
		}

		if (counterchecker == 0) {

			for (int i = y; i < y + 1; i++) {

				for (int k = x; k < x + count; k++) {

					arr[i][k] = data;
				}
			}

			hasSomething = false;
		}

		else { hasSomething = true; }
	}

	else if (s == DOWN) {

		int i = 0, k = 0;

		for (i = y - 1; i < y + count + 1; i++) {

			if (i >= 10) {
				counterchecker++;
				break;
			}

			for (k = x - 1; k < x + 2; k++) {

				if (arr[i][k] != 0 || k < 0 || k > mySize || i < 0 || i > mySize || arr[x - 1][y + 1] == 5)
					++counterchecker;
			}
		}

		if (counterchecker == 0) {

			for (size_t i = y; i < y + count; i++)
			{
				for (size_t j = x; j < x + 1; j++)
					arr[i][j] = data;
			}

			hasSomething = false;
		}
		else
		{
			hasSomething = true;
			cout << "\a";
		}
	}
	return hasSomething;
}


void function_to_randomly_fill_ships(int** arr, int count, int data) {

	srand(time(nullptr));

	bool isNotOkay = false;

	do
	{
		int x = 2 + rand() % (11 - 2 + 1);
		int y = 1 + rand() % (9 - 1 + 1);

		isNotOkay = false;

		if (y % 2 == 0) {
			isNotOkay = Random_loading_of_ships(arr, y, x, RIGHT, count, data);
		}
		else {
			isNotOkay = Random_loading_of_ships(arr, y, x, DOWN, count, data);
		}

		if (isNotOkay == false)break;

	} while (isNotOkay == true); srand(81);
}


void Random_charging_function_of_enemy_ships(int** arr, int count, int data) {

	srand(time(nullptr));

	bool isNotOkay = false;

	do
	{
		int x = 1 + rand() % (11 - 1 + 1);
		int y = 1 + rand() % (8 - 1 + 1);

		isNotOkay = false;

		if (x % 2 == 0) {
			isNotOkay = Random_loading_of_ships(arr, y, x, RIGHT, count, data);
		}
		else {
			isNotOkay = Random_loading_of_ships(arr, y, x, DOWN, count, data);
		}

		if (isNotOkay == false)break;

	} while (isNotOkay == true); srand(43);
}


void putShipRandomly(int** arr, int data) {

	srand(200);

	const int size = 10;
	int counters[size] = { 4,3,3,2,2,2,1,1,1,1 };

	for (size_t i = 0; i < size; i++)
		function_to_randomly_fill_ships(arr, counters[i], data);
}


void putShipRandomlyEnemy(int** arr, int data) {

	srand(101);

	const int size = 10;
	int counters[size] = { 4,3,3,2,2,2,1,1,1,1 };

	for (size_t i = 0; i < size; i++)
		Random_charging_function_of_enemy_ships(arr, counters[i], data);
}


bool battle(int** arr) {

	int old_y = -1;
	int old_x = -1;
	int simvol = -1;

	if (chekingIgnore == false) {

		cin.ignore();
		cin.clear();
		chekingIgnore = true;
	}


	while (true) {


		system("cls");
		Myships(playerBoard, mySize);/////////////////////////////////////////////////////////////////
		OpponentsShips(arr, mySize);/////////////////////////////////////////////////////////////////

		int direction = 0;
		direction = _getch();

		if (direction == 224) {

			direction = _getch();
			old_y = pack.y;
			old_x = pack.x;

			if (arr[pack.y][pack.x] == 3 && simvol != -1)
				arr[old_y][old_x] = simvol;

			if (direction == RIGHT) {

				if (İsEmptyPlace(arr, pack.y, pack.x + 1)) {////////////////////////////////////
					simvol = arr[pack.y][pack.x + 1];
					pack.x++;
				}
			}

			else if (direction == LEFT) {

				if (İsEmptyPlace(arr, pack.y, pack.x - 1)) {/////////////////////////////////////////
					simvol = arr[pack.y][pack.x - 1];
					pack.x--;
				}
			}

			else if (direction == UP) {

				if (İsEmptyPlace(arr, pack.y - 1, pack.x)) {////////////////////////////////////////////////
					simvol = arr[pack.y - 1][pack.x];
					pack.y--;
				}
			}

			else if (direction == DOWN) {

				if (İsEmptyPlace(arr, pack.y + 1, pack.x)) {/////////////////////////////////////////////
					simvol = arr[pack.y + 1][pack.x];
					pack.y++;
				}
			}
			arr[pack.y][pack.x] = 3;
		}

		else if (direction == ENTER) {


			if (simvol == 6) {

				arr[pack.y][pack.x] = 7;
				simvol = -1;
				continue;
			}

			else if (simvol == 0) {

				arr[pack.y][pack.x] = 2;
				return false;
			}

			else
				arr[pack.y][pack.x] = 0;

			pack.y = 0;
			pack.x = 0;
			return false;
		}
	}
}


void showMetods() {

	system("cls");
	Myships(playerBoard, mySize);/////////////////////////////////////////////////////////////////////////
	OpponentsShips(enemyBoard, mySize);//////////////////////////////////////////////////////////////////
}


bool isBoom(int** arr, int x, int y) {


	if (arr[y][x - 1] == 5 || arr[y][x + 1] == 5 || arr[y - 1][x] == 5 || arr[y + 1][x] == 5) {

		return false;
	}

	return true;
}

bool isEmptyArea(int** arr, int x, int y) {

	if (arr[y][x - 1] == 7 || arr[y][x + 1] == 7 || arr[y - 1][x] == 7 || arr[y + 1][x] == 7) {

		return false;
	}
	return true;
}


void ClearStrike(Striked& strike) {
	strike.dowm = false;
	strike.dowm_Access = false;
	strike.left = false;
	strike.left_Access = false;
	strike.right = false;
	strike.right_Access = false;
	strike.striked = false;
	strike.striked_x = -1;
	strike.striked_y = -1;
}


void battleRandom(int** arr)
{
	srand(time(0));

	bool isOkay = false;
	int x = 0;
	int y = 0;

	while (true) {

		do {

			x = rand() % 10;
			y = rand() % 10;
			Sleep(500);

		} while (arr[y][x] == 2 || arr[y][x] == 7);

		if (!strike.striked) {

			if (arr[y][x] == 5) {

				if (isBoom(arr, x, y)) {

					cout << "\a\a\a";
					ClearStrike(strike);
					continue;
				}

				arr[y][x] = 7;

				strike.striked = true;
				strike.striked_x = x;
				strike.striked_y = y;

				system("cls");
				Myships(playerBoard, mySize);//////////////////////////////////////////////////////////////////////////
				OpponentsShips(enemyBoard, mySize);////////////////////////////////////////////////////////////////////
				Sleep(500);
				continue;
			}
		}

		else {

			if (!strike.left_Access) {

				//strike.left_Access = true;
				if (strike.left == false) {

					x = strike.striked_x - 1;
					y = strike.striked_y;

					if (arr[y][x] == 2) {
						strike.left_Access = true;
						continue;
					}
					else if (y >= mySize || y<0 || x>mySize || x < 0) {
						strike.left_Access = true;
						continue;
					}

					if (isEmptyArea(arr, x, y)) {
						strike.left_Access = true;
						continue;
					}

					if (arr[y][x] == 5) {

						arr[y][x] = 7;
						strike.left = true;

						if (isBoom(arr, x, y)) {
							if (isBoom(arr, strike.striked_x, strike.striked_y)) {
								cout << "\a\a\a";
								ClearStrike(strike);
								continue;
							}
						}
					}

					else {
						arr[y][x] = 2;
						strike.left = false;
						strike.left_Access = true;
						Sleep(500);
						showMetods();
						break;
					}
				}

				if (strike.left == true) {

					x = strike.striked_x - 2;
					y = strike.striked_y;

					if (arr[y][x] == 2) {
						strike.left_Access = true;
						continue;
					}
					else if (y >= mySize || y<0 || x>mySize || x < 0) {
						strike.left_Access = true;
						continue;
					}
					if (arr[y][x] == 5) {
						arr[y][x] = 7;
						strike.left = true;
						if (isBoom(arr, x, y)) {
							if (isBoom(arr, strike.striked_x, strike.striked_y)) {
								cout << "\a\a\a";
								ClearStrike(strike);
								continue;
							}
						}
						Sleep(500);
						showMetods();
					}
					else {
						arr[y][x] = 2;
						strike.left = false;
						strike.left_Access = true;
						//strike.up_Access = true;
						//strike.dowm_Access = true;
						Sleep(500);
						showMetods();
						break;
					}
				}

				if (strike.left == true) {

					x = strike.striked_x - 3;
					y = strike.striked_y;

					if (arr[y][x] == 2) {
						strike.left_Access = true;
						continue;
					}
					else if (y >= mySize || y<0 || x>mySize || x < 0) {
						strike.left_Access = true;
						continue;
					}

					if (arr[y][x] == 5) {
						arr[y][x] = 7;
						strike.left = true;
						if (isBoom(arr, x, y)) {
							if (isBoom(arr, strike.striked_x, strike.striked_y)) {
								cout << "\a\a\a";
								ClearStrike(strike);
								continue;
							}
						}
						Sleep(500);
						showMetods();
					}
					else {
						arr[y][x] = 2;
						strike.left = false;
						strike.left_Access = true;
						//strike.dowm_Access = true;
						//strike.up_Access = true;
						Sleep(500);
						showMetods();
						break;
					}
				}
			}

			if (!strike.right_Access) {

				//strike.right Access = true;
				if (strike.right == false) {

					x = strike.striked_x + 1;
					y = strike.striked_y;

					if (arr[y][x] == 2) {
						strike.right_Access = true;
						continue;
					}
					else if (y >= mySize || y<0 || x>mySize || x < 0) {
						strike.right_Access = true;
						continue;
					}

					if (isEmptyArea(arr, x, y)) {
						strike.left_Access = true;
						continue;
					}

					if (arr[y][x] == 5) {
						arr[y][x] = 7;
						strike.right = true;
						if (isBoom(arr, x, y)) {
							if (isBoom(arr, strike.striked_x, strike.striked_y)) {
								cout << "\a\a\a";
								ClearStrike(strike);
								continue;
							}
						}
						Sleep(500);
						showMetods();
					}

					else {
						arr[y][x] = 2;
						strike.right = false;
						strike.right_Access = true;
						Sleep(500);
						showMetods();
						break;
					}
				}

				if (strike.right == true) {

					x = strike.striked_x + 2;
					y = strike.striked_y;

					if (arr[y][x] == 2) {
						strike.right_Access = true;
						continue;
					}
					else if (y >= mySize || y<0 || x>mySize || x < 0) {
						strike.right_Access = true;
						continue;
					}

					if (arr[y][x] == 5) {
						arr[y][x] = 7;
						strike.right = true;
						if (isBoom(arr, x, y)) {
							if (isBoom(arr, strike.striked_x, strike.striked_y)) {
								cout << "\a\a\a";
								ClearStrike(strike);
								continue;
							}
						}
						Sleep(500);
						showMetods();
					}
					else {
						arr[y][x] = 2;
						strike.right = false;
						strike.right_Access = true;
						//strike.up_Access = true;
						//strike.dowm_Access = true;
						Sleep(500);
						showMetods();
						break;
					}
				}

				if (strike.right == true) {

					x = strike.striked_x + 3;
					y = strike.striked_y;

					if (arr[y][x] == 2) {
						strike.right_Access = true;
						continue;
					}
					else if (y >= mySize || y<0 || x>mySize || x < 0) {
						strike.right_Access = true;
						continue;
					}

					if (arr[y][x] == 5) {
						arr[y][x] = 7;
						strike.right = true;
						if (isBoom(arr, x, y)) {
							if (isBoom(arr, strike.striked_x, strike.striked_y)) {
								cout << "\a\a\a";
								ClearStrike(strike);
								continue;
							}
						}
						Sleep(500);
						showMetods();
					}
					else {
						arr[y][x] = 2;
						strike.right = false;
						strike.right_Access = true;
						Sleep(500);
						showMetods();
						break;
					}
				}
			}

			if (!strike.dowm_Access) {


				if (strike.dowm == false) {

					x = strike.striked_x;
					y = strike.striked_y + 1;

					if (arr[y][x] == 2) {
						strike.dowm_Access = true;
						continue;
					}
					else if (y >= mySize || y<0 || x>mySize || x < 0) {
						strike.dowm_Access = true;
						continue;
					}
					if (isEmptyArea(arr, x, y)) {
						strike.left_Access = true;
						continue;
					}

					if (arr[y][x] == 5) {
						arr[y][x] = 7;
						strike.dowm = true;
						if (isBoom(arr, x, y)) {
							if (isBoom(arr, strike.striked_x, strike.striked_y)) {
								cout << "\a\a\a";
								ClearStrike(strike);
								continue;
							}
						}
						Sleep(500);
						showMetods();
					}

					else {
						arr[y][x] = 2;
						strike.dowm = false;
						strike.dowm_Access = true;
						Sleep(500);
						showMetods();
						break;
					}
				}

				if (strike.dowm == true) {

					x = strike.striked_x;
					y = strike.striked_y + 2;

					if (arr[y][x] == 2) {
						strike.dowm_Access = true;
						continue;
					}
					else if (y >= mySize || y<0 || x>mySize || x < 0) {
						strike.dowm_Access = true;
						continue;
					}

					if (arr[y][x] == 5) {
						arr[y][x] = 7;
						strike.dowm = true;
						if (isBoom(arr, x, y)) {
							if (isBoom(arr, strike.striked_x, strike.striked_y)) {
								cout << "\a\a\a";
								ClearStrike(strike);
								continue;
							}
						}
						Sleep(500);
						showMetods();
					}
					else {
						arr[y][x] = 2;
						strike.dowm = false;
						strike.dowm_Access = true;
						Sleep(500);
						showMetods();
						break;
					}
				}

				if (strike.dowm == true) {

					x = strike.striked_x;
					y = strike.striked_y + 3;

					if (arr[y][x] == 2) {
						strike.dowm_Access = true;
						continue;
					}
					else if (y >= mySize || y<0 || x>mySize || x < 0) {
						strike.dowm_Access = true;
						continue;
					}

					if (arr[y][x] == 5) {
						arr[y][x] = 7;
						strike.dowm = true;
						if (isBoom(arr, x, y)) {
							if (isBoom(arr, strike.striked_x, strike.striked_y)) {
								cout << "\a\a\a";
								ClearStrike(strike);
								continue;
							}
						}
						Sleep(500);
						showMetods();
					}
					else {
						arr[y][x] = 2;
						strike.dowm = false;
						strike.dowm_Access = true;
						Sleep(500);
						showMetods();
						break;
					}
				}
			}

			if (!strike.up_Access) {


				if (strike.up == false) {

					x = strike.striked_x;
					y = strike.striked_y - 1;

					if (arr[y][x] == 2) {
						strike.up_Access = true;
						continue;
					}
					else if (y >= mySize || y<0 || x>mySize || x < 0) {
						strike.up_Access = true;
						continue;
					}
					if (isEmptyArea(arr, x, y)) {
						strike.left_Access = true;
						continue;
					}

					if (arr[y][x] == 5) {
						arr[y][x] = 7;
						strike.up = true;
						if (isBoom(arr, x, y)) {
							if (isBoom(arr, strike.striked_x, strike.striked_y)) {
								cout << "\a\a\a";
								ClearStrike(strike);
								continue;
							}
						}
						Sleep(500);
						showMetods();
					}

					else {
						arr[y][x] = 2;
						strike.up = false;
						strike.up_Access = true;
						Sleep(500);
						showMetods();
						break;
					}
				}

				if (strike.up == true) {

					x = strike.striked_x;
					y = strike.striked_y - 2;

					if (arr[y][x] == 2) {
						strike.up_Access = true;
						continue;
					}
					else if (y >= mySize || y<0 || x>mySize || x < 0) {
						strike.up_Access = true;
						continue;
					}

					if (arr[y][x] == 5) {
						arr[y][x] = 7;
						strike.up = true;
						if (isBoom(arr, x, y)) {
							if (isBoom(arr, strike.striked_x, strike.striked_y)) {
								cout << "\a\a\a";
								ClearStrike(strike);
								continue;
							}
						}
						Sleep(500);
						showMetods();
					}
					else {
						arr[y][x] = 2;
						strike.up = false;
						strike.up_Access = true;
						Sleep(500);
						showMetods();
						break;
					}
				}

				if (strike.up == true) {

					x = strike.striked_x;
					y = strike.striked_y - 3;

					if (arr[y][x] == 2) {
						strike.up_Access = true;
						continue;
					}
					else if (y >= mySize || y<0 || x>mySize || x < 0) {
						strike.up_Access = true;
						continue;
					}

					if (arr[y][x] == 5) {
						arr[y][x] = 7;
						strike.up = true;
						if (isBoom(arr, x, y)) {
							if (isBoom(arr, strike.striked_x, strike.striked_y)) {
								cout << "\a\a\a";
								ClearStrike(strike);
								continue;
							}
						}
						Sleep(500);
						showMetods();
					}
					else {
						arr[y][x] = 2;
						strike.up = false;
						strike.up_Access = true;
						Sleep(500);
						showMetods();
						break;
					}
				}
			}
		}

		if (arr[y][x] == 0) {

			arr[y][x] = 2;
			break;
		}
	}
}

void Show_Text(string text, int TimeSlepp = 1)
{
	for (int i = 0; i < text.length(); i++)
	{
		cout << text[i];
		Sleep(TimeSlepp);
	}cout << endl;
}


void welcomeScreen() {
	mysetcolor(9, 0); cout << "\n";

	Show_Text("       b b b b b             aaa             ttttttttttt   ttttttttttt         ll                  e e e e e e e        ");
	Show_Text("       b        b           aa aa                 t             t              ll                  ee                   ");
	Show_Text("       b        b          aa   aa                t             t              ll                  ee                   ");
	Show_Text("       b b  b  b          aa a a aa               t             t              ll                  eeeeeee              ");
	Show_Text("       b        b        aa       aa              t             t              ll                  ee                   ");
	Show_Text("       b        b       aa         aa             t             t              ll                  ee                   ");
	Show_Text("       b b b b b       aa           aa            t             t              lllllllllllll       e e e e e e e        ");

	cout << endl;
	cout << endl;
	cout << endl;

	Show_Text("                        ssssssssss              hh          hh         iiiiiiiiiiii      ppppppppp ");
	Show_Text("                       ssss                     hh          hh              ii           pp       p");
	Show_Text("                        ssssss                  hh          hh              ii           pp       p");
	Show_Text("                            ssss                hhhhhhhhhhhhhh              ii           pp p p p  ");
	Show_Text("                              ssss              hh          hh              ii           pp        ");
	Show_Text("                       ssssssssss               hh          hh              ii           pp        ");
	Show_Text("                                                hh          hh         iiiiiiiiiiii      pp        ");
}

void ShowMenu() {

	int select = 0;
	int e = 0;
	mysetcolor(3, 0);
	cout << "\n\n\t\t\t\t\t\t  ";
	while (e < 21) { cout << (char)205; ++e; }
	cout << endl << "\t\t\t\t\t\t" << (char)17 << "  NEW GAME -> 1" << "\t" << (char)16 << endl;
	cout << "\t\t\t\t\t\t" << (char)17 << "  RULES OF GAMES -> 2" << "\t" << (char)16 << endl;
	cout << "\t\t\t\t\t\t" << (char)17 << "  EXIT -> 0     " << "\t" << (char)16 << endl;
	cout << "        \t\t\t\t\t  ";

	int e1 = 0; while (e1 < 21) { cout << (char)205; ++e1; }
	cout << "\n\t\t\t\t\t\t   Select ->";
	cin >> select;
	system("cls");

	while (true) {
		if (select == 1) {

			cout << "\t\t\t\t\t" << (char)17 << " Random[0] or Manual[1] " << (char)16 << endl << endl << endl;

			cout << "\t\t\t\t\t\t" << "Select -> ";
			cin >> select;

			if (select == 0) {

				putShipRandomly(playerBoard, 5);

				system("cls");
				Myships(playerBoard, mySize);///////////////////////////////////////////////////////////////////

				putShipRandomlyEnemy(enemyBoard, 6);
				OpponentsShips(enemyBoard, mySize);////////////////////////////////////////////////////////////////

				while (true) {
					cout << endl << endl << endl;
					system("cls");
					battle(enemyBoard);
					battleRandom(playerBoard);
				}
			}
			else if (select == 1) {

				playerBoard[pack.y][pack.x] = 1;

				ShipManual(playerBoard);
				putShipRandomly(enemyBoard, 6);

				while (true) {
					Sleep(1000);
					system("cls");
					battle(enemyBoard);
					battleRandom(playerBoard);
				}
			}
			else {
				system("cls");
				system("cls");
				continue;
			}
			//Fight Place
		}
		else if (select == 2) {
			mysetcolor(8, 0);
			cout << (char)178;
			mysetcolor(3, 0);
			cout << " -- Area of the enemy and the user:" << endl;

			cout << endl;

			cout << (char)30;
			cout << " -- user's pacman:" << endl;

			cout << endl;

			mysetcolor(14, 0);
			cout << char(30);
			mysetcolor(3, 0);
			cout << " -- Packman  of enemy:" << endl;

			cout << endl;

			mysetcolor(2, 0);
			cout << char(3);
			mysetcolor(3, 0);
			cout << " -- Place of user's ships:" << endl;

			cout << endl;
			cout << "Esc : change directions of user's ships:" << endl;

			cout << endl;

			mysetcolor(5, 0);
			cout << char(1);
			mysetcolor(3, 0);
			cout << " -- bombed area:" << endl;

			cout << endl;

			mysetcolor(4, 0);
			cout << "X";
			mysetcolor(3, 0);
			cout << " -- unburst ships:" << endl;

			cout << endl;

			cout << "\t\t\t\t\t\t\t" << (char)17 << " MENU : [3] " << (char)16 << endl;
			int select1 = 0;
			cout << "\t\t\t\t\t\t\t" << "select -> ";
			cin >> select1;

			if (select1 == 3) {
				system("cls");
				ShowMenu();
			}
			else {
				system("cls");
				continue;
			}
			system("pause");
		}
		else if (select == 0) {
			system("cls");
		}
		else {
			ShowMenu();
		}
	}
}