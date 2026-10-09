def find_first_non_repeating_char(string):
    count = [0] * 256

    for ch in string:
        count[ord(ch)] += 1

    for ch in string:
        if count[ord(ch)] == 1:
            return ch

    return None


def main():
    string = input()

    result = find_first_non_repeating_char(string)

    if result is not None:
        print("First non-repeating character is:", result)
    else:
        print("No non-repeating character found.")


if __name__ == "__main__":
    main()
