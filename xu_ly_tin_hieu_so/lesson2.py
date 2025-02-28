import numpy as np
from pathlib import Path
import pandas as pd
import matplotlib.pyplot as plt

file_path = Path("C:/Users/ThuanPD/Documents/ECG_data.xlsx")
df = pd.read_excel(file_path, header=None)
Fs = 125 
N = df.shape[1]  
T = N / Fs 
time = np.linspace(0, T, N, endpoint=False)
ecg_signal = df.iloc[0].values
plt.figure(figsize=(12, 4))
plt.plot(time, ecg_signal, label="ECG Signal")
plt.xlabel("Thời gian (s)")
plt.ylabel("Biên độ")
plt.title("Tín hiệu ECG trong miền thời gian")
plt.legend()
plt.grid()
plt.show()
freqs = np.fft.fftfreq(N, d=1/Fs) 
fft_values = np.fft.fft(ecg_signal) 
magnitude = np.abs(fft_values)  
positive_freqs = freqs[:N // 2]
positive_magnitude = magnitude[:N // 2]

plt.figure(figsize=(12, 4))
plt.plot(positive_freqs, positive_magnitude, label="Phổ tần số ECG", color='r')
plt.xlabel("Tần số (Hz)")
plt.ylabel("Biên độ")
plt.title("Phổ tần số của tín hiệu ECG")
plt.xlim(0, 10)  
plt.legend()
plt.grid()
plt.show()
max_freq_index = np.argmax(positive_magnitude[positive_freqs < 4])
heart_rate_hz = positive_freqs[max_freq_index] 
heart_rate_bpm = heart_rate_hz * 60 
print(f"Số nhịp tim mỗi phút là: {heart_rate_bpm:.2f} BPM")
