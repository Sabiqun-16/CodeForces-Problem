#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main() {
    cpp_int a, b;
    cin >> a >> b;
    cpp_int ab = pow(a, b);
    cpp_int ba = pow(b, a);
    cpp_int result = ab - ba;
    cout << result << endl;
    return 0;
}
