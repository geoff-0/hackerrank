// https://www.hackerrank.com/challenges/kangaroo/problem

const kangaroo = function(
    x1: number,
    v1: number,
    x2: number,
    v2: number) : string {
        if (x1 == x2) return "YES"
        if (v1 == v2 && x1 != x2) return "NO"
        if (v1 < v2) return "NO"

        while ( x1 < x2 && x2 <= 10000 ) {
            x1 += v1
            x2 += v2

            if ( x1 == x2 ) {
                return "YES"
            }
        }

        if ((x2 - x1) % (v2 - v1) == 0) {
            return "YES"
        } else if ((x2 - x1) % (v2 - v1) != 0) {
            return "NO"
        }

        return "NO"
    }