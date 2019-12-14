import sys
class Klasa:
	def __init__(self, x):
		self.x = x
	def string(self, s):
		return self.x.join(s)
class Sala:
	def __str__(self):
		return "siema"
i = Sala
k = Klasa('x')
print(i)
print(k.string(sys.argv))
