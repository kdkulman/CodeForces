import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib.animation import FuncAnimation
import math


def f(x, y):
    return x ** 2 + y ** 2

def gradient(x, y):
    df_dx = 2*x
    df_dy = 2*y
    return df_dx, df_dy

start = (2.5, 0)
# Gradient descent function
def gradient_descent(gradient, start=(2.5, 0), learn_rate=0.005, n_iter=40, tolerance=1e-06):
    x, y = start
    path = [(x, y, f(x, y))]
    for _ in range(n_iter):
        grad_x, grad_y = gradient(x, y)
        diff_x, diff_y = -learn_rate * grad_x, -learn_rate * grad_y
        if abs(diff_x) <= tolerance and abs(diff_y) <= tolerance: break
        x += diff_x
        y += diff_y
        path.append((x, y, f(x, y)))
    return np.array(path)

path = gradient_descent(gradient)  # Run gradient descent

# Create a grid and calculate function values
x = np.linspace(-5, 5, 50)
y = np.linspace(-5, 5, 50)

x, y = np.meshgrid(x, y)
z = f(x, y)

# Prepare the points for plotting
x_path = []
y_path = []
z_path = []
for path_coordinate in path:
    x_path.append(path_coordinate[0])
    y_path.append(path_coordinate[1])
    z_path.append(path_coordinate[2])

#Step 3 - Visualization
fig = plt.figure(figsize=(10, 7))
ax = fig.add_subplot(111, projection='3d')
ax.plot_surface(x, y, z, cmap='viridis', alpha=0.6)
path_plot, = ax.plot(x_path, y_path, z_path, color='r', marker='.', markersize=10, label='Gradient Descent Path')
ax.set_xlabel('X axis')
ax.set_ylabel('Y axis')
ax.set_zlabel('Z axis')
ax.set_title(r'$f(x, y) = x^4 +4x^3 - x^2 - 4x$', fontsize='30')
ax.set_zlim(-20, 50)
ax.set_ylim(-5, 4)
ax.set_xlim(-5, 4)


ax.legend()
plt.show()