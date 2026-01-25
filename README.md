## dsa-cp

**DSA (Data Structures & Algorithms)** and **CP (Competitive Programming)** reference, notes, and solutions using 
**C++** and **Java**.

---

### 🧩 Languages & Versions
- **C++**: C++20
- **Java**: Java 21 

---

### 🛠️ Linux Bash Helper (C++)

add in `~/.bashrc`:

```bash
gpp() {
    mkdir -p out
    name="out/${1%.*}.out"
    g++ -std=c++20 -DLOCAL -Wall -Wextra -Wshadow -O2 "$1" -o "$name" && time "./$name"
}

bench() {
    hyperfine --shell=none "out/$1.out"
}
```

Usage:
```
gpp sol.cpp
```

Benchmarking:
```
bench sol
```
