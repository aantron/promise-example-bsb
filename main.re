let (p, resolve) = Promise.pending();
Js.log(p);

p
->Promise.map(s => s ++ " world!")
->Promise.get(Js.log);

resolve("Hello");
Js.log(p);
