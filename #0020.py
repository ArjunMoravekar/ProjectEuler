  def digisum(s):
      res = 0
      while s:
          res += s % 10
          s //= 10
      print(res)

  def fac(s):
      if s == 0:
          return 1
      return s * fac(s - 1)
  
  digisum(fac(100))
