import time
import numpy as np

def init(fp):
    tokens = fp.read().split()
    n = int(tokens[0])
    a = [float(token) for token in tokens[1:1+n]]
    return n, a

def process(a_np):
    a_np.sort()

def check(a):
    return all(a[i-1] <= a[i] for i in range(1, len(a)))
for i in range(1, 11):
    num = str(i).zfill(2)
    name = f"dsa{num}.inp"
    
    with open("dsa_dir/" + name, "r") as fp:
        n, a = init(fp)
    
    a_np = np.array(a)
    
    start = time.perf_counter()
    
    process(a_np)
    
    end = time.perf_counter()
    duration = (end - start) * 1000  
    
    # print(check(a_np))
    print(f"{duration:.0f}")
