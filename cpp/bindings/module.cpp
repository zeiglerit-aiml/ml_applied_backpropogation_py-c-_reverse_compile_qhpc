#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "hybrid_ml/ops.hpp"
namespace py = pybind11;
PYBIND11_MODULE(_native, m) {
    m.doc() = "Native numerical operations for hybrid ML execution";
    m.def("mse_loss", &hybrid_ml::mse_loss);
    m.def("mse_gradient", &hybrid_ml::mse_gradient);
}
