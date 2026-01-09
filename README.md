## dsa-cp

**DSA (Data Structures & Algorithms)** and **CP (Competitive Programming)** reference, notes, and solutions using 
**C++** and **Java**.

---

### 🧩 Languages & Versions
- **C++**: C++20
- **Java**: Java 21 

---

### 🛠️ Linux Bash Helper (C++)

Add this to your `~/.bashrc` to compile and run C++ programs quickly:

```bash
gpp() {
    name="${1%.*}.out"
    g++ -std=c++20 -Wall -Wextra -Wshadow -O2 "$1" -o "$name" && time ./"$name"
}
```

Usage:
```
gpp main.cpp
```
