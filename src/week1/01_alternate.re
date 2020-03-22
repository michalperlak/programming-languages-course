/*
Write a function alternate : int list -> int that takes a list of numbers and adds them
with alternating sign. For example alternate [1, 2, 3, 4] = 1 - 2 + 3 - 4 = -2
*/

let alternate = (xs) => {
  let rec alt = (xxs, add, acc) => {
  		if (List.length(xxs) == 0) {
          acc
  		} else {
          let elem = List.hd(xxs);
  		  alt(List.tl(xxs), !add, if (add) { acc + elem } else { acc - elem });
  		}
  };
  alt(xs, true, 0);
};

Js.log(alternate([1, 2, 3, 4])); // -2