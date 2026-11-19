#include "hybrid_ml/ops.hpp"
#include <stdexcept>
namespace hybrid_ml {
static void validate(const std::vector<double>& p, const std::vector<double>& t) {
    if (p.empty() || p.size() != t.size()) throw std::invalid_argument("arrays must be non-empty and equal length");
}
double mse_loss(const std::vector<double>& p, const std::vector<double>& t) {
    validate(p, t); double sum = 0.0;
    for (std::size_t i = 0; i < p.size(); ++i) { const double d = p[i] - t[i]; sum += d * d; }
    return sum / static_cast<double>(p.size());
}
std::vector<double> mse_gradient(const std::vector<double>& p, const std::vector<double>& t) {
    validate(p, t); std::vector<double> grad(p.size());
    for (std::size_t i = 0; i < p.size(); ++i) grad[i] = 2.0 * (p[i] - t[i]) / static_cast<double>(p.size());
    return grad;
}
}
