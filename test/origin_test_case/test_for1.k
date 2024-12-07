
recipe main() : i32{
    ing i: i32;
    ing j: i32;
    i = 10;
    stir(j = 0 ; j < i ; j = j + 1) in {
        serve("%d ", j);
        taste(j >= i - 2) then {
           break;
        }
    }
    serveLn("");
    return 0;
}

