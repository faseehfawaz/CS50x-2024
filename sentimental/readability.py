def main():

    sentence = input("Text: ")

    letters = count_letters(sentence)
    words = count_words(sentence)
    sentences = count_sentences(sentence)

    avg_letters = (100 / float(words)) * float(letters)
    avg_sentences = (100 / float(words)) * float(sentences)

    index = calculate_index(avg_letters, avg_sentences)

    if index < 1:
        print("Before Grade 1")
    elif index >= 16:
        print("Grade 16+")
    else:
        print(f"Grade {index}")


def count_letters(sentence):

    letters = 0

    for character in sentence:
        if character.isalpha():
            letters += 1

    return letters


def count_words(sentence):

    return len(sentence.split())


def count_sentences(sentence):

    sentences = 0

    for character in sentence:
        if character in [".", "!", "?"]:
            sentences += 1

    return sentences


def calculate_index(avg_letters, avg_sentences):

    return round(0.0588 * avg_letters - 0.296 * avg_sentences - 15.8)


if __name__ == "__main__":
    main()
