import numpy as np
import matplotlib.pyplot as matplotlib
# b.Vẽ biểu đồ phổ của z dùng biến đổi Fourier nhanh (fast Fourier transform)
# trong phần mềm Matlab/Python (hoặc các ngôn ngữ khác). 
sampling_rate = 250  
duration = 20 
f1 = 8  
f2 = 30  
time = np.linspace(0, duration, int(sampling_rate * duration), endpoint=False)
signal1 = np.sin(2 * np.pi * f1 * time)
signal2 = np.sin(2 * np.pi * f2 * time)
combined_signal = signal1 + signal2
fft_result = np.fft.fft(combined_signal) 
frequencies = np.fft.fftfreq(len(fft_result), 1 / sampling_rate)

positive_frequencies = frequencies[:len(frequencies) // 2]
positive_magnitude = np.abs(fft_result[:len(fft_result) // 2]) / len(combined_signal)  

matplotlib.figure(figsize=(10, 4))
matplotlib.plot(positive_frequencies, positive_magnitude, label="Phổ của tín hiệu", color='r')
matplotlib.title("Biểu đồ phổ của tín hiệu tổng hợp (FFT)")
matplotlib.xlabel("Tần số (Hz)")
matplotlib.ylabel("Biên độ")
matplotlib.legend()
matplotlib.grid()
matplotlib.xlim(0, 50) 
matplotlib.show()
