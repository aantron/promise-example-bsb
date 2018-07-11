let (p, resolve_p) = Repromise.new_();

p
|> Repromise.map(s => s ++ ", world!")
|> Repromise.wait(print_endline);

resolve_p("Hello");
