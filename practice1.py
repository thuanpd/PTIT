import numpy as np
import matplotlib.pyplot as matplotlib

listFrequencies = [25, 50, 100, 200] 
signal_frequency = 8 
duration = 1  

matplotlib.figure(figsize=(12, 8))

for i, Fs in enumerate(listFrequencies):
    Ts = 1 / Fs  
    t = np.arange(0, duration, Ts) 
    y = np.sin(2 * np.pi * signal_frequency * t)  
    
    matplotlib.subplot(2, 2, i + 1)
    matplotlib.plot(t, y, marker='o', label=f'Fs = {Fs} Hz')
    matplotlib.title(f'Tần xuất = {Fs} Hz')
    matplotlib.xlabel('Thời gian (s)')
    matplotlib.ylabel('Biên độ')
    matplotlib.grid()
    matplotlib.legend()

matplotlib.tight_layout()
matplotlib.show()
