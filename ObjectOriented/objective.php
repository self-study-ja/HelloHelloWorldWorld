<?php
class HelloClass
{
    function __construct($init_string)
    {
        $this->with_echo_string = $init_string;
    }

    public function echo_with_hello()
    {
        echo "Hello, " . $this->with_echo_string;
    }
    
}

$hello = new HelloClass("world.");
$hello->echo_with_hello();

$goodbye = new HelloClass("and Goodbye.");
$goodbye->echo_with_hello();