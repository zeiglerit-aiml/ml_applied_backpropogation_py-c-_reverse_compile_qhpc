"""Small NumPy reference operations for numerical parity tests."""
from __future__ import annotations
import numpy as np

def mse_loss(prediction: np.ndarray, target: np.ndarray) -> float:
    prediction = np.asarray(prediction, dtype=np.float64)
    target = np.asarray(target, dtype=np.float64)
    if prediction.shape != target.shape:
        raise ValueError("prediction and target shapes must match")
    return float(np.mean((prediction - target) ** 2))

def mse_gradient(prediction: np.ndarray, target: np.ndarray) -> np.ndarray:
    prediction = np.asarray(prediction, dtype=np.float64)
    target = np.asarray(target, dtype=np.float64)
    if prediction.shape != target.shape or prediction.size == 0:
        raise ValueError("non-empty prediction and target arrays must have matching shapes")
    return 2.0 * (prediction - target) / prediction.size
