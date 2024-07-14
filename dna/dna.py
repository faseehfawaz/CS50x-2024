import csv
import sys


def main():

    database = []
    results = {}

    if len(sys.argv) != 3:
        print("Usage: python dna.py DATABASE SEQUENCE")

    with open(sys.argv[1]) as file:
        reader = csv.reader(file)

        for row in reader:
            database.append(row)

    with open(sys.argv[2]) as file:
        sequence = file.read()

    for i in range(1, len(database[0])):
        subsequence = "".join(x for x in database[0][i])

        results[subsequence] = longest_match(sequence, subsequence)

    sequence_dna = list(results.values())

    for person in database[1:][0:]:
        person_dna = [int(i) for i in person[1:]]

        if person_dna == sequence_dna:
            sys.exit(person[0])

    print("No match")


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    for i in range(sequence_length):

        count = 0

        while True:

            start = i + count * subsequence_length
            end = start + subsequence_length

            if sequence[start:end] == subsequence:
                count += 1

            else:
                break

        longest_run = max(longest_run, count)

    return longest_run


if __name__ == "__main__":
    main()
