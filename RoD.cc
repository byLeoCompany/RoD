programm (title: "Sample"):
  scene (title: "Main"):
    object (name: "Bg", source: "Background"):
      event (name: "onStart"):
        formula (name: "setWidth"):
          {"Bg", "720"}
        formula (name: "setHeight"):
          {"Bg", "1280"}
        formula (name: "setVariable"):
          {"speed", "8"}
        formula (name: "setVariable"):
          {"счёт", "0"}
        formula (name: "setVariable"):
          {"счёт_текст", "'счёт:_'"}
        formula (name: "strVariable"):
          {"счёт_текст", "'<счёт>'"}
        formula (name: "setYVariable"):
          {"счёт_текст", "-500"}
        formula (name: "setSizeVariable"):
          {"счёт_текст", "40"}
        formula (name: "setVisibleVariable"):
          {"счёт_текст", "true"}
        formula (name: "setColorVariable"):
          {"счёт_текст", "black"}
        formula (name: "setVariable"):
          {"рекорд", "0"}
        formula (name: "setVariable"):
          {"рекорд_текст", "'рекорд:_'"}
        formula (name: "strVariable"):
          {"рекорд_текст", "'<счёт>'"}
        formula (name: "setYVariable"):
          {"рекорд_текст", "-570"}
        formula (name: "setSizeVariable"):
          {"рекорд_текст", "40"}
        formula (name: "setVisibleVariable"):
          {"рекорд_текст", "true"}
        formula (name: "setColorVariable"):
          {"рекорд_текст", "black"}
    object (name: "Player", source: "Player"):
      event (name: "onFun", "collisions"):
        formula (name: "setFun"):
          {"collisions"}
        formula (name: "if"):
          {"(<xPlayer> - 45 меньше <xBot1> + 45 и <xPlayer> + 45  больше <xBot1> - 45 и <yPlayer> + 45 больше <yBot1> - 45 и <yPlayer> - 45 меньше <yBot1> + 45) или (<xPlayer> - 45 меньше <xBot2> + 45 и <xPlayer> + 45  больше <xBot2> - 45 и <yPlayer> + 45 больше <yBot2> - 45 и <yPlayer> - 45 меньше <yBot2> + 45) или (<xPlayer> - 45 меньше <xBot3> + 45 и <xPlayer> + 45  больше <xBot3> - 45 и <yPlayer> + 45 больше <yBot3> - 45 и <yPlayer> - 45 меньше <yBot3> + 45) или (<xPlayer> - 45 меньше <xBot4> + 45 и <xPlayer> + 45  больше <xBot4> - 45 и <yPlayer> + 45 больше <yBot4> - 45 и <yPlayer> - 45 меньше <yBot4> + 45)"}               
        formula (name: "if"):
          {"<счёт> больше <рекорд>"}
        formula (name: "setVariable"):
          {"рекорд", "<счёт>"}
        formula (name: "setVariable"):
          {"рекорд_текст", "'рекорд:_<рекорд>'"}
        formula (name: "ifEnd"):
        formula (name: "setVariable"):
          {"счёт", "0"} 
        formula (name: "setX"):
          {"Player", "0"} 
        formula (name: "setVariable"):
          {"xPlayer", "0"} 
        formula (name: "setRandom"):
          {"xBot1", "-315::315"} 
        formula (name: "setX"):
          {"Bot1", "<xBot1>"} 
        formula (name: "setRandom"):
          {"yBot1", "800::1200"} 
        formula (name: "setY"):
          {"Bot1", "<yBot1>"} 
        formula (name: "setRandom"):
          {"xBot2", "-315::315"} 
        formula (name: "setX"):
          {"Bot2", "<xBot2>"} 
        formula (name: "setRandom"):
          {"yBot2", "800::1200"} 
        formula (name: "setY"):
          {"Bot2", "<yBot2>"} 
        formula (name: "setRandom"):
          {"xBot3", "-315::315"} 
        formula (name: "setX"):
          {"Bot3", "<xBot3>"} 
        formula (name: "setRandom"):
          {"yBot3", "800::1200"} 
        formula (name: "setY"):
          {"Bot3", "<yBot3>"} 
        formula (name: "setRandom"):
          {"xBot4", "-315::315"} 
        formula (name: "setX"):
          {"Bot4", "<xBot4>"} 
        formula (name: "setRandom"):
          {"yBot4", "800::1200"} 
        formula (name: "setY"):
          {"Bot4", "<yBot4>"} 
        formula (name: "setVariable"):
          {"счёт_текст", "'счёт:_<счёт>'"}
        formula (name: "ifEnd"):
      event (name: "onStart"):
        formula (name: "setWidth"):
          {"Player", "90"}
        formula (name: "setHeight"):
          {"Player", "90"}
        formula (name: "setY"):
          {"Player", "-300"}
        formula (name: "setVariable"):
          {"yPlayer", "-300"}
        formula (name: "setVariable"):
          {"xPlayer", "0"}
        formula (name: "setFun"):
          {"collisions"}
    object (name: "Right", source: "Button"):
      event (name: "onFun", "rightPress"):
        formula (name: "setFun"):
          {"rightPress"}
        formula (name: "if"):
          {"<rightPress> равно 1 и <xPlayer> меньше 315"}
        formula (name: "setX"):
          {"Player", "<xPlayer> + 4"}
        formula (name: "updVariable"):
          {"xPlayer", "4"}
        formula (name: "ifEnd"):
      event (name: "onStart"):
        formula (name: "setVariable"):
          {"rightPress", "0"}
        formula (name: "setWidth"):
          {"Right", "150"}
        formula (name: "setHeight"):
          {"Right", "150"}
        formula (name: "setX"):
          {"Right", "260"}
        formula (name: "setY"):
          {"Right", "-540"}
        formula (name: "setFun"):
          {"rightPress"}
      event (name: "onClick"):
        formula (name: "setVariable"):
          {"rightPress", "1"}
      event (name: "onClickEnd"):
        formula (name: "setVariable"):
          {"rightPress", "0"}
    object (name: "Left", source: "Button"):
      event (name: "onFun", "leftPress"):
        formula (name: "setFun"):
          {"leftPress"}
        formula (name: "if"):
          {"<leftPress> равно 1 и <xPlayer> больше (-315)"}
        formula (name: "setX"):
          {"Player", "<xPlayer> - 4"}
        formula (name: "updVariable"):
          {"xPlayer", "-4"}
        formula (name: "ifEnd"):
      event (name: "onStart"):
        formula (name: "setVariable"):
          {"leftPress", "0"}
        formula (name: "setWidth"):
          {"Left", "150"}
        formula (name: "setHeight"):
          {"Left", "150"}
        formula (name: "setX"):
          {"Left", "-260"}
        formula (name: "setY"):
          {"Left", "-540"}
        formula (name: "setFun"):
          {"leftPress"}
      event (name: "onClick"):
        formula (name: "setVariable"):
          {"leftPress", "1"}
      event (name: "onClickEnd"):
        formula (name: "setVariable"):
          {"leftPress", "0"}
    object (name: "Bot1", source: "Bot"):
      event (name: "onFun", "Bot1Go"):
        formula (name: "setFun"):
          {"Bot1Go"}
        formula (name: "setY"):
          {"Bot1", "<yBot1> - <speed>"}
        formula (name: "updVariable"):
          {"yBot1", "-<speed>"}
        formula (name: "if"):
          {"<yBot1> меньше -800"}
        formula (name: "updVariable"):
          {"счёт", "1"}
        formula (name: "setVariable"):
          {"счёт_текст", "'счёт:_<счёт>'"}
        formula (name: "setRandom"):
          {"yBot1", "800::1200"}
        formula (name: "setY"):
          {"Bot1", "<yBot1>"}
        formula (name: "setRandom"):
          {"xBot1", "-315::315"}
        formula (name: "setX"):
          {"Bot1", "<xBot1>"}
        formula (name: "ifEnd"):
      event (name: "onStart"):
        formula (name: "setWidth"):
          {"Bot1", "90"}
        formula (name: "setHeight"):
          {"Bot1", "90"}
        formula (name: "setX"):
          {"Bot1", "260"}
        formula (name: "setY"):
          {"Bot1", "1000"}
        formula (name: "setVariable"):
          {"yBot1", "1000"}
        formula (name: "setVariable"):
          {"xBot1", "260"}
        formula (name: "setFun"):
          {"Bot1Go"}
    object (name: "Bot2", source: "Bot"):
      event (name: "onFun", "Bot2Go"):
        formula (name: "setFun"):
          {"Bot2Go"}
        formula (name: "setY"):
          {"Bot2", "<yBot2> - <speed>"}
        formula (name: "updVariable"):
          {"yBot2", "-<speed>"}
        formula (name: "if"):
          {"<yBot2> меньше -800"}
        formula (name: "updVariable"):
          {"счёт", "1"}
        formula (name: "setVariable"):
          {"счёт_текст", "'счёт:_<счёт>'"}
        formula (name: "setRandom"):
          {"yBot2", "800::1200"}
        formula (name: "setY"):
          {"Bot2", "<yBot2>"}
        formula (name: "setRandom"):
          {"xBot2", "-315::315"}
        formula (name: "setX"):
          {"Bot2", "<xBot2>"}
        formula (name: "ifEnd"):
      event (name: "onStart"):
        formula (name: "setWidth"):
          {"Bot2", "90"}
        formula (name: "setHeight"):
          {"Bot2", "90"}
        formula (name: "setX"):
          {"Bot2", "80"}
        formula (name: "setY"):
          {"Bot2", "1000"}
        formula (name: "setVariable"):
          {"yBot2", "1000"}
        formula (name: "setVariable"):
          {"xBot2", "80"}
        formula (name: "setFun"):
          {"Bot2Go"}
    object (name: "Bot3", source: "Bot"):
      event (name: "onFun", "Bot3Go"):
        formula (name: "setFun"):
          {"Bot3Go"}
        formula (name: "setY"):
          {"Bot3", "<yBot3> - <speed>"}
        formula (name: "updVariable"):
          {"yBot3", "-<speed>"}
        formula (name: "if"):
          {"<yBot3> меньше -800"}
        formula (name: "updVariable"):
          {"счёт", "1"}
        formula (name: "setVariable"):
          {"счёт_текст", "'счёт:_<счёт>'"}
        formula (name: "setRandom"):
          {"yBot3", "800::1200"}
        formula (name: "setY"):
          {"Bot3", "<yBot3>"}
        formula (name: "setRandom"):
          {"xBot3", "-315::315"}
        formula (name: "setX"):
          {"Bot3", "<xBot3>"}
        formula (name: "ifEnd"):
      event (name: "onStart"):
        formula (name: "setWidth"):
          {"Bot3", "90"}
        formula (name: "setHeight"):
          {"Bot3", "90"}
        formula (name: "setX"):
          {"Bot3", "-80"}
        formula (name: "setY"):
          {"Bot3", "800"}
        formula (name: "setVariable"):
          {"yBot3", "800"}
        formula (name: "setVariable"):
          {"xBot3", "-80"}
        formula (name: "setFun"):
          {"Bot3Go"}
    object (name: "Bot4", source: "Bot"):
      event (name: "onFun", "Bot4Go"):
        formula (name: "setFun"):
          {"Bot4Go"}
        formula (name: "setY"):
          {"Bot4", "<yBot4> - <speed>"}
        formula (name: "updVariable"):
          {"yBot4", "-<speed>"}
        formula (name: "if"):
          {"<yBot4> меньше -800"}          
        formula (name: "updVariable"):
          {"счёт", "1"}
        formula (name: "setVariable"):
          {"счёт_текст", "'счёт:_<счёт>'"}
        formula (name: "setRandom"):
          {"yBot4", "800::1200"}
        formula (name: "setY"):
          {"Bot4", "<yBot4>"}
        formula (name: "setRandom"):
          {"xBot4", "-315::315"}
        formula (name: "setX"):
          {"Bot4", "<xBot4>"}
        formula (name: "ifEnd"):
      event (name: "onStart"):
        formula (name: "setWidth"):
          {"Bot4", "90"}
        formula (name: "setHeight"):
          {"Bot4", "90"}
        formula (name: "setX"):
          {"Bot4", "-260"}
        formula (name: "setY"):
          {"Bot4", "1200"}
        formula (name: "setVariable"):
          {"yBot4", "1200"}
        formula (name: "setVariable"):
          {"xBot4", "-260"}
        formula (name: "setFun"):
          {"Bot4Go"}
