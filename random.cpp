#include "random.h"

float Random(float min, float max)
{
    static mt19937 rng(random_device{}());
    uniform_real_distribution<float> dist(min, max);
    return dist(rng);
}

vector<float> GetRandomVector(int dimensions, float magnitude)
{

    vector<float> results;

    for (int i = 0; i < dimensions - 1; i++)
    {

        float val = Random(magnitude / 4, magnitude / 2);
        if (Random(0, 1) > 0.5f)
            val *= -1;
        results.push_back(val);
        magnitude = sqrt(pow(magnitude, 2) - pow(results[i], 2));
    }

    float finalVal = magnitude;
    if (Random(0, 1) > 0.5f)
        finalVal *= -1;
    results.push_back(finalVal);

    return results;
}