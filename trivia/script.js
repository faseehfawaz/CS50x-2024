document.addEventListener("DOMContentLoaded", function() {

    let correctOption = document.querySelector(".correct");

    correctOption.addEventListener("click", function() {
        correctOption.style.backgroundColor = "green";
        document.querySelector("#feedback1").innerHTML = "Correct!";
    });

    let incorrectOption = document.querySelectorAll(".incorrect");

    for (let i = 0; i < incorrectOption.length; i++) {
        incorrectOption[i].addEventListener("click", function() {
            incorrectOption[i].style.backgroundColor = "red";
            document.querySelector("#feedback1").innerHTML = "Incorrect!";
        });
    }

    document.querySelector("#check").addEventListener("click", function() {

        let input = document.querySelector("input");

        if (input.value.toLowerCase() == "denali") {
            input.style.backgroundColor = "green";
            document.querySelector("#feedback2").innerHTML = "Correct!";
        }
        else {
            input.style.backgroundColor = "red";
            document.querySelector("#feedback2").innerHTML = "Incorrect!";
        }
    });
});
