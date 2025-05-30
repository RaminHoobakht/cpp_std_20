

inline double add(double a, double b) noexcept;


inline double threashold{11.1};


inline double add(double a, double b) noexcept {
    if ((a > threashold) && (b < threashold)) {
        return a + b;
    } else {
        return threashold;
    }
}
