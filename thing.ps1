# pwsh thing.ps1
# author: dj-viking HEAD of Poop

:loop while($true) {
    $input = $(read-host).split(" ", [stringsplitoptions]::removeemptyentries)

    if ($input.length -lt 2 -or $input[0] -notin @("+", "-", "/", "*")) {
        write-host "Invalid Input"
        continue
    }

    $acc = [int]($input[1]);

    for ($i = 2; $i -lt $input.length; $i++) {
        switch ($input[0]) {
            "*" {
                $acc *= [int]($input[$i])
            }
            "+" {
                $acc += [int]($input[$i])
            }
            "/" {
                $acc /= [int]($input[$i])
            }
            "-" {
                $acc -= [int]($input[$i])
            }
            default {
                write-host "Invalid Operator"
                continue loop
            }
        }
    } 
    write-host $acc 
}
