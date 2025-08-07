

def gcd(a,b) :
    while (b!=0):
        a, b = b, a % b
    return a

def lcm(a, b):
    return int ((a*b) / gcd(a,b))

if __name__ == "__main__" :
    a = int(input("Enter a number:"))
    b = int(input("Enter another number:"))
    res = lcm(a,b)
    print(f"\nThe gcd of {a} and {b} is:", res)