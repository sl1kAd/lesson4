#include <iostream>
#include <cmath>
#include <chrono>
#include <random>
#include <ctime>
#include <algorithm>
#include <conio.h>

using namespace std;

void Ex1(int);
void Ex2(float, int);
void Ex3(float, int);
void Ex4();


int x = 0;
int y = 0;

int main()
{
	int x;

	cout << "Press x: ";

	cin >> x;

	Ex1(x);
	
	
	float x;

	int a;

	cout << "Press X: ";

	cin >> x;

	cout << "Press A: ";

	cin >> a;

	Ex2(x, a);
	
	float x;

	int a;

	cout << "Press X: ";

	cin >> x;

	cout << "Press A: ";

	cin >> a;

	Ex3(x, a);
	

	Ex4();

	return 0;
}


void Ex1(int y)
{
	char d[40];

	int i;

	for (i = 0; y; i++)
	{
		d[i] = y % 2;

		y /= 2; 
	}

	for (i--; i >= 0; i--)
	{
		cout << (int)d[i];
	}
}

void Ex2(float y, int z)
{
	pow(y, z);

	cout << "x ^ a = " << pow(y, z);
}

void Ex3(float y, int z)
{
	if (z % 2 == 0)
	{
		pow (y, 2);

		z /= 2;

		cout << "x ^ a = " << y << " " << z;
	}
	else
	{
		y *= pow (y, z);

		z--;

		cout << "x ^ a = " << y << " " << z;
	}
}


void Ex4()
{

    int* test;

    int m;

    int width, height, j, i;

    int counting = 0;

    int tests = 0;

    int W[2]{ 0,1 };

    test = new int[110];

    width = 10;

    height = 10;

    srand(time(NULL));

    int num;

    cout << endl;
  
    for (int m = 0; m < width + 1; m++)
    {
        cout << "#";
    }
    cout << endl;

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width + 1; j++)
        {
            if (y == i && x == j)
            {
                test[i] = 9;

                cout << test[i];
            }
            else 
            {
                num = rand() % 2; 

                test[i] = num;

                cout << test[i];

                if (num == 1) 
                {
                    tests += 1;
                }


            }

        }
        cout << endl;
    }

    for (int z = 0; z < width + 1; z++)
    {

        cout << "#";
    }
    for (int c = 0; c < 110; c++) 
    {
        if (W[0] == test[counting] && x < width)
        {
            x++;

            y++;

            counting += 1;
        }
        else if (W[1] == test[counting])
        {
            counting += 1;

            x = 0;

            y += 1;
        }
        else if (W[1] == test[counting] && y != 0)
        {
            x++;

            counting += 1;
        }
    }
    cout << endl;

    cout << tests << " " << x << " " << counting;
}