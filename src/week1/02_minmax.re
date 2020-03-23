/*
Write a function min_max : int list -> int * int that takes a non-empty list of numbers
and returns a pair (min, max) of the minimum and the maximum of the numbers in the list
*/

let min_max = (xs) => {
    let rec helper = (xxs, currMin, currMax) => {
        if (List.length(xxs) == 0) {
            (currMin, currMax);
        } else {
            let value = List.hd(xxs);
            helper(List.tl(xxs), min(value, currMin), max(value, currMax));
        }
    };
    helper(xs, 0, 0);
};

Js.log(min_max([1, 3, 19, -2, -5, 11]));
