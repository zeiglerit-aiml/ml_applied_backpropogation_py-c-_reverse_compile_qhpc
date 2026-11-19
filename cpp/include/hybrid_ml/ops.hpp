#pragma once
#include <vector>
namespace hybrid_ml {
double mse_loss(const std::vector<double>& prediction, const std::vector<double>& target);
std::vector<double> mse_gradient(const std::vector<double>& prediction, const std::vector<double>& target);
}
