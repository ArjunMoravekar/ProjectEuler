    def digisum(s):
        res = 0
        while s:
            res += s % 10
            s //= 10
        print(res)

    digisum(pow(2, 1000))
