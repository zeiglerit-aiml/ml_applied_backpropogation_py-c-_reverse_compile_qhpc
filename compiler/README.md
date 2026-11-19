# Compiler Subsystem

Planned responsibilities: constrained Python graph capture, type and shape analysis, compiler-neutral IR, optimization passes, backend lowering, native code generation, and compilation cache management.

Initial design rule: preserve Python semantics or reject unsupported dynamic behavior explicitly. Do not silently compile unsupported constructs.
