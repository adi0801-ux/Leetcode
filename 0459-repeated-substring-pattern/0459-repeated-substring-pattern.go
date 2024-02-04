func repeatedSubstringPattern(s string) bool {
    n := len(s)
    for l := n / 2; l > 0; l-- {
        if n%l == 0 {
            time := n / l
            pattern := s[0:l]
            var res []byte
            for time > 0 {
                res = append(res, pattern...)
                time--
            }
            if string(res) == s {
                return true
            }
        }
    }
    return false
}
