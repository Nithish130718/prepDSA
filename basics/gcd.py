
# Greatest Common Divisor (GCD)
# Largest positive intger that divides a number 

def gcd(a,b) :
    while (b!=0):
        a, b = b, a % b
    return a

if __name__ == "__main__" :
    a = int(input("Enter a number:"))
    b = int(input("Enter another number:"))
    res = gcd(a,b)
    print(f"\nThe gcd of {a} and {b} is:", res)