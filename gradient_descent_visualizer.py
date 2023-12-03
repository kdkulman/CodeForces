import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib.animation import FuncAnimation

def f(x, y):
    return 10*(x**2) + 5*(y**2)

def gradient(x, y):
    return 20*x, 10*y

# Gradient descent function
def gradient_descent(gradient, start, learn_rate, n_iter=50, tolerance=1e-06):
    x, y = start
    path = [(x, y, f(x, y))]
    for _ in range(n_iter):
        print(path[-1])
        grad_x, grad_y = gradient(x, y)
        diff_x, diff_y = -learn_rate * grad_x, -learn_rate * grad_y
        if abs(diff_x) <= tolerance and abs(diff_y) <= tolerance:
            break
        x += diff_x
        y += diff_y
        path.append((x, y, f(x, y)))
    return np.array(path)

start = (10, 10)
path = gradient_descent(gradient, start, 0.01) # Run gradient descent


# Create a grid and calculate function values
x = np.linspace(-start[0], start[0], 100)
y = np.linspace(-start[1], start[1], 100)
x, y = np.meshgrid(x, y)
z = f(x, y)

# Plotting
fig = plt.figure(figsize=(10, 7))
ax = fig.add_subplot(111, projection='3d')
ax.plot_surface(x, y, z, cmap='viridis', alpha=0.6)

# Initialize a plot for the path
x_path = []
y_path = []
z_path = []
for path_coordinate in path:
    x_path.append(path_coordinate[0])
    y_path.append(path_coordinate[1])
    z_path.append(path_coordinate[2])


path_plot, = ax.plot(x_path, y_path, z_path, color='r', marker='.', markersize=10, label='Gradient Descent Path')
ax.set_xlabel('X axis')
ax.set_ylabel('Y axis')
ax.set_zlabel('f(x, y)')
ax.legend()

# Animation update function
def update(num, path, path_plot):
    path_plot.set_data(path[:num, 0], path[:num, 1])
    path_plot.set_3d_properties(f(path[:num, 0], path[:num, 1]))
    return path_plot,

# Create animation
ani = FuncAnimation(fig, update, frames=len(path), fargs=(path, path_plot), interval=1000)

plt.show()
