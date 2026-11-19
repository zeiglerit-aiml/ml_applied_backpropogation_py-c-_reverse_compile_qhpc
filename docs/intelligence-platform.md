# Neural Intelligence Platform

## Purpose

This project is the intelligence and computational-learning layer: it develops neural computation, Weight Space Programming, adaptive learning, cross-model knowledge transfer, hybrid execution, and useful AI applications.

Governance is a separate protective layer. It can authorize operations, enforce policies, assess risk, and verify artifacts through stable interfaces. It does not replace or define the intelligence engine.

## Design principles

- **Intelligence first:** prioritize learning capability, model quality, useful applications, and measurable outcomes.
- **Common tensor contract:** use consistent shape, dtype, strides, device, ownership/lifetime, gradient, and graph metadata across Python and native execution.
- **WSP as a core discipline:** inspect, characterize, compare, align, transform, and optimize learned parameters with architecture awareness.
- **Persistent but controlled learning:** maintain versioned baselines, adapters, checkpoints, experiment branches, and rollback paths.
- **Evidence-based model understanding:** combine tensor metadata, graph structure, parameter statistics, provenance, and authorized behavioral probes.
- **Measured execution:** choose CPU, native, GPU, or distributed paths based on end-to-end measurements.
- **Economic usefulness:** evaluate quality, cost, latency, throughput, reliability, and real application value.
- **Independent governance:** keep authorization and enforcement outside the learning mechanism, while making policy decisions mandatory at integration boundaries.

## Major subsystems

### Tensor and neural computation

The foundational computational substrate: tensor contracts, neural layers, forward propagation, reverse-mode autodiff, optimizers, numerical checks, and graph representation.

### Weight Space Intelligence

A first-class subsystem for parameter inspection, descriptive statistics, fingerprints, checkpoint diffs, architecture-aware alignment, transformations, ablation, sensitivity analysis, and optimization experiments.

### Persistent learning

Versioned model states, adapter management, incremental learning, replay, retention tests, regression detection, evaluation gates, and rollback.

### Cross-model intelligence

Model characterization and validated capability transfer using compatible parameter mappings, representation alignment, adapters, or knowledge distillation. Transfer methods must be selected according to evidence of compatibility.

### Hybrid execution

Python graph capture, typed intermediate representation, optimization, native C++ bindings, CPU/GPU/HPC execution, and adaptive planning.

### Application and economic layer

Reusable components and applications across research, operations, finance, security, and other domains. Threat intelligence is one application area among many, not the platform's defining purpose.

## Protected model-state lifecycle

1. Register the model and record available architecture, tensor, and provenance metadata.
2. Store model artifacts using authenticated encryption and managed key access.
3. Load artifacts only into an authorized execution environment.
4. Inspect and evaluate the baseline.
5. Train or transform an experimental version.
6. Compare parameter state and behavioral outcomes.
7. Submit the candidate to independent governance and assurance checks.
8. Promote, retain as an experiment, or reject the candidate.
9. Preserve provenance and a rollback-capable known-good version.

Encryption at rest is distinct from computation on ciphertext. Ordinary training generally requires controlled access to plaintext parameters in a protected execution environment. Confidential computing and homomorphic encryption are separate research options with their own performance and capability tradeoffs.

## Initial engineering sequence

Start with a minimal tensor contract and reference neural network. Add a native implementation only after the reference behavior is testable. Build WSP inspection against the same model-state format so the learning and weight-intelligence subsystems share a common data contract. Add persistent learning and cross-model transfer only after comparison, validation, and rollback are in place.
