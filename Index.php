<!DOCTYPE html>
<html lang="PT-BR">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Meu Site</title>
    <link rel="stylesheet" href="Style.css">
</head>
<body>
    <?php
    include_once("Barra de Navegação.html");
    ?>
<hr>
    <?php
        if(empty($_SERVER["QUERY_STRING"])){
            $var = "Menu.html";
            include_once("$var");
        }
        else{
            $pg = $_GET['pg'];
            include_once("$pg.html");
        }
    ?>
<hr>
    <?php
    include_once("Rodapé.html");
    ?>
</body>
</html>