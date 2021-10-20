#include <iostream>
#include <cmath>
// returns the mean of X
float mean(float* x, int size) {
    float sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += x[i];
    }
    return sum / size;
}
// returns the variance of X
float var(float* x, int size) {
    float x_mean, var;
    x_mean = mean(x, size);
    for (int i = 0; i < size; ++i) {
        var += pow(x[i] - x_mean, 2);
    }
    return var / size;
}
// returns the covariance of X and Y
float cov(float* x, float* y, int size) {
    float x_mean, y_mean, var;
    x_mean = mean(x, size);
    y_mean = mean(y, size);
    for (int i = 0; i < size; ++i) {
        var += (x[i] - x_mean) * (y[i] - y_mean);
    }
    return var / size;
}

// returns the Pearson correlation coefficient of X and Y
float pearson(float* x, float* y, int size) {
    float x_var, y_var, xy_cov;
    x_var = var(x, size);
    y_var = var(y, size);
    xy_cov = cov(x, y, size);
    return xy_cov / (sqrt(x_var) * sqrt(y_var));
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
    // just check :)
}
