#include <iostream>
using namespace std;

/*
 * Import library
 */
#include <vector>
#include <windows.h>
#include <conio.h>
#include <cstring>
#include <time.h>
#include <random>

/*
 * MACRO
 */
#define WIDTH 40
#define HEIGHT 20
#define BODY '*'
#define APPLE 'O'

/*
 * Enum
 */
enum class Direction
{
	up,
	right,
	down,
	left
};

// Each point is a part of the snake
struct Point
{
	int x;
	int y;
};


#pragma region GlobalVariable
// Create snake
vector<Point> snake = {
	Point{ WIDTH / 2 + 2, HEIGHT / 2 },
	Point{ WIDTH / 2 + 1, HEIGHT / 2 },
	Point{ WIDTH / 2, HEIGHT / 2 },
	Point{ WIDTH / 2 - 1, HEIGHT / 2 },
	Point{ WIDTH / 2 - 2, HEIGHT / 2 }
};
Direction direction = Direction::right;
Point apple;
int score = 0;
int speed = 300;
Point prevTail;
#pragma endregion


#pragma region Prototype
void drawSnakePart(Point);
void drawSnake();
void gotoxy(int, int);
void ShowConsoleCursor(bool);
void move();
void drawBox();
bool isHitWall();
bool isBiteItself();
void drawHeadnTail();
void genApple();
bool isAteApple();
void growing();
void displayScore();
void showEndMenu();
void startGame();
void resetSnake();
void showStartMenu();
#pragma endregion



/*
 * Let's the game start
 */
int main()
{
	showStartMenu();
	return 0;
}
//hello

