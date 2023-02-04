import sys

def main():
    for tempInput in sys.stdin:
        array = tempInput.split()
        n = int(array[0])
        sum2 = (1 + (n-1)) * (n - 1) / 2
        sum1 = 0
        a = 0 
        b = 0 
        c = None

        for i in range(len(array) - 1):
            if(i != 0):
                a = int(array[i])
                b = int(array[i + 1])
                c = abs(a - b)
                sum1 = sum1 + c
                if(c == 0):
                    print("Not jolly")
                    break
        if(c != 0):
            if(sum1 == sum2 or n == 1):
                print("Jolly")
            else:
                print("Not jolly")
            
if __name__ == "__main__":
    main()