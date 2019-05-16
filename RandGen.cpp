#include <pybind11/pybind11.h>
namespace py = pybind11;
py::object Randint = py::module::import("random").attr("randint");
py::object RandomInt = Randint.attr("Randint")
