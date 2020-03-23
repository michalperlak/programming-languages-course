/*
Write a function cumsum : int list -> int list that takes a list of numbers
and returns a list of the partial sums of these numbers.
For example cumsum [1, 4, 20]  = [1, 5, 25]
*/

let cumsum = (xs) => {
    let rec sumImpl = (xxs, acc, res) => {
        if (List.length(xxs) == 0) {
            res
        } else {
            let newAcc = acc + List.hd(xxs);
            sumImpl(List.tl(xxs), newAcc, res @ [newAcc]);
        }
    };
    sumImpl(xs, 0, []);
};

Js.log(cumsum([1, 4, 20]));
