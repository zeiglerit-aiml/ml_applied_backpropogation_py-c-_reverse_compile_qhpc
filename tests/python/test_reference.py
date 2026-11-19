import numpy as np
import pytest
from hybrid_ml.reference import mse_gradient, mse_loss

def test_mse_loss_and_gradient():
    p = np.array([0.2, 0.8])
    y = np.array([0.0, 1.0])
    assert mse_loss(p, y) == pytest.approx(0.04)
    np.testing.assert_allclose(mse_gradient(p, y), [0.2, -0.2])

def test_shape_mismatch_rejected():
    with pytest.raises(ValueError):
        mse_loss(np.array([1.0]), np.array([1.0, 2.0]))
