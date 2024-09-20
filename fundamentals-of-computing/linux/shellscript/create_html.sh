#!/bin/bash

FILE_NAME=${1:-index.html}

cat <<EOL > "$FILE_NAME"
<!DOCTYPE html>
<html lang="pt-br">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Document</title>
</head>

<body>
  <h1>hello, World!</h1>
</body>
</html>

EOL

echo "HTML file $FILE_NAME created successfully!"
