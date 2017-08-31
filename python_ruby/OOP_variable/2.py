class C:
    def __init__(self,v):
        self.value = v
    def show(self):
        print(self.value)
    def getvalue(self):
        return self.value
    def setvalue(self,v):
        self.value = v

c1 = C(10)
print(c1.getvalue())
c1.setvalue(20)
print(c1.getvalue())
