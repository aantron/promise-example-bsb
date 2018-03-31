/* Really simple node-fetch binding. */
type response;
type fetchError;

[@bs.module]
external fetch:
  string => Repromise.rejectable(response, fetchError) = "node-fetch";

[@bs.send]
external text:
  response => Repromise.rejectable(string, fetchError) = "";



/* Download this script's source code from GitHub and print it. */
let code =
  "https://raw.githubusercontent.com/"
  ++ "aantron/repromise-example-bsb/master/main.re";

let () =
  fetch(code)
  |> Repromise.Rejectable.then_(text)
  |> Repromise.Rejectable.map(Js.log)
  |> ignore;
