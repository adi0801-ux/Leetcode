func myPow(x float64, n int) float64 {
    if n == 0 {
        return 1.0
    }

    var ans float64 = 1.0
    nn := n
    if nn < 0 {
        x = 1.0 / x
        nn = -nn
    }

    for nn > 0 {
        if nn%2 != 0 {
            ans *= x
        }
        x *= x
        nn /= 2
    }

    return ans
}
