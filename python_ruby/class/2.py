class Cal(object):
    def __init__(self, a1, v2):
        self.a1 = a1
        self.v2 = v2

    def add(self):
        return self.a1+self.v2

    def subtract(self):
        return self.a1-self.v2
c1 = Cal(10,10)
print(c1.add())
print(c1.subtract())
c2 = Cal(30,20)
print(c2.add())
print(c2.subtract())
