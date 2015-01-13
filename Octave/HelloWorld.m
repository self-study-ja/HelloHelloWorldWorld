function msg = GenerateHello()
    msg = ["H", "e", "l", "l", "o"]
end

function msg = GenerateWorld()
    msg = "World"
end

disp([GenerateHello(), ", " GenerateWorld(), "."])

