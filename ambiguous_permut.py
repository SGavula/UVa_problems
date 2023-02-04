import sys

def main():
    a = 0
    for tempInput in sys.stdin:
        a += 1
        if(a % 2 == 0):
            number2 = tempInput.split()
            array = list("0" * len(number2))
            b = 0
            for i in range(len(number2)):
                b = int(b) + 1
                pos = int(number2[i]) - 1
                array[pos] = str(b)
            if(array == number2):
                print("ambiguous")
            else:
                print("not ambiguous")

        else:
            number1 = tempInput.split()
            if(number1[0] == 0):
                break

if __name__ == "__main__":
    main()