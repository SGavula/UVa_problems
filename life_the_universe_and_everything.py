import sys

def main():
    for tempInput in sys.stdin:
        number = int(tempInput)
        if(number != 42):
            print(number)
        else:
            break


if __name__ == "__main__":
    main()