#ifndef RANDOM_H
#define RANDOM_H

#include <random>
#include <cmath>
#include <vector>

using namespace std;

float Random(float min, float max);

vector<float> GetRandomVector(int dimensions, float magnitude);

#endif
