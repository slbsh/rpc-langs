// dotnet fsi --warn:0 thing.fsx
// author: slab
// fsharp forced me to use spaces instead of tabs, im sorry :<
open System

let calc op =
   match op with
      | "+" -> List.reduce (+)
      | "-" -> List.reduce (-)
      | "*" -> List.reduce (*)
      | "/" -> List.reduce (/)
      | _ -> failwith "Invalid operator"

while true do
   let line = Console.ReadLine().Split(' ') 

   if Array.length line < 2 then
      failwith "Invalid input"
   
   let op :: nums = line |> Array.toList

   calc op (List.map int nums) 
      |> printfn "%A"
