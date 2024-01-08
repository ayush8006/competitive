#include "Mod.h"
#include "euclid1.h"
#include <iostream>
using namespace std;

long Mod::default_modulus = INITIAL_DEFAULT_MODULUS;
ostream& operator<<(ostream& os, const Mod& M) {
    if (!M.is_invalid()) {
        os << "Mod(" << M.get_val() << "," << M.get_mod() << ")";
    } else {
        os << "INVALID";
    }
    return os;
}

Mod Mod::add(Mod that) const {
    if (is_invalid() || that.is_invalid()) return Mod(0, 0);
    if (mod != that.mod) return Mod(0, 0);
    return Mod(val + that.val, mod);
}

Mod Mod::multiply(Mod that) const {
    if (is_invalid() || that.is_invalid()) return Mod(0, 0);
    if (mod != that.mod) return Mod(0, 0);
    return Mod(val * that.val, mod);
}

Mod Mod::inverse() const {
    long d, a, b;
    if (is_invalid()) return Mod(0, 0);
    d = gcd(val, mod, a, b);
    if (d > 1) return Mod(0, 0);
    return Mod(a, mod);
}

Mod Mod::pow(long k) const {
    if (is_invalid()) return Mod(0, 0);

    if (k < 0) {
        return (inverse()).pow(-k);
    }

    if (k == 0) return Mod(1, mod);

    if (k == 1) return *this;

    if (k % 2 == 0) {
        Mod tmp = pow(k / 2);
        return tmp * tmp;
    }

    Mod tmp = pow((k - 1) / 2);
    return tmp * tmp * (*this);
}

int main() {
    Mod x, y, z;
    x.set_default_modulus(11);

    x = Mod(17, 10);
    y = Mod(24);
    z = Mod(-3);

    cout << "x =  " << x << endl;
    cout << "y =  " << y << endl;
    cout << "z =  " << z << endl;

    cout << "y+z =  " << y.add(z) << endl;
    cout << "y-z =  " << y.add(z.inverse()) << endl;
    cout << "y*z =  " << y.multiply(z) << endl;
    cout << "y/z =  " << y.multiply(z.inverse()) << endl;

    cout << "x+3 =  " << x.add(Mod(3)) << endl;
    cout << "x-3 =  " << x.add(Mod(-3)) << endl;
    cout << "x*3 =  " << x.multiply(Mod(3)) << endl;
    cout << "x/3 =  " << x.multiply(Mod(1).inverse()) << endl;

    return 0;
}
