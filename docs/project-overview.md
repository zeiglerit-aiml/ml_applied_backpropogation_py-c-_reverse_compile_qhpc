# Project Overview

## Mission

Investigate a hybrid machine-learning compiler and execution architecture: Python as the high-level model and workflow interface, with selected computational regions specialized and dispatched to native C/C++, GPU, distributed HPC, vector, and quantum-classical backends.

## System flow

`Python frontend → graph capture → typed IR → analysis/optimization → execution planner → backend runtime`

## Core workstreams

1. **Backpropagation and autodiff:** forward/reverse graph execution, chain-rule correctness, gradient accumulation, checkpointing, and optimizer interfaces.
2. **Python/native interoperability:** pybind11 bindings, Python C API where appropriate, Cython/Numba comparisons, memory ownership, and minimizing boundary crossings.
3. **Compiler:** constrained Python capture, type/shape inference, IR, optimization, code generation, and compilation caching.
4. **HPC:** CPU SIMD, OpenMP, CUDA, distributed execution, data locality, memory bandwidth, and communication costs.
5. **Vector intelligence:** embedding inference, vector similarity, ANN integration, and RAG retrieval workflows.
6. **Quantum-classical:** simulator/QPU adapters, variational circuits, parameter-shift gradients, and classical optimizer loops.
7. **Assurance:** source and dependency scanning, compiler provenance, artifact signing, runtime isolation, and reproducible benchmarks.

## Execution planning

The planner should estimate operation size, dtype, tensor shape, memory footprint, available devices, data locality, compilation cost, expected reuse, latency target, and numerical tolerance. It should select a backend only when expected benefit exceeds compilation, transfer, synchronization, and launch costs.

## Research constraints

- Do not assume arbitrary Python can be translated directly to C++ without preserving Python runtime semantics.
- Bindings are not compilers; pybind11 connects runtimes.
- Native code is not automatically faster than optimized numerical libraries.
- Classical reverse-mode autodiff and quantum circuit differentiation are distinct.
- Vector databases remain separate systems; selected numerical kernels can be optimized.
- Quantum hardware is an optional specialized backend, not a presumed acceleration path.

## First proof of concept

Build a two-layer neural network with matching Python/PyTorch and C++ implementations. Expose native operations with pybind11. Compare forward outputs, gradients, convergence, latency, throughput, and memory. Validate gradients against PyTorch autograd and finite differences before adding compiler complexity.

## Phased roadmap

- P0: repository scaffolding, design contracts, build/test conventions.
- P1: Python reference network, mathematical derivation, gradient tests.
- P2: C++ kernels and pybind11 boundary.
- P3: graph representation and typed operation contracts.
- P4: compiler experiments with LLVM/MLIR and graph optimizations.
- P5: CUDA and distributed HPC backends.
- P6: vector retrieval and quantum-classical adapters.
- P7: adaptive execution planner, security assurance, and reproducible benchmarks.

## Non-goals for initial scaffold

No claim of a complete Python compiler, quantum speedup, production vector database, distributed training platform, or production-ready optimizer is made at this stage.
