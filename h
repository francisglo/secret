import numpy as np
import matplotlib.pyplot as plt

# Simulación de condiciones extraterrestres
def simulate_environment():
    time = np.arange(0, 100, 0.1)  # Tiempo en millones de años
    temperature = np.random.uniform(200, 400, len(time))  # Temperatura en Kelvin
    radiation = np.random.uniform(0, 10, len(time))  # Radiación en unidades arbitrarias

    return time, temperature, radiation

# Análisis de datos astrobiológicos
def analyze_data(time, temperature, radiation):
    # Realizar análisis estadístico de los datos
    avg_temperature = np.mean(temperature)
    max_radiation = np.max(radiation)

    # Visualizar los datos
    plt.figure(figsize=(8, 6))
    plt.subplot(2, 1, 1)
    plt.plot(time, temperature, 'b-', label='Temperature')
    plt.xlabel('Time (Million years)')
    plt.ylabel('Temperature (K)')
    plt.title('Temperature Variation')
    plt.legend()

    plt.subplot(2, 1, 2)
    plt.plot(time, radiation, 'r-', label='Radiation')
    plt.xlabel('Time (Million years)')
    plt.ylabel('Radiation')
    plt.title('Radiation Variation')
    plt.legend()

    plt.tight_layout()
    plt.show()

    return avg_temperature, max_radiation

# Ejecutar el código principal
if __name__ == '__main__':
    time, temperature, radiation = simulate_environment()
    avg_temp, max_rad = analyze_data(time, temperature, radiation)

    print("Average Temperature: {:.2f} K".format(avg_temp))
    print("Maximum Radiation: {:.2f}".format(max_rad))
